#include <iostream>
using namespace std;
int Fill(size_t Size, int a[]);
int main()
{
	setlocale(LC_ALL, "Russian");
	const size_t Size = 8;
	int a[Size];
	Fill(Size, a);
	cout << "Заполненный массив: " << endl;
	for (size_t i = 0; i < Size; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
int Fill(size_t Size, int a[])
{
	unsigned int value = 1;
	for (size_t i = 0; i < Size; i++)
	{
		a[i] = value;
		value = value + 3;
	}
	return 0;
}