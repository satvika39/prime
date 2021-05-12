#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	cout<<"enter the number";
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			
			cout<<" it is not a prime";
			break;
			
		}
		else
	     cout<<" it is a prime";
	
	}
	return 0;

}
