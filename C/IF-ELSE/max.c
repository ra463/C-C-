#include <stdio.h>

int main(){
    int a,b,c;
        a = 3;
        b = 6;
        c = 5;
        
    if((a>b && a>c))
         printf("%d is greater", a);
    else if((b>a && b>c))
         printf("%d is greater", b);
    else
         printf("%d is greater", c);
         
    return 0;
}