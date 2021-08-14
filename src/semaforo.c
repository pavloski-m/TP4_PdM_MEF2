///*=============================================================================
// * Author: Dany Tito - Pablo Morzán
// * Date: 2021/07/26
// * Version: 1.0
// *===========================================================================*/
//
///*=====[Inclusions of function dependencies]=================================*/
//
#include "semaforo.h"

void initNORMAL();
void updateNORMAL();

void initDESC();
void updateDESC();

void initALARM();
void updateALARM();

/*=====[Definition macros of private constants]==============================*/

/*=====[Definitions of extern global variables]==============================*/

/*=====[Definitions of public global variables]==============================*/



/*=====[Definitions of private global variables]=============================*/

typedef enum {
	NORMAL, DESCONECTADO, ALARMA, QTY_MODOS
}modosMEF;

typedef enum {
	N_ROJO, N_ROJOAMARILLO, N_VERDE, N_AMARILLO, QTY_NORM
} NORMAL_MEF;

typedef enum {
	A_ROJO, A_SEM_OFF, QTY_ALARM
} ALARMA_MEF;

typedef enum {
	D_AMARILLO, D_SEM_OFF, QTY_DESC
} DESCONECTADO_MEF;


static modosMEF modoSemaforo;
static NORMAL_MEF normal1;
static ALARMA_MEF alarma1;
static DESCONECTADO_MEF desconectado1;

///*=====[Main function, program entry point after power on or reset]==========*/
//

void initSemaforoMEF(uint8_t flagINIT){

	if(1 == flagINIT){
		modoSemaforo= NORMAL;
		normal1=N_ROJO;
		alarma1=A_ROJO;
		desconectado1=D_AMARILLO;
	}

	apagarLeds();

	switch (modoSemaforo){

		case NORMAL:
			initNORMAL();
			break;
		case DESCONECTADO:
			initDESC();
			break;
		case ALARMA:
			initALARM();
			break;
		}
};

void updateSemaforoMEF(uint8_t contTecla){

	if(contTecla!=0){
		modoSemaforo++;
		modoSemaforo = modoSemaforo % QTY_MODOS; // para hacer un array circular
	}

	switch (modoSemaforo){

	case NORMAL:
		updateNORMAL();
		break;
	case DESCONECTADO:
		updateDESC();
		break;
	case ALARMA:
		updateALARM();
		break;
	}
}



void initNORMAL(){
	normal1 = N_ROJO;
	updateNORMAL();
}

void updateNORMAL(){
	switch(normal1){
	case N_ROJO:
		if(cont<6){
			apagarLeds();
			encenderLed(LED2);
			cont++;}
		else{
			normal1 = N_ROJOAMARILLO;
			cont=0;
		}
		break;

	case N_ROJOAMARILLO:
		apagarLeds();
		encenderLed(LED1);
		encenderLed(LED2);
		normal1 = N_VERDE;
		break;

	case N_VERDE:
		if(cont<2){
			apagarLeds();
			encenderLed(LED3);
			cont++;}
		else{
			normal1 = N_AMARILLO;
			cont=0;
		}
		break;

	case N_AMARILLO:
		apagarLeds();
		encenderLed(LED1);
		normal1 = N_ROJO;
		break;

	default:
		initSemaforoMEF(0);
		break;
	}
}

void initDESC(){
	desconectado1 = D_AMARILLO;
	updateDESC();
}

void updateDESC(){
	switch(desconectado1){
	case D_AMARILLO:
		if(cont<2){
			apagarLeds();
			encenderLed(LED1);
			cont++;}

		else{
			desconectado1 = D_SEM_OFF;
			cont = 0;}

	break;

	case D_SEM_OFF:
		if(cont<2){
			apagarLeds();
			cont++;}

		else{
			desconectado1 = D_AMARILLO;
			cont = 0;}
	break;
	default:
		initSemaforoMEF(0);
	}
}

void initALARM(){
	alarma1 = A_ROJO;
	updateALARM();
}

void updateALARM(){
	switch(alarma1){
		case A_ROJO:
			apagarLeds();
			encenderLed(LED2);
			alarma1 = A_SEM_OFF;
			cont = 0;
		break;

		case A_SEM_OFF:
			apagarLeds();
			alarma1 = A_ROJO;
			cont = 0;
		break;
		default:
			initSemaforoMEF(0);
		}
}

