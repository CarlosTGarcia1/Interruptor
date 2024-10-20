#include <stdio.h>

int main(){
	int estado=0; 
	char entrada; 
	while (1){
		if (estado==1){
            printf(" ON\n");
        }else{
            printf(" OFF\n");
        }
        printf("Presiona 'c' para cambiar el estado, 's' para salir: ");
        scanf("%c",&entrada);
        if(entrada=='c'){
            estado=!estado;
        }else if(entrada=='s'){
            printf("Saliendo...\n");
            break;
		}
    }
    return 0;
}

