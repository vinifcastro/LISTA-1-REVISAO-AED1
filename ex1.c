#include <stdio.h>

int main(){
    int x, z, c = 0;
    z = 1986;
    scanf("%d", &x);
    if (x>=z){
        while(z<=x){
            z+=76;
            c+=19;
        }
    }
    else if(x<z){
        while(1){
            z-=76;
            c+=19;
            if (z<=x){ 
                z+=76;
                break;
            }
        }
    }
    if (c>365) z+=-1;
    printf("%d", z);
    return 0;
}