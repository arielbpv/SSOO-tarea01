# SSOO-tarea01
 
Primero creamos un metodo llamado ignorar() que se encargara mdeiante la funcion SIG_DFL de informarle al kernel que debe ignorar la primera señal que se le entregue por lo cual en este caso al comento de introducir el comando crtl+c el kernel ignorara la primera señal y cuando ingresemos el mismo comando por segunda vez este si lo tomara en cuenta y terminara el proceso que se esta ejecutando.

luego crearemos el metodo signal_handler() en la cual ocuparemos distintas funciones de la libreria time.h en dononde en primer crearemos una varieble tiemporeal, luego una variable llamada tiempo que sera de tipo tm que tiene una esstructura ya predefinida y le asignaremos a esa variable mediante la funcion localtime() que nos entregara un puntero hacia la informacion que esta en la variable tiemporeal que utilizaremos mas adelante

luego mediante un if veremos si es que la señal que se le manda al proceso es el deseado que en este caso sera SIGUSR1 con la cual se hara un  print del formato de hora que nos entrega la funcion asctime() que ya viene con un formato predefinido que es el que debemos utilizar en la tarea. 

Nombre del autor: Ariel Bastian Peña Valencia
Correo institucional: ariel.pena@alumnos.uv.cl

Bibliografia:
https://stackoverflow.com/questions/33922223/what-exactly-sig-dfl-do

https://www.gnu.org/software/libc/manual/html_node/Using-Pause.

https://www.youtube.com/watch?v=IEcw8IDEncI

https://www.youtube.com/watch?v=rNGlwqHpoGw

https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/time-time32-time64?view=vs-2019

https://www.tutorialspoint.com/c_standard_library/c_function_localtime.htm

https://stackoverflow.com/questions/5141960/get-the-current-time-in-c