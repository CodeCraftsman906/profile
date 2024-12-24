
#include<stdio.h> 

#include<math.h> 

int main(){ 

    int n1,n2,min,hcf; 

    printf("enter two numbers:"); 

    scanf("%d %d",&n1,&n2); 

    min=(n1<n2)?n1:n2; 

    for(int i=1;i<=min;i++){ 

        if(n1%i==0 && n2%i==0){ 

            hcf=i; 

        } 

    } 

    printf("hcf of %d and %d is %d\n",n1,n2,hcf); 

    return 0; 

} 
