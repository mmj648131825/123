#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	int pn;
	cout << "pn = ";
	cin >> pn;
	int* const py = new int[pn + 1];
	py[0] = 1;
	for (i = 1; i < pn + 1; i++) {
		py[i] = 1;
		for (j = i - 1; j > 0; j--) {
			py[j] += py[j - 1];
		}
		for (k = 0; k < i; k++) {
			cout << py[k] << "   ";
		}
		cout << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
