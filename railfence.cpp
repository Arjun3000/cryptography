#include<iostream>
using namespace std;
int main()
{
	char plain[100],enc[100],dec[100];
	int i,j,k,l=0;
	
	cout<<"enter your plain text : ";
	cin.getline(plain,100);
	
	while(plain[l]!='\0')
	{
		l = l+1;
	}
	for(i=0,j=0;i<l;i++)
	{
		if(i%2==0)
		{
			enc[j++] = plain[i];
		}
	}
	for(i=0;i<l;i++)
	{
		if(i%2==1)
		{
			enc[j++] = plain[i];
		}
	}
	
	enc[j]='\0';
	cout<<"encrypted text is : "<<enc<<endl;
	
	// decryption
	if(l%2==0)
	{
		k = l/2;
	}
	else
	{
		k = (l/2)+1;
	}
	for(i=0,j=0;i<k;i++)
	{
		dec[j] = enc[i];
		j = j+2;
	}
	for(i=k,j=1;i<l;i++)
	{
		dec[j] = enc[i];
		j = j+2;
	}
	dec[j] = '\0';
	cout<<"your decrypted text is : "<<dec<<endl;
}
