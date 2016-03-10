#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
	ifstream infile("c:/in.txt"); // for example
	string line = "";
	while (getline(infile, line))
	{
		stringstream strstr(line);
		string word = "";
		while (getline(strstr, word, ';')) cout << word << '\n';
	}

	system("cls");
	_getch();
}

