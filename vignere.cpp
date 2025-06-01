#include<iostream>
using namespace std;
int main()
{
	char plain[100],key[100],enc[100],dec[100];
	int i,l=0,kl=0,numplain[100],numkey[100],numenc[100],numdec[100];
	
	cout<<"enter plain text : ";
	cin.getline(plain,100);
	
	cout<<"enter your key : ";
	cin.getline(key,100);
	
	while(plain[l]!='\0')
	{
		l = l+1;
	}
	while(key[kl]!='\0')
	{
		kl = kl+1;
	}
	
	for(i=0;i<l;i++)
	{
		plain[i] = toupper(plain[i]);
	}
	for(i=0;i<kl;i++)
	{
		key[i] = toupper(key[i]);
	}
	cout<<"plain text is : "<<plain<<endl;
	for(i=0;i<l;i++)
	{
		numplain[i] = plain[i]-'A';
    } 
    for(i=0;i<kl;i++)
	{
		numkey[i] = key[i]-'A';
    } 
    for(i=0;i<l;i++)
    {
    	numenc[i] = (numplain[i]+numkey[i%kl])%26;
	}
	for(i=0;i<l;i++)
	{
		enc[i] = numenc[i]+'A';
	}
	cout<<"encrypted text is : "<<enc;
	for(i=0;i<l;i++)
	{
		numdec[i] = (numenc[i] - numkey[i%kl]+26)%26;
	}
	for(i=0;i<l;i++)
	{
		dec[i] = numdec[i]+'A';
	}
	cout<<endl<<"decrypted text is : "<<dec;
}
