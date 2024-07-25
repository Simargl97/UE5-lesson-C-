#include <iostream>
#include "Helpers.h"

using namespace std;

void PrintNumbers(int NumbersFunc, int UserChoice)
{
    for (int a = 1; a <= NumbersFunc; a++)
    {
        if ((a % 2) &&  UserChoice == 1)
        {
            cout << "\n" << a;
        }
        else if (a % 2 == 0 && UserChoice == 2)
        {
            cout << "\n" << a;
        }
    }
}

int main()
{
    
    // Task 13
    cout << "the square of their sum: " << sum(10, 10) << "\n";
    cout << "--------------------------------\n";

    
    // Task 14
    std::string name = "ConsoleApplication";
    cout << name << "\n" << name.length() << "\n" << name[0] << "\n" << name[name.length() - 1] << "\n";
    cout << "--------------------------------\n";

    
    // Task 15

    /*в главном исполняемом файле (файл в котором находится функция main) используя цикл и условия вывести
    в консоль все четные числа от 0 до N (N задавать константой в начале программы).*/
    
    const int Numbers = 13;

    for (int i = 1; i <= Numbers; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
    }


    /*Написать функцию, которая в зависимости от своих параметров печатает в консоль либо четные
    либо нечетные числа от 0 до N (N тоже сделать параметром функции).*/
    cout << "--------------------------------\n";
    
    cout << "Enter the number you want to check for parity.\n";
    int NumbersFunc = 0;
    cin >> NumbersFunc;
    
    cout << "odd = 1\n" << "even = 2\n";
    int UserChoice = 0;
    cin >> UserChoice;

    PrintNumbers(NumbersFunc, UserChoice);
}
