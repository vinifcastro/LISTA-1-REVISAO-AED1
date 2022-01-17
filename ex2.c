#include <stdio.h>

/**
 * @brief Escreve um numero de 3 digitos ao contrário;
 * 
 * @param a numero a ser escrito ao contrário;
 * @return Retorna por meio de ponteiros o numero invertido;
 */
void inverten(int * a);

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    inverten(&x);
    inverten(&y);
    if (x>y) printf("%d\n", x);
    else printf("%d\n", y);
    return 0;
}

void inverten(int * a){
    int c, d, u;
    c = *a/100;
    d = (*a%100)/10;
    u = (*a%100)%10;
    *a = c + d*10 + u*100;
}