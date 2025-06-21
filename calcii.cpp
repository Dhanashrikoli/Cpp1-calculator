#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "Enter operator( + , - , * , / ) : " <<op<< endl;
    cin >> op;
    cout << "Enter the first number : " <<num1<< endl;
    cin >> num1;
    cout << "Enter the second number : " <<num2<< endl;
    cin >> num2;
    switch (op)
    {
    case '+':
        cout << "addition is=" << num1 + num2 << endl;
        break;
    case '-':
        cout << "subtraction is =" << num1 - num2 << endl;
        break;
    case '*':
        cout << "multiplication is =" << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "divide is =" << num1 / num2 << endl;
        }
        else
        {
            cout << "Error : Division by zero " << endl;
            break;
        }
    default:
        cout << "invalid" << endl;
    }
    return 0;
}