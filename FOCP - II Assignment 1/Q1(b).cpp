// C++ program that takes a positive integer n as input, checks whether n is prime, and if it is, finds the next prime number greater than n


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if n is prime
    bool isPrime = true;
    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;

        // Find the next prime number greater than n
        int next = n + 1;
        while (true) {
            bool nextIsPrime = true;
            for (int i = 2; i * i <= next; i++) {
                if (next % i == 0) {
                    nextIsPrime = false;
                    break;
                }
            }
            if (nextIsPrime) {
                cout << "The next prime number greater than " << n << " is " << next << "." << endl;
                break;
            }
            next++;
        }
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
