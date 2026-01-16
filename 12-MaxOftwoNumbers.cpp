#include <iostream>
#include<string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2) {

    cout << "Enter Num 1 ?";
    cin >> Num1;
    cout << "Enter Num 2 ? ";
    cin >> Num2;
}

int CheckLargestNumber(int Num1, int Num2) {
    if (Num1 > Num2) return Num1;
    else return Num2;
}
void PrintNumber(int Number) {
    cout << "The Largest Number is  : " << Number << endl;

}

int main()
{
    int Num1;
    int Num2;
    ReadNumbers(Num1, Num2);
    PrintNumber(CheckLargestNumber(Num1 , Num2));

    return 0;
}
