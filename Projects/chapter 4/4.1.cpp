/*
Write a program that converts from 24-hour notation to 12-hour notation. For
example, it should convert 14:25 to 2:25 P.M. The input is given as two integers.
There should be at least three functions: one for input, one to do the conversion,
and one for output. Record the A.M./P.M. information as a value of type char,
'A' for A.M. and 'P' for P.M. Thus, the function for doing the conversions will
have a call-by-reference formal parameter of type char to record whether it is A.M.
or P.M. (The function will have other parameters as well.) Include a loop that lets
the user repeat this computation for new input values again and again until the user
says he or she wants to end the program.
*/

#include <iostream>
using namespace std;

void takeInput(int& hours, int& minutes);
void convertNotation (int& hours, const int& minutes, char& dayCycle);
void displayOutput (int hours, int minutes, char dayCycle);

int main()
{
    char continueInput;
    do
    {
        int hours, minutes;
        char dayCycle;

        takeInput(hours, minutes);
        convertNotation(hours, minutes, dayCycle);
        displayOutput (hours, minutes, dayCycle);

        cout << "Test again? (y/n)\n";
        cin >> continueInput;
        cout << endl;

    } while (continueInput == 'Y' || continueInput == 'y');
    

}

void takeInput(int& hours, int& minutes)
{
    cout << "Enter the amount of hours\n";
    cin >> hours;

    cout << "Enter the amount of minutes\n";
    cin >> minutes;

    cout << "You have entered " << hours << ":" << minutes << " in 24-hour notation.\n";
}

void convertNotation (int& hours, const int& minutes, char& dayCycle)
{
    if (hours < 12)
    {
        dayCycle = 'A'; // stands for A.M.
        return;
    }
    dayCycle = 'P'; // stands for P.M.

    if (hours > 12)
    {
        hours -= 12;
    }
}

void displayOutput (int hours, int minutes, char dayCycle)
{
    cout << "In  12-hour notation, the given time is: " << hours << ":";
    if (minutes < 10) cout << 0;
    cout << minutes << " " << dayCycle << ".M. \n";
}
