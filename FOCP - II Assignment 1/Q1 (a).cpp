// C++ program that takes a positive integer n as input, checks whether n is prime, and if it is not , prints all its factors

#include <iostream>
using namespace std;

int main(){
       
    int n, i, c = 0;

    // Taking postive integer n as input and checking whether n is a prime number or not
    
    cout << "Enter any number n: "; 
    cin>>n;
    
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }

    if (c == 2){
       cout << "n is a Prime number" << endl;
    }
    
    else{

        // Printing all the factors of positive integer n if it is not prime

        cout << "n is not a Prime number" << endl;
        cout << "Factors of " << n << " are: ";
        for(i = 1; i <= n; ++i) {
            if(n % i == 0)
                cout << i << " ";
        }

        return 0; 
    }

}

