#include <iostream>

using namespace std;

int n, i;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Введите чётную длину массива n<=8: ";
	cin >> n;
	if ((n <= 9) && (n % 2 == 0)) {
		int* a = new int[n];
		for (i = 0; i < n; i++) {
			cout << "Введите элемент массива: ";
			cin >> a[i];
		}

		for (i = 0; i < n - 1; i += 2) {
			int f = a[i];
			a[i] = a[i + 1];
			a[i + 1] = f;
		}
		for (i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "Не соответствует условию!";
	}
	system("pause");
	return 0;
}