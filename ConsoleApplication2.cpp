#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
template<typename T>
T maxx(const T* x, int s) {
	T max = x[0];
	int index;
	for (size_t i = 0; i != s; i++)
		if (x[i] > max) {
			max = x[i];
			index = i;
		}
	return index;
}
template<typename T>
T minn(const T* x, int s) {
	T min = x[0];
	int ind;
	for (size_t i = 0; i != s; i++)
		if (x[i] < min) {
			min = x[i];
			ind = i;
		}
	return ind;
}
int main() {
	srand(time(NULL));
	const int size = 20;
	int* a = new int[size];
	for (size_t i = 0; i != size; i++) {
		a[i] = -10 + rand() % 20;
	}
	for (size_t i = 0; i != size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Index of max: " << maxx(a, size) << endl;
	cout << "Index of min: " << minn(a, size) << endl;
	return 0;
}