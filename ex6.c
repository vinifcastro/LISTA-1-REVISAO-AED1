#include <stdio.h>
#include <stdlib.h>

int main(){
    int * n = NULL;
    int x, z, k, w, menor;
    scanf("%d %d", &x, &k);
    n = (int *) calloc(k, sizeof(int));
    for(z=0; z<x; z++){
        scanf("%d", &w);
        n[(w-1)]++;
    }
    for(z=0; z<k; z++){
        if (z==0) menor = n[z];
        else{
            if(n[z]<menor) menor = n[z];
        }
    }
    printf("%d\n", menor);
    free(n);
    return 0;
}