#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, k, i, j, z;
    scanf("%d", &j);
    for(i=0; i<j; i++){
        scanf("%d", &x);
        z = 0;
        for(k=2;k<x;k++){
            if ((x%k)==0){
                z = 1;
                k=x;
            }
        }
        if (z==1) printf("composto\n");
        else printf("primo\n");
    }
    return 0;
}
