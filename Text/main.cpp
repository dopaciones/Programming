#include "pch.h"
#include "string"
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
	int i = 0;
	int min = INT_MAX;
	int count = 0;
	int str_len = 0;
	int phr_len = 0;
	string s = "";

	setlocale(LC_ALL, "RUS");

	ifstream fout;
	fout.open("Test.txt");
	while (!fout.eof()) {
		getline(fout, s);
		str_len = s.length();
		while (i < str_len) {
			if ((s[i] == '!') || (s[i] == '?') || (s[i] == '.') || (s[i] == ';')) {
				phr_len = count;
				if (phr_len < min) {
					min = phr_len;
				}
				count = 0;
				i++;
			}
			else {
				count++;
				i++;
			}
		}
		cout << s << endl;
		i = 0;
	}
	fout.close();

	cout << endl;

	cout << "Minimal phrase length - "<< min;
}
