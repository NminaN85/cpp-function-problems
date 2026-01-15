#include <iostream>
#include<string>
using namespace std;

struct stNumbers {
	int Num1;
	int Num2;
	int Num3;
};

stNumbers ReadNumbers() {
	stNumbers Nums;

		cout << "Please enter Numer 1 : " << endl;
		cin >> Nums.Num1;
		cout << "Please enter Numer 2 : " << endl;
		cin >> Nums.Num2;
		cout << "Please enter Numer 3 : " << endl;
		cin >> Nums.Num3;
	return  Nums;

}

float CalCulateAverage(stNumbers Nums) {
	float result =  (Nums.Num1 + Nums.Num2 + Nums.Num3)/3;
	return result;
}

void PrintResults(float result) {
	cout << "the Average is  "<<result << endl;
}
int main()
{

	PrintResults(CalCulateAverage(ReadNumbers()));
	
}
