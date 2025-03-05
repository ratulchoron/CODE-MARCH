#include <stdio.h>
 
int main(){
    float x, p ;
    scanf("%f %f", &x , &p);
    float o_pp = x/(100-x)*p+p;
    // o_pp *= p
    // float opp = o_pp + p;
    printf("%.2f\n", o_pp);
    return 0;
}