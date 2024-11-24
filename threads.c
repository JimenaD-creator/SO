#include <stdio.h>
#include <pthread.h>

void * printHello(void *arg){ //Es una referencia
    int hid = *((int *)arg); //El contenido de la dirección de memoria
    printf("Hola desde el hilo %d\n", hid);
    pthread_exit(NULL); //El programa principal espera a cada hilo
}
    
int main(){
    int NUM_THREADS = 20;
    pthread_t threadStatus[NUM_THREADS];  //Guardar estatus del proceso
    int hids[NUM_THREADS];
    for(int i=0; i<NUM_THREADS; i++){
        hids[i]=i;
        pthread_create(&threadStatus[i], NULL, printHello, (void*)&hids[i]); //Disfrazar el tipo de dato
   
    //printf("Hola desde el main\n"); //Espera a que los hijos se ejecuten
    }
    pthread_exit(NULL);
}