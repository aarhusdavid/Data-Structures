#include "Quiz1.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
//argc stands for command line arguments
//argv number arguments in command line
{
    // string test = argv[1];
    //this pulls the string from the command line
    string test = "";

    cout << "please enter a string" << endl;
    cin >> test; //console input; like the scanner class in java to read input from user

    Quiz1 q; //stored in the stack
    // Quiz1 *q; = new Quiz1(); //stored in the heap

    cout << "number of command line arguments: " << argc << endl;
    cout << "the number of vowels in " << test << " is: " << q.countVowels(test) << endl;
    cout << "argc is: " << argc << endl;

    cout << "progam exited successfully" << endl;

    return 0;
}
