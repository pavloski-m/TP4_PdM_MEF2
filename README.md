# TP4_PdM_MEF2


-Integrantes:
-----
MORZÁN, Pablo javier - pablomorzan@gmail.com

TITO, Dany           - danyxxxiv@gmail.com

--------------------------------------

Implementar mediante el modelo de Máquina de Estados Finitos el antirrebote de teclas y la lógica de funcionamiento de un semáforo.

--------------------------------------
Objetivo:
----
PUNTO 1:
---
Implementar un módulo de software en los archivos teclas.c y teclas.h, que encapsule el funcionamiento de las teclas de la EDU-CIAA-NXP. 

Dentro del módulo se debe implementar:
Una MEF que resuelva el antirrebote por software con dos funciones asociadas, una para inicializar la MEF y otra para actualizar el estado de la MEF.

Los estados de la MEF se deben implementar con un tipo de dato enumerativo (enum).

Una función buttonPressed(gpioMap_t tecla) que resuelva las acciones correspondientes al flanco descendente. 

La función puede aceptar un argumento que indique qué tecla se presionó

Una función buttonReleased(gpioMap_t tecla) que resuelva las acciones correspondientes al flanco ascendente.

La función puede aceptar un argumento que indique qué tecla se liberó

Implementar un controlador de semáforos dentro de un módulo de software con archivos semaforo.c y semaforo.h.

=================================================================================================

Punto 3:
---
El controlador se debe implementar como una MEF con dos funciones asociadas, una para inicializar la MEF y otra para actualizar el estado de la MEF.

Los estados de la MEF se deben implementar con un tipo de dato enumerativo (enum).

El semáforo debe tener los siguientes modos de operación:

 - Normal: secuencia de leds: rojo 3 s, rojo y amarillo 500 mS, verde 1s, amarillo y rojo nuevamente....
 - Desconectado: led amarillo intermitente cada 500 mS.
 - Alarma: rojo intermitente cada 1 s

Con la tecla 2 de la EDU-CIAA-NXP se debe poder cambiar el modo de operación del semáforo a normal. Con cada flanco ascendente se debe ciclar el modo en el siguiente orden: normal, desconectado, alarma, normal, etc...
