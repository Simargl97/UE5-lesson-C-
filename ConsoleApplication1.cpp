#include <iostream>
#include "Helpers.h"

using namespace std;

int main()
{
    cout << "the square of their sum: " << sum(10, 10) << "\n";
    
    std::string name = "ConsoleApplication";
    cout << name << "\n" << name.length() << "\n" << name[0] << "\n" << name[name.length() - 1] ;
}
