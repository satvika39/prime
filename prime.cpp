#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter the number";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			
			cout<<" it is not a prime";
			break;
			
		}
		else
		{
			cout<<" it is a prime";
			break;
		}
		
		
	
	}
	
	return 0;

}
