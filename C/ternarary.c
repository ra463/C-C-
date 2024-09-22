#include <stdio.h>

int main(){
    int a,b,c,larg;
        a = 3;
        b = 6;
        c = 5;
   larg = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Largest number is: %d", larg);     
    
   return 0;
}