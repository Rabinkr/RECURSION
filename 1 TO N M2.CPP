#include<iostream>
using namespace std;
void PrintNtoone(int n)
{
	if(n==0)
	{
		return ;
}
	PrintNtoone(n-1);
		cout<<n<<" ";
}
int main()
{
	int n;
	cin>>n;
	PrintNtoone(n);
	return 0;
}
