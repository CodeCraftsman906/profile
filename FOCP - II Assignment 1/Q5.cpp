#include<bits/stdc++.h>
using namespace std;
int main(){

   int n=4;
   int mat[n][n]= { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };

   //Tranposing the matrix
   for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++)
         swap(mat[i][j], mat[j][i]);
   }

   //Reversing each row of the matrix
   for(int i=0; i<n; i++){
     for(int j=0; j<n/2; j++){
        swap(mat[i][j], mat[i][n-j-1]);
     }
   }

   //Print the matrix
   cout<<"Rotated Matrix :\n";
   for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
       cout<<mat[i][j]<<" ";
     }
     cout<<endl;
   }
}
