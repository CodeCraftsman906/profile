#include<stdio.h> 

int main(){ 

    int n1,n2,temporary_variable; 

    printf("enter n1,n2:"); 

    scanf("%d %d",&n1,&n2); 

    temporary_variable=n1; 

    n1=n2;  

n2=temporary_variable; 

    printf("numbers after swapping is %d and %d\n",n1,n2); 

    return 0; 

} 
