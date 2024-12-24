
#include<stdio.h> 

int main(){ 

  int n,sum=0; 

  printf("enter n:"); 

  scanf("%d",&n); 

  for(int i=1;i<=n/2;i++){ 

      if(n%i==0){ 

          sum+=i; 

      } 

  } 

  if(sum==n ){ 

      printf("%d is perfect number",n); 

  } 

  else{ 

      printf("%d is not perfect number",n); 

  } 

    return 0; 

} 
