/*=============================================================================
 * Author: Dany Tito - Pablo Morzán
 * Date: 2021/07/26
 * Version: 1.0
 *===========================================================================*/

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef __SECUENCIA_H__
#define __SECUENCIA_H__

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdint.h>
#include <stddef.h>
#include "leds.h"

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/


/*=============================================================================
 * Function: initSemaforoMEF
 * Description: Inicia los estados de los MEF al inicio y ante un desvío de comportamiento esperado.
 * Input: Recibe un parametro 1 cuando es necesario inicializar el estado de los MEF por primera vez.
 * Output: No devuelve nada.
 *===========================================================================*/
void initSemaforoMEF(uint8_t flagINIT);


/*=============================================================================
 * Function: updateSamaforoMEF
 * Description: Actualiza los estados del semáforo y de los estados de cada modo del semáforo
 * Input: Se ingresa un 1 cuando la tecla ha sido presionada.
 * Output: No devuelve nada.
 *===========================================================================*/
void updateSemaforoMEF(uint8_t contTecla);


static uint8_t cont = 0;
/*=====[Prototypes (declarations) of public functions]=======================*/

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* __SEMAFORO_H__ */
