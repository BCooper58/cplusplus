#include <iostream>
#include <math>
using namespace std;

int main ()
string input = "";
{
	int str;
	cout << "Please enter the string you would like to convert: " ;
	getline(cin, input);
	int n = input.length();
	char char_array[n + 1];
	strcpy(char_array, input.c_str());
	
	for (int i = 0; i < n; i++)
	cout << "Characters: " << char_array[i];
	
	


