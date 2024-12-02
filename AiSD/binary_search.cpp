#include <iostream>
using namespace std;


int binary_search(int x, int *T, int n) {
	// poprawic bo suma d i g moze sie nie zmiescic w typie int
	int d = 0, g = n;
	int ind;
	while (d<=g) {
			
		ind = (d + g)/2;
		if (T[ind] == x) return ind;
		else if (T[ind] < x) d = ind + 1;
		else if (T[ind] > x) g = ind - 1;
	
	}
	return -1;
}

int main() {

	// Wczytanie szukanej liczby
	int p;
	cout << "Podaj szukana liczbe: ";
	cin >> p;

	//Tablica, w ktorej bedziemy wyszukiwac
	int T[] = { 1,4,8,10,20,21,22,30,35,100 };
	int n = sizeof(T) / sizeof(T[0])-1;
	int res = binary_search(p, T, n);

	if (res == -1) {
		cout << "Szukanej liczby nie ma w tablicy" << endl;
	}
	else {
		cout << "Szukana liczba znajduje sie pod indeksem " << res << endl;
	}

	return 0;
}