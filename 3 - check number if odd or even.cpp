#include<string>
using namespace std;

enum enNumType { odd , even };

int ReadNumber() {
	int Num;
	cout << "Please enter a Numer : " << endl;
	cin >> Num;
	return Num;
}

enNumType CheckNumber(int Num) {
	int Result = Num % 2;
	if (Result==0)
	{
		return enNumType::even;
	}
	else {
		return enNumType::odd;
	}
}

void PrintNum(enNumType NumType  ) {
	if (enNumType::even) {
		cout << "Number is even" << endl;
	}
	else 
	cout << "Numer is odd"<<endl;
}

int main()
{
	PrintNum(CheckNumber(ReadNumber()));
}
