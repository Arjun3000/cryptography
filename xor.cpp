#include<iostream>
using namespace std;
int main()
{
	int fir[8];
	cout<<"enter the first bits : ";
	int i;
	for(i=0;i<8;i++)
	{
		cin>>fir[i];
	}
	for(i=0;i<8;i++)
	{
	
	cout<<fir[i]<<"\t";
}
	int key [8];
	cout<<"enter the key bits : ";
	
	for(i=0;i<8;i++)
	{
		cin>>key[i];
	}
	for(i=0;i<8;i++)
	{
	
	cout<<key[i]<<"\t";
}
int cip[8];
cout<<endl;
	for(i=0;i<8;i++)
	{
	  cip[i] = fir[i]^key[i];	
	}
	for(i=0;i<8;i++)
	{
	
	cout<<cip[i]<<"\t";
}
int org[8];
cout<<endl;
	for(i=0;i<8;i++)
	{
	  org[i] = cip[i]^key[i];	
	}
	for(i=0;i<8;i++)
	{
	
	cout<<org[i]<<"\t";
}
	
	

}
