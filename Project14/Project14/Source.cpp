#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int piz(int a[], int s) {
	int p = 0;
	int n = 0;
	int z = 0;
	int pc = 0;
	int nc = 0;
	int zc = 0;
	for (int i = 0; i < s; i++) {
		if (a[i] > 0) {
			pc = p++;
		}
		else if (a[i] < 0) {
			nc = n++;
		}
		else if (a[i] = 0) {
			zc = z++;
		}
	}
	cout << "Число положительных элементов:" << pc << endl;
	cout << "Число отрицательных элементов:" << nc << endl;
	cout << "Число нулевых элементов:" << zc << endl;
	return zc;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int arr[10];
	int SIZE = 10;
	int result = 0;
	for (int i = 0; i < SIZE; i++) {
		arr[i] + rand();
		cout << arr[i] << endl;
	}
	result = piz(arr, SIZE);
	cout << result;
}