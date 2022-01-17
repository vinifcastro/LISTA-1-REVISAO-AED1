#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Função que escreve um numero ao contrario;
 * 
 * @param a numero a ser reescrito ao contrario;
 * @return Retorna o numero a invertido;
 */
int inverten(int a);

int main(){
    int * x = NULL;
    int i, k;
    scanf("%d", &k);
    x = (int *) malloc(k*sizeof(int));
    for(i=0; i<k; i++){
        scanf("%d", &x[i]);
    }
    for(i=0; i<k; i++){
        if (x[i] == inverten(x[i])) printf("yes ");
        else printf("no ");
    }
    printf("\n");
    free(x);
    return 0;
}

int inverten(int a){
    int um, c, d, u;
    um = a/1000;
    c = (a%1000)/100;
    d = ((a%1000)%100)/10;
    u = ((a%1000)%100)%10;
    return (um + c*10 + d*100 + u*1000);
}