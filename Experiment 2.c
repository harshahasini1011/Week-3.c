#include<stdio.h>
int main(){
int a,b,choice;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
printf(" 1.addition 2.subraction 3.multiplication 4.division\n");
scanf("%d",&choice);
switch(choice){
case 1:printf("sum=%d",a+b);break; 
case 2:printf("sub=%d",a-b);break;
case 3:printf("mult=%d",a*b);break;
case 4:printf("div=%d",a/b);break;
default:printf("invalid");
}
return 0;
}
