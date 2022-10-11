#include<iostream>
using namespace std;

int main()
{
	int n, t1 = 0, t2 = 1, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
			cout << t1 << " ";
		else if (i == 2)
			cout << t2 << " ";
		else
		{
			sum = t1 + t2;
			cout << sum << " ";
			t1 = t2;
			t2 = sum;
		}
	}
	return 0;
}
Source:www.codegrepper.com
