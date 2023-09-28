#include<stdio.h>
int main(){
    double a, b, arf1, arf2;
    scanf("%lf %lf", &a,&b);
    arf1=(a*a+b*b)/2;
    if (a<0)
    a=a*(-1);
    if (b<0)
    b=b*(-1);
    arf2=((a+b)/2);
    printf("%lf\n %lf\n", arf1, arf2);
    return 0;

}