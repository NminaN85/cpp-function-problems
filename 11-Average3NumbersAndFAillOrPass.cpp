#include <iostream>
#include<string>
using namespace std;



enum enPassFail { Pass , Fail };
void ReadNumbers(int& Num1, int& Num2, int& Num3) {

    cout << "Enter three numbers: ";
    cin >> Num1 >> Num2 >> Num3;

}
int SumNumbers(int Num1, int Num2, int Num3) {
    return Num1 + Num2 + Num3;
}
float AverageNumbers(int Num1, int Num2, int Num3){
    return  (Num1 + Num2 +  Num3) / 3;
}
enPassFail CalculateAverage(float average) {
    if (average > 50) return enPassFail::Pass;
    else return enPassFail::Fail;
}
void PrintAverageNumbers(float average) {
	cout <<  "Average is: " << average << " And you Are  ";
    if (CalculateAverage(average) == enPassFail::Pass) {
        cout << "PASSED";
    }
    else cout << "FAILED";
}
int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);

    PrintAverageNumbers(AverageNumbers(Num1, Num2, Num3));
    return 0;
}
