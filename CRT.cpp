#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of an array : ";
	cin>>n;
	int a[n],m[n],MX[n],MXI[n];
	int M=1;
	int i,j;
	cout<<"input values of a : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"input values of m : ";
	for(i=0;i<n;i++)
	{
		cin>>m[i];
	}
	cout<<"values of a are : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
		
	}
	cout<<endl<<"values of m are : ";
	for(i=0;i<n;i++)
	{
		cout<<m[i]<<"\t";
		
	}
	for(i=0;i<n;i++)
	{
		M = M*m[i];
	}
	
	cout<<endl<<"capital M is : "<<M<<endl;
	
	for(i=0;i<n;i++)
	{
		MX[i] = M/m[i];
	}
	cout<<"values of MX are : ";
	for(i=0;i<n;i++)
	{
		cout<<MX[i]<<"\t";
		
	}
	cout<<endl<<"values of MXI are : ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<100;j++)
		{
			if ((MX[i]*j)%m[i]==1)
			{
				MXI[i] = j;
				break;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<MXI[i]<<"\t";
		
	}
	int x=0;
	for(i=0;i<n;i++)
	{
		x = x+(a[i]*MX[i]*MXI[i]);
	}
	
	int UNIQUE = x%M;
	
	cout<<endl<<"unique solution x for the chinese remainder theorem is : "<<UNIQUE;
	return 0;
	
	
	
}
