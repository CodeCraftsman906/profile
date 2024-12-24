
#include <stdio.h> 

#include<math.h> 

int main(){ 

    int n=5;// n=number of rows 

    for(int i=1;i<=n;i++){ 

        for(int j=0;j<i;j++){ 

            printf("%d",j%2); 

        } 

                printf("  "); 

         

           for(int j=0;j<i;j++){ 

                printf("%d",j%2); 

           } 

printf("\n"); 

}                            

return 0; 

} 
