#include <iostream>
using namespace std;
int change(size_t Size, int a[]);
int main()
{
	setlocale(LC_ALL, "Russian");
	const size_t Size = 8;
	int a[Size];
	cout << "������� 8 ��������� �������, ��������� �� 0 ��� 1: " << endl;
	for (size_t i = 0; i < Size; i++)
	{
		cout << "������� " << i+1 << ": ";
		cin >> a[i];
	}
	change(Size, a);
	cout << "��������� ������: " << endl;
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