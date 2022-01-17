#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n, j, i, k, temp;
    int ** result = NULL;
    int ** x1 = NULL;
    char z;
    int ** x2 = NULL;
    scanf("%d%*c%d%*c", &m, &n);
    x1 = (int**) malloc(m*sizeof(int*));
    x2 = (int**) malloc(m*sizeof(int*));
    for (i=0; i<m; i++){
        x1[i] = (int*) malloc(n*sizeof(int));
        x2[i] = (int*) malloc(n*sizeof(int));
    }
    for (i=0;i<m; i++){
        for(k=0;k<n;k++){
            scanf("%d%*c", &x1[i][k]);
        }
    }
    scanf("%c", &z);
    for (i=0;i<m; i++){
        for(k=0;k<n;k++){
            scanf("%d", &x2[i][k]);
        }
    }

    switch(z){
        case '+':
            for (i=0;i<m; i++){
                for(k=0;k<n;k++){
                    x1[i][k] += x2[i][k];
                }
            }
            printf("\n");
            for (i=0;i<m; i++){
                for(k=0;k<n;k++){
                    printf("%d ", x1[i][k]);
                }
                printf("\n");
            }
            break;
        case 'x':
            if (m!=n){
                printf("ERROR\n");
            }
            else{
                result = (int**) malloc(m*sizeof(int*));
                for (i=0; i<m; i++){
                    result[i] = (int*) malloc(n*sizeof(int));
                }
                for (i=0; i<n;i++){
                    for (k=0; k<n; k++){
                        temp = 0;
                        for (j=0; j<n; j++){
                            temp+=x1[i][j]*x2[j][k];
                        }
                        result[i][k] = temp;
                    }
                }
                for (i=0; i<n;i++){
                    for (k=0; k<n; k++){
                        x1[i][k]=result[i][k];
                    }
                }

                printf("\n");
                for (i=0;i<m; i++){
                    for(k=0;k<n;k++){
                        printf("%d ", x1[i][k]);
                    }
                    printf("\n");
                }

                for (i=0; i<m; i++){
                    free(result[i]);
                }
                free(result);
            }
            break;
        default:
            printf("Operacao invalida!\n");
            break;
    }

    for (i=0; i<m; i++){
        free(x1[i]);
    }
    for (i=0; i<m; i++){
        free(x2[i]);
    }
    free(x1);
    free(x2);
    return 0;
}