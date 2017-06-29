//C02: GetWords.cpp
//Break a file in white seprated words

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> words;
	ifstream in;
	in.open("GetWords.cpp");
	string word;

	while(in >> word)
		words.push_back(word);

	for(int i=0; i < words.size(); i++)
		cout << i << " : " << words[i] << endl;

	system("pause");
}

/*
Notes: The expression while(in >> word) is what gets the 
input one “word” at a time, and when this expression evaluates
to “false” it means the end of the file has been reached.
*/