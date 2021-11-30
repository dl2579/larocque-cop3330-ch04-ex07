#include "std_lib_facilities.h"

using namespace std;

int main()
{
    vector<string> numStr = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    string operation;
    string aStr;
    string bStr;

    double a;
    double b;

    cout << "Enter an operation followed by two operands: ";
    cin >> operation >> aStr >> bStr;

    for(int i=0; i<numStr.size(); i++){
        if (aStr == numStr[i]) {
            a = i;
            break;
        }

        stringstream ss;
        ss << aStr;
        ss >> a;
    }

    
    for(int i=0; i<numStr.size(); i++){
        if (bStr == numStr[i]) {
            b = i;
            break;
        }

        stringstream ss;
        ss << bStr;
        ss >> b;
    }

    Calculator c;
    c.Calculate(operation, a, b);

    return 0;

}

void Calculator::Calculate(std::string operation, double a, double b)
{
    if(operation=="+"){
        cout << "The sum of " << a << " and " << b << " is " << a+b << endl;
    }

    else if(operation=="-"){
        cout << "The difference of " << a << " and " << b << " is " << a-b << endl;
    }

    else if (operation=="*"){
        cout << "The product of " << a << " and " << b << " is " << a*b << endl;
    }

    else if (operation=="/"){
        cout << "The quotient of " << a << " and " << b << " is " << a/b << endl;
    }
}


