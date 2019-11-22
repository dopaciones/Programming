#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{

    string s;

    setlocale(LC_ALL, "rus");

    ofstream fin;
    fin.open("sort.txt");
    s = "йф€цычувскамепинртгоэшлбщдюзжх";
    fin << s;
    fin.close();

    ifstream fout;
    fout.open("sort.txt");
    getline(fout,s);
    sort(s.begin(),s.end());
    cout << s;
    fout.close();

return 0;
}
