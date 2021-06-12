#include<iostream>
using namespace std;
void PrintNtoone(int n)
{
	if(n==0)
	{
		return ;
	}
	cout<<n<<" ";
	PrintNtoone(n-1);
}
int main()
{
	int n;
	cin>>n;
	PrintNtoone(n);
	return 0;
}
