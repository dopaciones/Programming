#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n = 0;
	int k = 0;
	int i = 0;
	int j = 0;
	int temp = 0;
	int amount = 0;
	int pos = 0;
	int max = -1;
	int count = 0;
	int left = 0;
	int right = 0;
	int seatpos = 0;


	cout << "¬ведите N, K: ";
	cin >> n >> k;
	cout << endl;

	int *arr = new int[n + 1];

	for (i = 0; i <= n+1; i++) {
		arr[i] = 0;
	}
	arr[0] = 9;
	arr[n + 1] = 9;

    arr[n/2+1] = 1;

    if (k == 1){
        left = n/2;
        right = n-left-1;
    }
    else {
        for (count = 2; count <= k; count++){
            max = -1;
            for (i = 1; i <= n+1; i++){
                if (arr[i] == 0){
                    amount++;
                }
                else {
                    if (amount >= max){
                        max = amount;
                        pos = i;
                    }
                    amount = 0;
                }
            }
            arr[pos-max/2-1] = count;
            seatpos = pos - max/2 - 1;
        }
        i = seatpos-1;
        j = seatpos+1;

        while (arr[i] == 0){
            left++;
            i--;
        }

        while (arr[j] == 0){
            right++;
            j++;
        }
    }

	/*for (i = 0; i <= n + 1; i++) {
		cout << arr[i];
	}
    cout << endl;
	cout << max << endl;
	cout << seatpos << endl;
	cout << endl;*/

	cout << left << " " << right;
}
