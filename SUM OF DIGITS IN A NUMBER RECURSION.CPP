#include<bits\stdc++.h>
using namespace std;
int getsumdigits(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n%10+getsumdigits(n/10);
}
int main()
{
	int n;
	cin>>n;
	cout<<getsumdigits(n);
	return 0;
}
