#include <stdio.h> 

#include<math.h> 

int binarytodecimal(long long binary); 

long long decimaltobinary(int decimal); 

int main() { 

    int choice; 

    printf("Enter choice:"); 

    //choice=1 binarytodecimal choice=2 decimaltobinary 

    scanf("%d",&choice); 

    if(choice==1){ 

        long long binary; 

        printf("enter binary "); 

        scanf("%11d",&binary); 

        printf("decimal=%d\n",binarytodecimal(binary)); 

    } 

    else if(choice==2){ 

        int decimal; 

        printf("enter decimal :"); 

        scanf("%d\n",&decimal); 

        printf("binary=%11d\n",decimaltobinary(decimal)); 

    } 

      else{ 

          printf("invalid choice"); 

      } 

      return 0; 

} 

      int binarytodecimal(long long binary){ 

          int decimal=0,r,i=0; 

          while(binary!=0){ 

              r=binary%10; 

              decimal+=r*pow(2,i); 

              binary/=10; 

              i++; 

      } 

      return decimal; 

      } 

      long long decimaltobinary(int decimal){ 

          long long binary=0,r,i=1; 

          while(decimal!=0){ 

              r=decimal%2; 

              binary+=r*i; 

              decimal/=2; 

              i*=10; 

          } 

          return binary; 

      } 
