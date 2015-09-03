/*in ra bang ma ascii*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i;
    for(i=0;i<=255;i++)
    {
        if(i%10==0)
             getch();
        printf("%d     %c\n",i,i);
        
    }
    getch();
    return 0;
}
