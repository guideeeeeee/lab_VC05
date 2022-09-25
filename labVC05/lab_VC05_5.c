#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int i = 0,x = 0;
    system("cls");
    for(i=1;i<10;++i)
    {
        if(i%2==0)
        {
            if(i==6)
            {
                continue;
            }
            x+=i;
            printf("%d\n",x);
        }
    }
    printf("\nx = %d",x);
    system("pause");
    
}