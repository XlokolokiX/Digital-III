#include <stdio.h>

void saludar();
char Nombre[20];
char Respuesta[20];
unsigned int DNI = 0;

int main(){

    printf("Introduce tu nombre:\n");
    scanf("%s", Nombre);
    saludar();
    printf("Me permite su Numero de DNI? \n");
    scanf("%u", &DNI);

    while(1){
        printf("Su DNI es %d cierto?\n", DNI);
        scanf("%s", Respuesta);
        
        if( strcmp(Respuesta, "si") == 0 || strcmp(Respuesta, "Si") == 0 || strcmp(Respuesta, "SI") == 0){
            printf("Ah bueno, ahora lo anoto\n");
            break;
        }else{
            printf("Perdon, anote mal, me lo repite?\n");
            scanf("%u", &DNI);
        }
    }

    return 0;
}

void saludar(){
    printf("Hola %s!\n", Nombre);
}