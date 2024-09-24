#include<stdio.h>
#include<conio.h>
void main()
{
    int bsal,hra,da,allow,pf,tsal;
    char grade;
    printf("Enter basic salary");
    scanf("%d",&bsal);
    printf("%d",bsal);
    printf("Enter grade");
    scanf(" %c",&grade);
    if(grade=='A')
    allow=1700;
    else if(grade=='B')
    allow=1500;
    else
    allow=1300;
    hra= 0.2*bsal;
    da= 0.5*bsal;
    pf= 0.11*bsal;
    tsal= bsal+hra+da+allow-pf;
    printf("Total salary is: %d",tsal);
    return 0;
    getch();
}