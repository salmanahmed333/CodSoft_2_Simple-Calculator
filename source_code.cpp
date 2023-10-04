#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    //Declaring variables needed for the program
    double num1, num2;
    char operation, choice;
    //Changing design of the console
    system("CLS");
    system("COLOR 02");
    cout<<"*********************"<<endl
        <<"* SIMPLE CALCULATOR *"<<endl
        <<"*********************"<<endl<<endl;
    //Do-while loop for using the calculator multiple times
    do
    {
        cout<<"Enter 1st Number: ";
        cin>>num1;
        cout<<"Enter operator (+, -, *, /): ";
        cin>>operation;
        cout<<"Enter 2nd Number: ";
        cin>>num2;
        //Switch-case statement for deciding which operation to perform
        switch (operation)
        {
            case '+':
                cout<<num1<<" + "<<num2<<" = "<<num1 + num2;
                break;
            case '-':
                cout<<num1<<" - "<<num2<<" = "<<num1 - num2;
                break;
            case '*':
                cout<<num1<<" * "<<num2<<" = "<<num1 * num2;
                break;
            case '/':
                if (num2 != 0)  //Checking whether the denominator is zero
                    cout<<num1<<" / "<<num2<<" = "<<num1/num2;
                else
                    cout<<"Division by Zero Error!";
                break;
            default:
                cout<<"Invalid Operation!";
        }
        cout<<"\n\nDo you want to continue using the calculator?(y/n) ";
        cin>>choice;
    }
    while (choice == 'y');
    cout<<"Thanks for using this calculator :)";
    return 0;
}