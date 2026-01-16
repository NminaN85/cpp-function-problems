#include <iostream>
#include<string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2 ) {

    cout << "Enter Num 1 ?";
    cin >> Num1;
    cout << "Enter Num 2 ? ";
    cin >> Num2;
   
}
void SwapNumbers(int &Num1 ,int &Num2) {

    int Temp;
    Temp = Num1;
    Num1 = Num2; 
    Num2 = Temp;
}

void PrintNumber(int Num1 ,int Num2) {
    cout << "------------------------------------" << endl;
    cout << "Number one is  : " << Num1 << endl;
    cout << "Number Two is  : " << Num2 << endl;

}

int main()
{
    int Num1;
    int Num2;
    ReadNumbers(Num1, Num2);
    PrintNumber(Num1 ,Num2 );
    SwapNumbers(Num1, Num2);
    PrintNumber(Num1, Num2);


    return 0;
}
