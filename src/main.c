/*=============================================================================
 * Author: Dany Tito - Pablo Morzán
 * Date: 2021/07/26
 * Version: 1.0
 *===========================================================================*/

/*=====[Inclusions of function dependencies]=================================*/

#include "main.h"


/*=====[Definition macros of private constants]==============================*/

/*=====[Definitions of extern global variables]==============================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Main function, program entry point after power on or reset]==========*/



int main(void){


   /* ------------- INICIALIZACIONES ------------- */

   /* Inicializar la placa */
   boardConfig();


   /* Declaración de variables locales */


   //Inicialización de MEF
  initSemaforoMEF();

  delay_t tiempobase;
  delayInit( &tiempobase, 500 );
  uint8_t presionada = 0;
  uint8_t contTecla = 0;
 /* ------------- REPETIR POR SIEMPRE ------------- */

    while(1) {

    //actualizaciones de MEF
    if(delayRead(&tiempobase)){
    	updateSemaforoMEF(contTecla);
    	presionada=0;
    	contTecla=0;
    }

    presionada = updateTecla();
    contTecla += presionada;

/* NO DEBE LLEGAR NUNCA AQUI, debido a que a este programa no es llamado
      por ningun S.O. */
    }

    return 0 ;

}





//================================FUNCICONES=================================

