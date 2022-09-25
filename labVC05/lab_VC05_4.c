#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i = 1,x = 0;
    system("cls");
    while(i<10)
    {
        if(i%5==0)
        {
            printf("%d\n",x);
            break;
        }
        else
            x+=i;
        ++i;
    }
    printf("\nx = %d",x);
    system("pause");
    
}