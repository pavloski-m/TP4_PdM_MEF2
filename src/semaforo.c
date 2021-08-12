///*=============================================================================
// * Author: Dany Tito - Pablo Morzán
// * Date: 2021/07/26
// * Version: 1.0
// *===========================================================================*/
//
///*=====[Inclusions of function dependencies]=================================*/
//
#include "semaforo.h"
//
///*=====[Definition macros of private constants]==============================*/
//
///*=====[Definitions of extern global variables]==============================*/
//
///*=====[Definitions of public global variables]==============================*/
//
///*=====[Definitions of private global variables]=============================*/

typedef enum {
	ROJO, ROJOAMARILLO, VERDE, AMARILLO
} NORMAL_MEF;


typedef enum {
	NORMAL, DESCONECTADO, ALARMA
}modosMEF;

NORMAL_MEF

modosMEF modoSemaforo;

///*=====[Main function, program entry point after power on or reset]==========*/
//

void initSemaforoMEF(){

	modoSemaforo = NORMAL;

	encenderLED(modoSemaforo);


};

void updateSemaforoMEF(uint8_t contTecla){

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



