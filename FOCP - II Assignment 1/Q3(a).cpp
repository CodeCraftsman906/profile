// C++ program that accepts a string from the user and checks whether a string is a palindrome or not

#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;

main() {

    // Taking string as an input from the user

    char string[20];
    int i,length,flag=0;
    cout<<"Enter any string";
    cin>>string;
    length=strlen(string);

    for(i=0;i<length;i++){

        // Checking whether the string is palindrome or not

        if(string[i] != string[length-i-1]){
            flag = 1;
            break;
        }
    }

    if(flag){
        cout<<string<<"The input string is not a palindrome";
    }

    else
    cout<<string<<"The input string is a palindrome";
    getch();
}
