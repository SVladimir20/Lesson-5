#include <iostream>
using namespace std;
bool Array_print(int a[], size_t size);
int main()
{
	setlocale(LC_ALL, "Russian");
	const size_t size = 4;
	int a[size] = { 1, 22, 33, 444 };
	cout << "Печать массива размером " << size << " элемента:" << endl;
	Array_print(a, size);
    return 0;
}
bool Array_print(int a[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	return true;
}