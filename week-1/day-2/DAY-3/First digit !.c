#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    num = num / 1000;
    if (num%2 == 0)
    {
       printf("EVEN\n");
       
    }
    else{
        printf("ODD\n");
        
    }
    
    return 0;
}