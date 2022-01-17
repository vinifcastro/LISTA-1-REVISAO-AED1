#include <stdio.h>

/**
 * @brief Escreve na tela do usuário se houve ou nao overflow;
 * 
 * @param a memoria total do sistema;
 * @param b memoria utilizada;
 */
void overflow(int a, int b);

int main(){
    int a, b, num, num2;
    char c;
    scanf("%d%*c", &num);
    scanf("%d%*c%c%*c%d", &a, &c, &b);
    switch(c){
        case '+':
            num2 = a+b;
            overflow(num, num2);
            break;
        case 'x':
            num2 = a*b;
            overflow(num, num2);
            break;
        default:
            printf("Operador invalido!\n");
            break;
    }
    return 0;
}

void overflow(int a, int b){
    if (a>=b) printf("no overflow\n");
    else printf("overflow\n");
}