#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    if (ch == 'z' || ch == 'Z' )
        printf("a\n");
        else if (ch == 'Z' )
        printf("A\n");
    else
        printf("%c\n", ch + 1);
    
    return 0;
}
