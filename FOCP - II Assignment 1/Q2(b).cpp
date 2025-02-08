//C++ PROGRAM TO FIND AND DISPLAY the SECOND LARGEST AND SECOND SMALLEST ELEMENTS IN THE ARRAY.

#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize variables to store the largest and second largest elements
    int largest = INT_MIN, secondLargest = INT_MIN;
    // Initialize variables to store the smallest and second smallest elements
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        // Update largest and second largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "The second largest element is: " << secondLargest << endl;
    cout << "The second smallest element is: " << secondSmallest << endl;

    return 0;
}
