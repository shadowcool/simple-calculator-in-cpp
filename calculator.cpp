#include <iostream>

using namespace std;

double Calculator(double no1, double no2, string method) {
    double result  = 0;
    if(method == "*") {
        result = no1 * no2;
    }else if(method == "/") {
        result = no1 / no2;
    }else if(method == "+") {
        result = no1 + no2;
    }else if(method == "-") {
        result = no1 - no2;
    }
    return result;
}

int main() {
    int no1, no2;
    string method;
    cout << "Input First Number: " << endl;
    cin >> no1;
    cout << "Input Second Number:" << endl;
    cin >> no2;
    cout << "Input Calculation Method. IE: + , - , / , * :" << endl;
    cin >> method;
    double answer = Calculator(no1, no2, method);
    cout << "The Answer is: "  << answer;
   return 0;
}