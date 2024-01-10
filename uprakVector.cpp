#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	int kotak[10] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };
	vector <int> vect(kotak, kotak + sizeof(kotak) / sizeof(int));

	cout << "Deret sebelum di sorting :\n";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " | ";
	}


	sort(vect.begin(), vect.end(), greater<int>());
	cout << "\n\nDeret setelah di sorting dari besar ke kecil :\n";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " | ";
	}
	// Mencari nilai median
	int n = vect.size();
	float median;

	if (n % 2 == 0) {
		median = (vect[n / 2 - 1] + vect[n / 2]) / 2.0;
	}
	else {
		median = vect[n / 2];
	}

	cout << "\n\nNilai Median : " << median << endl;

}
