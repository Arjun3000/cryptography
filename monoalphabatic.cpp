#include<iostream>
using namespace std;
int main()
{
	char tx[27]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ke[27] ="ZYXWVUTSRQPONMLKJIHGFEDCBA";
	
	char plain[100],mono[100],org[100];
	cout<<"enter your plain text : ";
	cin.getline(plain,100);
	int i,j;
	for(i=0;plain[i]!='\0';i++)
	{
		if (plain[i]>=97 && plain[i]<=122)
	    {
		plain[i] = plain[i]-32;
	    }
	    
	}
	cout<<plain<<endl;
	
	
	
	
	for(i=0;plain[i]!='\0';i++)
	
	
	{
	    for(j=0;j<=26;j++)
	    {
		
		    if (plain[i] == tx[j])
		    {
			    mono[i] = ke[j];
		    }
	    }
	    if (plain[i] == 32)
	    {
	    	mono[i] = plain[i];
		}
	}
	cout<<mono<<endl;
	char ono[100];
	for(i=0;mono[i]!='\0';i++)
	
	
	{
	    for(j=0;j<=26;j++)
	    {
		
		    if (mono[i] == tx[j])
		    {
			    ono[i] = ke[j];
		    }
	    }
	    if (mono[i] == 32)
	    {
	    	ono[i] = plain[i];
		}
	}
	cout<<ono;
}
