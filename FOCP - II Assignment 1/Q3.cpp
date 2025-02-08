#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

main() {

    // Accepting a string from the user

    char string[20];
    char replaceChar='*';
    int i,length,flag=0;
    cout<<"Enter any string";
    cin>>string;
    length=strlen(string);

    for(i=0;i<length;i++){

        // Checking whether the string is a palindrome or not

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
    
    
    //Counts and displays the frequency of each character in the string (case insensitive)


    cout<<"\n number of times character"<<endl;

    for(char ch='a';ch<='z';ch++){
        int count=0;
        for(int i=0;i<length;i++){
            if(string[i]==ch){
                count++;
            }
        }
        if(count>0){
            cout<<ch<<"="<<count<<endl;
        }
    }
    
    // Replace all vowels in the string with a specific character

    for (int i = 0; i < length; i++) {
        char ch = tolower(string[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            string[i] = replaceChar;
        }
    }

    cout << "String after replacing vowels: " << string << endl;

    return 0;
}
