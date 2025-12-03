#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to find roots of quadratic equation ax^2 + bx + c = 0
void findQuadraticRoots(double a, double b, double c) {
    // Calculate discriminant
    double discriminant = b * b - 4 * a * c;
    
    cout << fixed << setprecision(2);
    
    if (discriminant > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        cout << "Two distinct real roots:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // One real root (repeated)
        double root = -b / (2 * a);
        
        cout << "One real root (repeated):" << endl;
        cout << "Root = " << root << endl;
    }
    else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        
        cout << "Complex roots:" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;
    
    cout << "Enter coefficients a, b, c for equation ax^2 + bx + c = 0:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    
    if (a == 0) {
        cout << "Error: 'a' cannot be zero for a quadratic equation!" << endl;
    }
    else {
        findQuadraticRoots(a, b, c);
    }
    
    return 0;
}
