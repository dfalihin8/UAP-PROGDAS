#include <iostream>
using namespace std;

int main()
{
	int baris;

	cout << "Masukan panjang pola: ";
	cin >> baris;

	for (int i = 0; i <= baris; i++) {
		for (int j = baris; j > i; j--) {
			cout << "*";
		}
		for (int k = 0; k <= (2 * i - 1); k++) {
			cout << " ";
		}
		for (int j = baris; j > i; j--) {
			cout << "*";
		}

		cout << endl;
	}






	return 0;
}