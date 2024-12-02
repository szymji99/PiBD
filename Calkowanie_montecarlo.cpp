#include <iostream>

using namespace std;

double f(double x) {

	return x * x * x;
}

int main() {

	//wprowadzenie danych
	double a, b;
	int n;
	cout << "Podaj przedzia³ ca³kowania: ";
	cin >> a >> b;
	cout << "Podaj liczbê losowañ";
	cin >> n;


	//dzia³anie programu
	double sum = 0;
	srand((unsigned)time(0)); //losowe ziarno

	for (int i = 0; i < n; i++) {

		sum += f(a + ( (double)rand() / (double)RAND_MAX )*(b-a));
	//	cout << a + ((double)rand() / (double)RAND_MAX) * (b - a) << endl;
	}
	
	//wypisanie wyniku
	sum = sum * (b - a) / n;
	cout << "Wynik: " << sum;

}