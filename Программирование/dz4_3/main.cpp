#include <iostream>
#include <math.h>

using namespace std;

double rect(double a, double b)
{
    if ((a>0)&&(b>0)){
        return (a*b);
    }
    else return -1;
}

double tri(double a, double b, double c)
{
    if ((a>0)&&(b>0)&&(c>0)){
        if ((a+b>c)&&(b+c>a)&&(a+c>b)){
            int p = (a+b+c)/2;
            return (sqrt(p*(p-a)*(p-b)*(p-c)));
        }
    }
    else return -1;
}

double circ(double r)
{
    if (r>0){
        return (3.14*r*r);
    }
    else return -1;
}
int main()
{
    int n = 0;
    int x = 0;
    int y = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int r = 0;

    cout << "1 - Triangle" << endl;
    cout << "2 - Rectangle" << endl;
    cout << "3 - Circle" << endl;

    cin >> n;

    if (n == 1){
        cout << "Input a, b, c:" << endl;
        cin >> a >> b >> c;
        cout << tri(a,b,c) << endl;
    }

    if (n == 2){
        cout << "Input x, y:" << endl;
        cin >> x >> y;
        cout << rect(x,y) << endl;
    }

    if (n == 3){
        cout << "Input r:" << endl;
        cin >> r;
        cout << circ(r) << endl;
    }
}
