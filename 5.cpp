#include <iostream>
using namespace std;
class Ballance
{
public:
	bool check_ballance (size_t Size, int a[])
	{
		unsigned int sum_left = 0;
		unsigned int sum_right = 0;
		for (size_t i = 0; i < Size; i++)
		{
			(i < (Size / 2)) ? (sum_left += a[i]) : (sum_right += a[i]);
		}
		if (sum_left == sum_right)
		{
			cout << " - true";
		}
		else if (sum_left < sum_right)
		{
			for (size_t i = (Size / 2); i < Size; i++)
			{
				while (sum_left < sum_right)
				{
					sum_right = sum_right - a[i];
					sum_left = sum_left + a[i];
				}
			}
			(sum_left == sum_right) ? (cout << " - true") : (cout << " - false");
		}
		else
		{
			for (size_t i = ((Size / 2) - 1); i > 0; i--)
			{
				while (sum_left > sum_right)
				{
					sum_left = sum_left - a[i];
					sum_right = sum_right + a[i];
				}
			}
			(sum_left == sum_right) ? (cout << " - true") : (cout << " - false");
		}
		return true;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	const size_t Size = 8;
	int a[Size];
	cout << "¬ведите 8 целочисленных элементов массива." << endl;
	for (size_t i = 0; i < Size; i++)
	{
		cout << "Ёлемент " << i + 1 << ": ";
		cin >> a[i];
	}
	Ballance result;
	cout << "–езультат поиска баланса в массиве ";
	for (size_t i = 0; i < Size; i++)
	{
		cout << a[i] << " ";
	}
	result.check_ballance(Size, a);
	return 0;
}