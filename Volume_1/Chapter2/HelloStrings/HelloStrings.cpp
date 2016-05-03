//HelloStrings.cpp
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s1, s2;	//Empty Strings
	string s3 = "Hello, World.";	//Initialized
	string s4("I am");	//Also initilized
	s2 = "Today";	//Assigning to a string
	s1 = s3 + " " + s4;		// Combining Strings
	s1 += " 8 ";	//Appending
	cout << s1 + s2 + " !" <<endl;
	system("pause");
}