/*=============================================================================
 * Author: Dany Tito - Pablo Morzán
 * Date: 2021/07/31
 * Version: 1.0
 *===========================================================================*/

/*=====[Inclusions of function dependencies]=================================*/

#include "teclas.h"

/*=====[Definition macros of private constants]==============================*/

typedef enum{
	B_UP,
	B_FALL,
	B_DOWN,
	B_RAISE,

	B_QTY
}EstadosBotones;


EstadosBotones tecla2 = B_UP;

/*=====[Definitions of extern global variables]==============================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Main function, program entry point after power on or reset]==========*/

uint8_t press = 0;

delay_t delayTEC2;


//================================FUNCIONES=================================

void inicializarMEF_TEC2(void){
	if (gpioRead(TEC2)){
		tecla2 = B_UP;
	}
	else {tecla2 = B_DOWN;
	}
	delayConfig( &delayTEC2, 40 );
};


uint8_t actualizarMEF_TEC2(void){
	switch(tecla2){
	case B_UP :
		if(!gpioRead(TEC2)){
			tecla2 = B_FALL;
		}
		break;

	case B_DOWN :
		if(gpioRead(TEC2)){
			tecla2 = B_RAISE;
		}
		break;

	case B_RAISE :
		if(delayRead( &delayTEC2 )){
			if(gpioRead(TEC2)){
				tecla2 = B_UP;
				press = 0;
			}
		}
		break;

	case B_FALL :
		if(delayRead( &delayTEC2 )){
			if(!gpioRead(TEC2)){
				tecla2 = B_DOWN;
				press = 1;
			}
		}
		break;

	}
return press;
}
//
//void buttonPressed(gpioMap_t tecla){
//	gpioWrite(tecla+6, OFF);
//}
//
//void buttonReleased(gpioMap_t tecla){
//	gpioWrite(tecla+6, ON);
//}

