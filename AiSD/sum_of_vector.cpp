#include <iostream>

using namespace std;

int main() {

	//Wczytywanie danych
	int m;
	cout << "Podaj dlugosc wektora" << endl;
	cin >> m;
	int* X = new int[m];
	cout << "Podaj wartosci wektora" << endl;
	for (int i = 0; i < m; i++) {
		cin >> X[i];

	}
	
	//Szukanie najwiekszego podwektora
	int maxhere = 0, maxsofar = 0;
	int index_start = 0, index_stop =-1;
	int a = 0;

	for (int i = 0; i < m; i++) {

		if (maxhere + X[i] > 0) { maxhere = X[i] + maxhere; }
		else { maxhere = 0;  a = i+1; }

		if (maxsofar < maxhere) {
			maxsofar = maxhere;
			index_start = a;
			index_stop = i;
		}

	}

	//Wynik
	cout << "Najwieksza suma: " << maxsofar << endl;
	cout << "Podciag: ";
	for (int i = index_start; i <= index_stop; i++) {
		cout << X[i] << " ";
	}
	delete[] X;
	return 0;
}