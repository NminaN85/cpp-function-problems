
#include <iostream>
#include<string>
using namespace std;


struct stInfo {
	int Age;
	bool HasDrivingLicense;
	bool Recommandation; 
};

stInfo ReadInfo() {
	stInfo Info;
	cout << "Enter your  Age";
	cin >> Info.Age;
	cout << "Do you have A Driver license";
	cin >> Info.HasDrivingLicense;
	cout << "Do you have recommandation ? ";
	cin >> Info.Recommandation;

	
	return Info;
}

bool IsAccepted(stInfo Info) {
	return (Info.Recommandation)||(Info.Age > 21 && Info.HasDrivingLicense);
}
void PrintFinalResult(stInfo Info) {
	if (IsAccepted(Info)) {
		cout << "Hired" << endl;
	}
	else {
		cout << "Not Accepted" << endl;
	}

}

int main()
{
	PrintFinalResult(ReadInfo());
}
