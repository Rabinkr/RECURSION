#include<bits\stdc++.h>
using namespace std;
void PrintonetoN(int n,int k=1)
{
	if(n==0)
	{
		return;
	}
	cout<<k<<" ";
	PrintonetoN(n-1,k+1);
}
int main()
{
	int n;
	cin>>n;
	PrintonetoN(n);
	return 0;
}

