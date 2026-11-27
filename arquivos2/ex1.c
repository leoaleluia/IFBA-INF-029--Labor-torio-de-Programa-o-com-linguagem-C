#include <stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h>



int main(){
    FILE *arq = fopen("listaCar.txt", "w");
    const nome[100];

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do jovem");
        scanf(" %[^\n]", nome);
        fprintf(arq, "%s\n", nome);

    }
    fclose(arq);

    FILE *arq2 = fopen("listaCar.txt", "r");
    while(fgets(nome,sizeof(nome), arq2)){
        printf("%s\n", nome);
    }
    printf("\n");
    fclose(arq2);



}


