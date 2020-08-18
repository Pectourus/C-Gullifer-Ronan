// C++Gullifer-Ronan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <istream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    cout << "Hello, my name is Hal!" << endl;
    cout << "Please enter a basic math question as shown..." << endl;
    cout << "Ex. 1 + 1, 2 - 2, 3 * 3, or 4 / 4" << endl;
     double num1, num2{};
     char opr{};
    
     cin >> num1 >> opr >> num2;
    //cout << " " << num1 << " " << opr << " " << num2;
     cout << "Give me one second while I to do the math";

     cout << endl << num1 << " " << opr << " " << num2 << " = " << endl;

     switch (opr) {
     case '+':
         cout << num1 + num2 << endl;
         break;
     case '-':
         cout << num1 - num2 << endl;
         break;
     case '*':
         cout << num1 * num2 << endl;
         break;
     case '/':
         if (num2 != 0)
             cout << num1 / num2 << endl;
         else
             cout << "ERROR \nCannot divide by zero" << endl;
         break;
     default:
         cout << "Illegal operation" << endl;
     }
     return 0;
     }


    // first attempt at math
    // if (opr == + );
    //else cout << "I'm sorry I am unable to do that right now."<< endl;

    
    
    
   
    
        
        
        
        
        
        



  

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file



