#include<stdio.h> 

int main(){ 

    int a,b; 

    printf("enter a and b:"); 

    scanf("%d %d",&a,&b); 

    while(b!=0){ 

    int udhar=(~a)&b; 

    a=a^b; 

    b=udhar<<1; 

    } 

    printf("the result of subtraction is %d\n",a); 

    return 0; 

} 
