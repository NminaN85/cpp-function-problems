
#include <iostream>
#include<string>
using namespace std;

float ReadNumber() {
	float Number; 
	cout << "Please enter Number :  " << endl;
	cin >> Number;

	return Number;
}

float GetHalfNumber(float Number ) {

	float HalfOfNumber = Number / 2;

	return HalfOfNumber;
}

void PrintHalfNumber(float Number ) {

	cout << " The half  Number IS "<< Number <<" : " << to_string(GetHalfNumber(Number))<< endl;

}

int main()
{
	

	 PrintHalfNumber(ReadNumber());
}
