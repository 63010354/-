#include<iostream>
using namespace std;

long int lend, brick, gcd;
long int Wall, h[100001], x, hcopy[100001];

int gcdfunction(long int a, long int b)
{
	while (a != 0 && b != 0)
	{
		lend = b;
		b = a % b;
		a = lend;
	}
	gcd = a;
	return gcd;
}

int main()
{
	cin >> Wall;
	cin >> h[0];
	gcd = h[0];

	for (int i = 1; i < Wall; i++)
	{
		cin >> h[i];
		brick += h[i];
	}
	brick += h[0];

	for (int i = 1; i < Wall; i++)
	{
		gcd = gcdfunction(gcd, h[i]);
	}

	cout << brick / gcd;

}
