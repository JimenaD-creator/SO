#include <unistd.h>
#include <stdio.h>

int main(){
    int pid = fork();
    if(pid == 0){
        printf("Soy el hijo \n");
        execl("./hola","hola", "Jimena", "Sofi", "Ilan", (char *) NULL);
        printf("ESTA LINEA NO DEBE EJECUTARSE");

    }
printf("Soy el proceso padre \n");
return 0;
}
