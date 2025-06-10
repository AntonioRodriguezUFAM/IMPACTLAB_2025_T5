// Compiler: g++ (GNU Compiler Collection) version 9.3.0
// Módulo_01_Aula_02-03.cpp
//g++ Módulo_01_Aula_02-03.cpp -o Módulo_01_Aula_02-03

//Módulo_01_Aula_02-02.cpp

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') cout << a + b;
    else if (op == '-') cout << a - b;
    else if (op == '*') cout << a * b;
    else if (op == '/') cout << a / b;
    else cout << "Invalid operator!";
    cout << endl;
    return 0;
}