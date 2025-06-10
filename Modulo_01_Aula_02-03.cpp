// Compiler: g++ (GNU Compiler Collection) version 9.3.0
// Módulo_01_Aula_02-03.cpp
//g++ Módulo_01_Aula_02-03.cpp -o Módulo_01_Aula_02-03

// Módulo_01_Aula_02-03.cpp
#include <iostream>
using namespace std;

int main() {
    // Print a welcome message
    cout << "Hello, World!" << endl;
    
    // Basic variable declarations and arithmetic
    int a = 5;
    int b = 3;
    int sum = a + b;
    
    // Output the result
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    
    // Simple if-else statement
    if (sum > 5) {
        cout << "Sum is greater than 5" << endl;
    } else {
        cout << "Sum is 5 or less" << endl;
    }
    
    // Basic for loop
    cout << "Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}