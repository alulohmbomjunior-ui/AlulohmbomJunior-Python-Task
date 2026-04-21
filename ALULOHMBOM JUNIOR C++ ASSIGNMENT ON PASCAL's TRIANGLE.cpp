#include <iostream>

using namespace std;

void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int space = 1; space <= n - i; space++) {
            cout << "  ";
        }

        int val = 1;
        for (int j = 0; j <= i; j++) {
            cout << val << "   ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        printPascalTriangle(n);
    }

    return 0;
}
