// C++ PROGRAM to accept an integer array from the user , reverse the array and display it

#include<iostream>
using namespace std;

int main() {
    int n,i;

// Accept an integer array from the user

    cout<<"Enter number of elements you want to input:"<<endl;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++) {
        cout<<"enter elements:"<<i+1<<"="<<" ";
        cin>>arr[i];
    }
    cout<<"elements are:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

// Reverse the array and display it

    cout<<"reverse elements are:"<< endl;
    for(i=n-1;i>=0;i--) {
        cout<<arr[i]<<endl;
    }
}
