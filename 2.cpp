#include <iostream>
using namespace std;
int change(size_t Size, int a[]);
int main()
{
	setlocale(LC_ALL, "Russian");
	const size_t Size = 8;
	int a[Size];
	cout << "¬ведите 8 элементов массива, состо€щих из 0 или 1: " << endl;
	for (size_t i = 0; i < Size; i++)
	{
		cout << "Ёлемент " << i+1 << ": ";
		cin >> a[i];
	}
	change(Size, a);
	cout << "»зменЄнный массив: " << endl;
	for (size_t i = 0; i < Size; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
int change(size_t Size, int a[])
{
	for (size_t i = 0; i < Size; i++)
	{
		(a[i] == 1) ? (a[i] = 0) : (a[i] == 0) ? (a[i] = 1);
	}
	return 0;
}