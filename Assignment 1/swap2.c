#include<stdio.h> 

int main(){ 

    int n1,n2; 

    printf("enter n1,n2:"); 

    scanf("%d %d",&n1,&n2); 

    n1=n1+n2; 

    n2=n1-n2; 

    n1=n1-n2; 

    printf("number after swapping is %d and %d\n",n1,n2); 

    return 0; 

} 
