//ітераційний спосіб
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void random_elem(int* b, const int size, const int min, const int max) {
	for (int i = 0; i < size; i++) {
		b[i] = min + rand() % (max - min + 1);
	}
}

void out_arr(int* b, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i];
	cout << endl;




}

int number_of(int* b, const int size) {
	int num = 0;
	for (int i = 0; i < size; i++) {
		if (!(b[i] % 2 != 0 && b[i] % 3 == 0))
			num += 1;
	}

	return num;
}



int sum_elem(int* b, const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (!(b[i] % 2 != 0 && b[i] % 3 == 0))
			sum += b[i];
	}
	return sum;
}

int zero(int* b, const int size) {
	for (int i = 0; i < size; i++)
	{
		if (!(b[i] % 2 != 0 && b[i] % 3 == 0))
			b[i] = 0;
	}

	return *b;
}





int main() {

	srand((unsigned)time(NULL));
	int min = 10;
	int max = 90;

	const int n = 21;
	int a[n];

	random_elem(a, n, min, max);//putting random elements into empty array
	out_arr(a, n); //printing filled with elements

	cout << endl;

	int num = number_of(a, n);//number of elements we require
	cout << "Number of elements: " << endl;
	cout << num << " ";

	cout << endl;

	int sum = sum_elem(a, n);//sum
	cout << "\nSum of elements: " << endl;
	cout << sum << endl;

	int final = zero(a, n);//changing elements to zero
	cout << "\nFianl array: " << endl;
	out_arr(a, n);


	return 0;
}