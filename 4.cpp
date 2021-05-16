#include <iostream>
using namespace std;
int MoveP(size_t Size, int a[]);
int MoveM(size_t Size, int a[]);
int main()
{
	setlocale(LC_ALL, "Russian");
	const size_t Size = 8;
	int a[Size];
	cout << "Введите 8 целочисленных элементов массива." << endl;
	for (size_t i = 0; i < Size; i++)
	{
		cout << "Элемент " << i + 1 << ": ";
		cin >> a[i];
	}
	int n;
	cout << "Массив: ";
	for (size_t i = 0; i < Size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << "Введите число, на которое необходимо сдвинуть массив: ";
	cin >> n;
	if (n >= 0)
	{
		for (int j = 0; j < n; j++)
		{
			MoveP(Size, a);
		}
		cout << "Массив со сдвигом на " << n << " вправо: ";
	}
	else
	{
		for (int j = 0; j > n; j--)
		{
			MoveM(Size, a);
		}
		cout << "Массив со сдвигом на " << -n << " влево: ";
	}
	for (size_t i = 0; i < Size; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
int MoveP(size_t Size, int a[])
{
	int Temp = a[Size - 1];
	for (size_t i = Size - 1; i > 0; i--)
	{
		a[i] = a[i - 1];
	}
	a[0] = Temp;
	return 0;
}
int MoveM(size_t Size, int a[])
{
	int Temp = a[0];
	for (size_t i = 0; i < Size - 1; i++)
	{
		a[i] = a[i + 1];
	}
	a[Size - 1] = Temp;
	return 0;
}