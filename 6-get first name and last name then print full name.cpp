
#include <iostream>
#include<string>
using namespace std;

struct stUser {
	string FirstName;
	string LastName;
};

stUser ReadInfo() {
	stUser Info;

	cout << "Please enter your first name : " << endl;
	getline(cin, Info.FirstName);

	cout << "Please enter your last name : " << endl;
	getline(cin, Info.LastName);

	return Info;

}

string GetFullName(stUser Info) {
	string FullName = Info.FirstName + " " + Info.LastName;
	return FullName;
}
void PrintUserFullName(string FullName) {
	cout <<endl<< "*************************************" << endl;
	cout << "welocme  " << FullName<<  endl;
	cout << "*************************************" << endl;
}
int main()
{
	PrintUserFullName(GetFullName(ReadInfo()));
}
