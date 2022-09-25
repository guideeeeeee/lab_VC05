#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
void main() {
    int i = 0 , x = 0;
    while(i <20)
    {
        if(i%5 == 0)
        { 
            x+= i;
            printf("%d\n");
        }
    ++i;
    }
    printf("\nx=%d",x);
    system("pause");
    
}