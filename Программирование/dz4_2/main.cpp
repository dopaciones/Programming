#include <iostream>

using namespace std;


int sign(int n)
{
    if (n < 0){
        return -1;
    }
    if (n > 0){
        return 1;
    }
    return 0;

}
int main()
{
    int x = 0;

    cin >> x;
    cout << sign(x);

    return 0;
}
