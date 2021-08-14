/*=============================================================================
 * Author: Dany Tito - Pablo Morzán
 * Date: 2021/07/26
 * Version: 1.0
 *===========================================================================*/

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef __TECLAS_H__
#define __TECLAS_H__

/*=====[Inclusions of public function dependencies]==========================*/
#include "sapi.h"
#include <stdint.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=============================================================================
 * Function: leerTecla
 * Description: Realiza un chequeo del estado de las teclas de la placa EDU-CIAA (TEC2)
 * Input: No se le pasan parámetros. Accede al estado de las teclas 0 presionado - 1 sin presionar
 * Output: Devuelve que tecla está presionada. En caso de presionar dos, se devuelve la de valor de referencia mas bajo.
 *===========================================================================*/
void inicializarMEF_TEC2(void);


/*=============================================================================
 * Function: actualizarMEF_TEC2
 * Description: Se hace polling del estado de la tecla 2, cuando esta se presiona se cambia el estado del semáforo
 * Input: No recibe input
 * Output: Devuelve un 1 cuando la tecla ha pasado de estado UP a DOWN.
 *===========================================================================*/
uint8_t actualizarMEF_TEC2(void);



/*=====[Definitions of public data types]====================================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* __TECLAS_H__ */
