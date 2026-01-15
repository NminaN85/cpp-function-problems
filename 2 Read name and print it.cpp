
#include <iostream>
#include<string>
using namespace std;

string ReadName(){

    string Name;
    cout << "Please enter Your name : " << endl;
    getline(cin, Name);
    return Name;
}

void PrintName( string Name)
{
    std::cout << "Your Name is : "<<Name;
}

int main()
{
    PrintName(ReadName());
    cout << endl;
}
