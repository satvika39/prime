#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	cout<<"enter the number";
	for(i=2;i<sqrt(n);i++)
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
