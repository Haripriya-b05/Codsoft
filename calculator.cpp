#include <iostream>
using namespace std;


class calculator
{
private:
    int number_1, number_2;

public:
    void addition()
    {
        cout << "Enter the first number: ";
        cin >> number_1;
        cout << "Enter the second number: ";
        cin >> number_2;
        cout << "Addition of " << number_1 << " and " << number_2 << " is: " << number_1 + number_2;
    }
    void subtraction()
    {
        cout << "Enter the first number: ";
        cin >> number_1;
        cout << "Enter the second number: ";
        cin >> number_2;
        cout << "subtraction of " << number_1 << " and " << number_2 << " is: " << number_1 - number_2;
    }
    void multiply()
    {
        cout << "Enter the first number: ";
        cin >> number_1;
        cout << "Enter the second number: ";
        cin >> number_2;
        cout << "multiplication of " << number_1 << " and " << number_2 << " is: " << number_1 * number_2;
    }
    void divide()
    {
        cout << "Enter the first number: ";
        cin >> number_1;
        cout << "Enter the second number: ";
        cin >> number_2;
        if(number_2==0){
            cout<<"invalid division. cannot divide with zero!!";
        }
        else{
        cout << "Division of " << number_1 << " and " << number_2 << " is: " <<float(number_1) / float(number_2);
        }
    }
};

int main()
{

    int choice;
    int loop = 1;
    char ans;
    calculator cal;

    while (loop)
    {
        cout << "---------------------------------\n\n";
        cout << "ENTER 1 FOR ADDITION\n";
        cout << "ENTER 2 FOR SUBTRACTION\n";
        cout << "ENTER 3 FOR MULTIPLICATION\n";
        cout << "ENTER 4 FOR DIVISION\n";
        cout << "ENTER 5 TO EXIT CALCULATOR\n";
        cout << "---------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1: 
            cal.addition();
            cout << "\n\n";
            break;

        case 2:
            cal.subtraction();
            cout << "\n\n";
            break;

        case 3:
            cal.multiply();
            cout << "\n\n";
            break;

        case 4:
            cal.divide();
            cout << "\n\n";
            break;

        case 5:
            cout << "thankyou for using the calculator. you have exited successfully!!";
            loop = 0;
            break;

        default:
            cout << "entered wrong choice!!! please enter the correct choice again\n";
        }

    }
}