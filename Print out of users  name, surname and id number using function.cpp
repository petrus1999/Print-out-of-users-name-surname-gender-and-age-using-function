// Print out of users  name, surname and id number using function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void MyFunction(string name, string surname, string gender, int age ) {

}

int main(){
	string name, surname; string gender;
	int age;

	cout << "Enter your name and surname" << endl;
	cin >> name >> surname;
	cout << "Hello, your name is " << name << " and your surname is " << surname << endl;
	cout << "Enter your gender" << endl;
	cin >> gender;
	cout << "Your gender is :" << gender << endl;
	cout << "Enter your age " << endl;
	cin >> age;
	cout << " Your age is : " << age;

	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
