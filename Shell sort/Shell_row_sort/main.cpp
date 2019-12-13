#include <iostream>

using namespace std;


void Shell(int arr[], int n)
{
    int d = n / 2;
    while (d > 0)
    {
        for (int i = 0; i < n - d; i++)
        {
            int j = i;
            while (j >= 0 && arr[j] > arr[j + d])
            {
                    int temp = arr[j];
                    arr[j] = arr[j + d];
                    arr[j + d] = temp;

                j--;
            }
        }
        d = d/2;
    }
}

int main()
{
    int x[16];
    int i = 0;

    for (i = 0; i < 16; i++){
        cin >> x[i];
    }

    Shell(x, 16);

    for (i = 0; i < 16; i++){
        cout << x[i] << " ";
    }
}
