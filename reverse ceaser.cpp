#include<iostream>
using namespace std;
int main()
{

	char pl[100],rev[100],cip[100];
	cout<<"enter your plain text : ";
	cin.getline(pl,100);
	cout<<"your plain text is : "<<pl<<endl;
	int key;
	cout<<"enter your key value : ";
	cin>>key;
	int l=0;
	while(pl[l]!=0)
	{
		l = l+1;
	}
	cout<<"your length of the text : "<<l<<endl;
	
	int i,j;
	
	for(i=0,j=l-1;j>=0;i++,j--)
	{
		rev[i] = pl[j];
	}
	rev[i] = '\0';
	cout<<"reverse of the string is : "<<rev<<endl;
	char ch;
	
	for(i=0;rev[i]!='\0';i++)
	{
		ch = rev[i];
		
		if (ch!=' ')
		{
			if (ch>=65&&ch<=90)
			{
			    ch = ch+key;
			    cip[i]=ch;
			    
			    if(ch>90)
			    {
			    	ch = ch-90+65-1;
			    	cip[i] = ch;
				}
		    }
		    else if (ch>=97&&ch<=122)
		    {
		    	ch = ch+key;
		    	cip[i] = ch;
		    	
		    	if (ch>122)
		    	{
		    		ch = ch - 122+97-1;
		    		cip[i] = ch;
				}
			}
		    
		}
		else
		{
			cip[i] = ch;
		}
	}
	cip[i] = '\0';
	cout<<"the cipher text is : "<<cip<<endl;
	
	char dec[100],org[100];
	
	for(i=0;cip[i]!='\0';i++)
	{
		ch = cip[i];
		
		if (ch!=' ')
		{
			if (ch>=65&&ch<=90)
			{
			    ch = ch-key;
			    dec[i]=ch;
			    
			    if(ch < 65)
			    {
			    	ch = ch+90-65+1;
			    	dec[i] = ch;
				}
		    }
		    else if (ch>=97&&ch<=122)
		    {
		    	ch = ch-key;
		    	dec[i] = ch;
		    	
		    	if (ch < 97)
		    	{
		    		ch = ch +122-97+1;
		    		dec[i] = ch;
				}
			}
		    
		}
		else
		{
			dec[i] = ch;
		}
	}
	dec[i] = '\0';
	cout<<"the cipher text is : "<<dec<<endl;
	
	
	for(i=0,j=l-1;j>=0;i++,j--)
	{
		org[i] = dec[j];
	}
	cout<<"original text was : "<<org<<endl;
}
