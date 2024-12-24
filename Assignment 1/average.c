
#include<stdio.h> 
#include<math.h>                                                           

int main(){ 

    int n,original,r,digits=0,sum=0; 

    printf("enter number:"); 

    scanf("%d",&n); 

    original=n; 

while(original>0){ 

    original/=10; 

    digits++; 

} 

original=n; 

while(original>0){ 

    r=original%10; 

    sum+=(int)pow(r,digits); 

    original/=10; 

} 

if(sum==n){ 

    printf("%d is armstrong number",n); 

} 

else{ 

    printf("%d is not armstrong number",n); 

} 

return 0; 

} 
