#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
    int i = 0;
    int count = 0;
    string s = "";

    setlocale(LC_ALL, "RUS");

    ofstream fin;
    fin.open("Test1.txt");
    while (s != "="){
        getline(cin,s);
        fin << s << endl;
    }
    fin.close();

    ifstream fout;
    fout.open("Test1.txt");
    while (!fout.eof()){
        getline(fout,s);
        while ((s[i] != '.')||(s[i] != '?')||(s[i] != '!')||(s[i] != ';')){
            count ++;
        }
        if ((s[i] != '.')||(s[i] != '?')||(s[i] != '!')||(s[i] != ';')){

        }
        cout << s << endl;
    }
    fout.close();

    cout << count;
}
