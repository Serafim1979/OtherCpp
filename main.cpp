#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int max_value(int a, int b);
void my_swap(int &a, int &b);
void my_bibblesort(int arr[], int n);

int main()
{
	int a, b, max;
	const int n = 5;
	int arr[n] = {12, 34, 7, 88, 15};

	cout << "Enter first value: ";
	cin >> a;
	cout << "Enter second value: ";
	cin >> b;

	max = max_value(a, b);

	cout << "Max value = " << max << endl;

	cout << a << " " << b << endl;
	my_swap(a, b);
	cout << a << " " << b << endl;

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	my_bibblesort(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}

void my_bibblesort(int arr[], int n)
{

	for (int i = 0; i < n - 1; ++i)
	{
		bool fl = 0;
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

				fl = 1;
			}
		}
		if (fl == 0)
			break;
	}
}

void my_swap(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

int max_value(int a, int b)
{
	return a > b ? a : b;
}