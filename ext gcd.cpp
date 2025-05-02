#include<iostream>
using namespace std;
int gcd(int a,int b,int &x,int &y)
{
	if(b==0)
	{
		x = 1;
		y = 0;
		return a;
	}
	
	int x1,y1;
	int gcde = gcd(b,a%b,x1,y1);
	x = y1;
	y = x1 - (a/b)*y1;
	return gcde;
	
	
	
	
}
int main()
{
	int a,b,x,y;
	cout<<"enter two numbers : ";
	cin>>a>>b;
	
	int g = gcd(a,b,x,y);
	cout<<g<<endl;
	
}
