#include <bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
	if (n == 0)
		return 1;
	int cnt = 0;
	while (n != 0) {
		n = n / 10;
		cnt++;
	}
	return cnt;
}

int main()
{
	long long n;
	cin>>n;
	cout<<countDigit(n);
	return 0;
}
