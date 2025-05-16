//transpose techinque(column cipher)
#include<iostream>
using namespace std;
int main()
{
	char arr[5][6] = {"ARJUN","BCDEF","GHIKL","MNOPQ","RSTUV"};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<arr[i][j]<<"\t";
			
		}
		cout<<endl;
	}
	
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<arr[j][i];
		}
	}
	
	cout<<endl;
	
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<arr[i][j];
		}
	}
}
