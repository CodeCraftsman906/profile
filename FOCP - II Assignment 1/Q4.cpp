#include <iostream>
using namespace std;

void printSpiral(int n) {
    int arr[n][n];
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Fill the top row
        for (int i = left; i <= right; i++) {
            arr[top][i] = value++;
        }
        top++;

        // Fill the right column
        for (int i = top; i <= bottom; i++) {
            arr[i][right] = value++;
        }
        right--;

        // Fill the bottom row
        for (int i = right; i >= left; i--) {
            arr[bottom][i] = value++;
        }
        bottom--;

        // Fill the left column
        for (int i = bottom; i >= top; i--) {
            arr[i][left] = value++;
        }
        left++;
    }

    // Print the spiral pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// CALLING OUT THE FUNCTION
int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    printSpiral(n);

    return 0;
}
