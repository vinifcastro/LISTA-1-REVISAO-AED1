#include <stdio.h>
#include <math.h>
#define pi 3.14159265

double aarea(double a, double b, double c, char type);

int main(){
    double n, i, a, b, c;
    char z;
    scanf("%lf%*c", &n);
    for (i = 0; i < n; i++){
        scanf("%c%*c", &z);
        switch(z){
            case 'C':
                scanf("%lf%*c", &a);
                printf("%.0lf\n", aarea(a,b,c,z));
                break;
            case 'E':
                scanf("%lf%*c%lf%*c", &a, &b);
                printf("%.0lf\n", aarea(a,b,c,z));
                break;
            case 'T':
                scanf("%lf%*c%lf%*c%lf%*c", &a, &b, &c);
                printf("%.0lf\n", aarea(a,b,c,z));
                break;
            case 'Z':
                scanf("%lf%*c%lf%*c%lf%*c", &a, &b, &c);
                printf("%.0lf\n", aarea(a,b,c,z));
                break;
            default:
                printf("Figura geometrica invalida!\n");
                break;
        }
    }
    return 0;
}

double aarea(double a, double b, double c, char type){
    double result;
    double h;
    switch(type){
            case 'C':
                result = a*a*pi;
                break;
            case 'E':
                result = a*b*pi;
                break;
            case 'T':
                if (a==b && b==c){
                    result = ((a*a)*sqrt(3))/4;
                }
                else if (a==b || a==c || b==c){
                    if (a==b){
                        h = sqrt(((a*a)-((c/2)*(c/2))));
                        result = (c*h)/2;
                    }
                    else if (a==c){
                        h = sqrt(((a*a)-((b/2)*(b/2))));
                        result = (b*h)/2;
                    }
                    else{
                        h = sqrt(((b*b)-((a/2)*(a/2))));
                        result = (a*h)/2;
                    }
                }
                else{
                    h = (a+b+c)/2;
                    result = sqrt((h*(h-a)*(h-b)*(h-c)));
                }
                break;
            case 'Z':
                result = ((a+b)*c)/2;
                break;
            default:
                break;
        }
    return result;
}