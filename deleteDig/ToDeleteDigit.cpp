#include <iostream>
using namespace std;
int main()
{
	while (true)
	{
		long long n;
		cout << "Enter your number: " << endl;
		cin >> n;

		int m;
		while (true)
		{
			cout << "Enter the digit to be delete: " << endl;
			cin >> m;
			if (m > 0 && m < 10) break;
			cout << "Error!" << endl;
		}


		long long p = 0, t = abs(n);

		while (t)
		{
			int a = t % 10;
			if (a != m)
			{
				p = p * 10 + a;
			}

			t = t / 10;
		}
		t = p, p = 0;
		while (t)
		{
			int a = t % 10;
			p = p * 10 + a;
			t = t / 10;
		}
		if (n < 0)
			p = -p;
		cout << " Result is :  " << p << endl;

		system("pause");
		system("cls");
	}
	return 0;
}