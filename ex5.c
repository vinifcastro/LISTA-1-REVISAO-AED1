#include <stdio.h>

/**
 * @brief Codifica o número no padrão da biologia A C G T, correspondendo respectivamente a 0 1 2 3; 
 * 
 * @param x número a ser codificado;
 * @return letra correspondente ao numero;
 */
char cod(int x);

int main(){
    char l[1000];
    int x, i, z, k, j;
    scanf("%d", &x);
    for(i=0; i<x; i++){
        k=0;
        scanf("%d", &z);
        while(z!=0){
            l[k] = cod((z%4));
            z/=4;
            k++;
        }
        for (j=k-1; j>=0; j--){
            printf("%c", l[j]);
        }
        printf("\n");
    }
    return 0;
}

char cod(int x){
    char z;
    switch(x){
        case 0:
            z = 'A';
            break;
        case 1:
            z = 'C';
            break;
        case 2:
            z = 'G';
            break;
        case 3:
            z = 'T';
            break;
        default:
            break;
    }
    return z;
}