#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <time.h> 

void ignorar(int sig)
{
    signal(SIGINT, SIG_DFL); // le informamos al kernel que ignore la siguente señal que se le entregue por consola
    printf("\n");
}

void signal_handler(int señal)
{
    time_t tiemporeal;
    struct tm * tiempo; // crea el formato en hora local

    time (&tiemporeal);//obtiene el tiempo real
    tiempo = localtime (&tiemporeal);

   if (señal == SIGUSR1) {
       printf("Señal SIGUSR1 recibida: %s", asctime(tiempo)); //imprimimos el tiempo que anterior mente calculamos en el formato que nos esntrega asctime()
       printf("Listo para recibir la señal SIGUSR1.\n");
       pause();
   }
}

int main(int argc, char *argv[]){
    signal(SIGINT, ignorar);//llamamos al metodo para que el kernel sepa de primera instancia que debe ignorar la siguiente señal que se ingrese en la consola donde se esta ejecutando el programa
    
    while(1) {
	    printf("Programa hora ejecutandose. PID=%d.\n", getpid());//obtenemos el pid del programa que se esta ejecutando
      printf("Listo para recibir la señal SIGUSR1.\n");

      signal(SIGUSR1, signal_handler);//llamamos la funcion que esperará al llamdo desde la otra consola

      pause();//pausamos el programa para que no se este ejecutando constantemente y este reanudara cuando se ingrese una señal por consola
	}
      
    return(EXIT_SUCCESS);
    
}