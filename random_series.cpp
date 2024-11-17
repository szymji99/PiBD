#include <iostream>
using namespace std;

void generate_subseries(int n, int m, int* W) {
	
	int n2 = n;
	int m2 = m;
	double p,q;
	for (int i = 1; i <= n; i++) {

		p = double(m2) / double(n2);
		q = double(rand()) / double(RAND_MAX);

		if (q < p) {
		//test losowy zdany
			W[m - m2] = i;
			m2--;
			if (m2 == 0) break;
		}
		n2--;
	}
}

int main() {

	// podanie n i m
	int n,m;
	cout << "Podaj dlugosc ciagu i dlugosc podciagu: ";
	cin >> n >> m;

	// generowanie ci¹gu
	srand((unsigned)time(0));
	int* W = new int[m];
	generate_subseries(n,m, W);

	//wypisanie rozwiazania
	for (int i = 0; i < m; i++) {

		cout << W[i] << " ";

	}

	delete[] W;
	return 0;
}