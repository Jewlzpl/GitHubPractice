/*Author: Julia Lewis
  Date: 8/23/19
  Project Ditto: This program will output "Hello World Project!" and my name.*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string phone;
	cout << "Hello World Project!\n\nMy name is Julia Lewis\n\nWhat is my phone number?"<< endl << endl;
	getline(cin, phone);
	cout << "You said my phone number was " << phone << "." << endl;
}

/*
Hello World Project!
Julia Lewis

C:\Users\MagginiUser\Desktop\helloworld\Debug\helloworld.exe (process 2484) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/