#include <stdio.h>
#include <stdlib.h>

int main(){
    int * z = NULL;
    int p, s, x, d, i;
    scanf("%d %d", &p, &s);
    z = (int *) calloc(p, sizeof(int));
    for (i=0; i<s; i++){
        scanf("%d %d", &x, &d);
        z[(x-1)] = 1;
        if ((x+d-1)<p) z[(x-1+d)] = 1;
        else{
            z[((x+d))-p] = 1;
        }
        if ((x-d)>0) z[(x-1-d)] = 1;
        else{
            z[((p-1)+(x-d))] = 1;
        }
    }
    for (i=0; i<p; i++){
        printf("%d\n", z[i]);
    }
    free(z);
    return 0;
}