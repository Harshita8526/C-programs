#include<stdio.h>
#include<conio.h>

int main(){


   
    int a,b,c;
    char ch;
    do
    {
       printf("Enter the digit ");
       scanf("%d",&a);
       c=0;
       while(a>0){
        b=a%10;
        c=c*10+b;
        a=a/10;
       }
       printf("Rev digit %d  ",c);

        printf("\nDo you wanna cont..press(Y/N) ");
        fflush(stdin);
        scanf("%c",&ch);



        
    } while (ch=='Y' || ch=='y');
    
    }
