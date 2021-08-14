/*=============================================================================
 * Author: Dany Tito - Pablo Morzán
 * Date: 2021/07/26
 * Version: 1.0
 *===========================================================================*/

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef __LEDS_H__
#define __LEDS_H__

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdint.h>
#include <stddef.h>
#include "sapi.h"

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/*=====[Prototypes (declarations) of public functions]=======================*/
/*=============================================================================
 * Function: encenderLed
 * Description: Chequea si el led está en el rango permitido y lo enciende.
 * Input: se le pasa el valor que hace referencia al led que se quiere encender
 * Output: No se devuelve dato
 *===========================================================================*/
void  encenderLed(gpioMap_t led);

/*=============================================================================
 * Function: apagarLeds
 * Description: Apaga todos los leds
 * Input: No recibe input
 * Output: No devuelve datos
 *===========================================================================*/
void  apagarLeds();

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* __LEDS_H__ */
