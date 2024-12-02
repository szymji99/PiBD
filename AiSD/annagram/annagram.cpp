#include <iostream>
#include <cstdlib>
const int WORDMAX = 100;
using namespace std;


int cmp(const void* a,const void* b) {

	return (*(char*)a - *(char*)b);
}

int main() {
	
	//setlocale(LC_ALL, "C.UTF-8");

	char word[WORDMAX];
	char sig[WORDMAX];



 while (cin >> word ) {


	for (int i = 0; i < WORDMAX; i++) {
		sig[i] = word[i];
	}
	qsort(sig, strlen(sig), sizeof(char), cmp);
	cout << sig << " " << word << endl;

	if (cin.eof()) {
		break;
	}

}

	return 0;
}