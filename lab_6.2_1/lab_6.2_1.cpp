#include <iostream>
#include <time.h>

using namespace std;

void Show(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = - 100 + rand() % (-100 - 100) + 1;
	}
}

void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ",";
	}
}


int Max(int* a, const int n)
{
	int max;
	int imax = -1;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
			max = a[i];
			imax = i;
			break;
		}
	for (int i = imax + 1; i < n; i++)
		if (a[i] > max && a[i] % 2 != 0)
			max = a[i];
	return max;
	
}


int main()
{
	srand((unsigned)time(NULL));
	const int n = 20;
	int a[n];
	Show(a, n);
	cout << "a {"; Print(a, n); cout << "}" << endl;
	cout << "Max = " << Max(a, n) << endl;
}
