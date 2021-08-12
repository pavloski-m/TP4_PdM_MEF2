/*=============================================================================
 * Author: Dany Tito - Pablo Morzán
 * Date: 2021/07/26
 * Version: 1.0
 *===========================================================================*/

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef __SECUENCIA_H__
#define __SECUENCIA_H__

/*=====[Inclusions of public function dependencies]==========================*/

//#include <stdint.h>
//#include <stddef.h>
#include "leds.h"

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/


//typedef struct {              // definimos este struct para manejo de los punteros a secuencias
//	gpioMap_t *pDesplaza;
//	gpioMap_t *pInicio;
//	gpioMap_t *pFinal;
//	uint8_t seqSize;
//}ptrSemaforo;

void updateSemaforoMEF(uint8_t contTecla);

/*=====[Prototypes (declarations) of public functions]=======================*/

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* __SEMAFORO_H__ */
