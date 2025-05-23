/*#include<iostream>
using namespace std;
int main()
{
	char plain[100],enc[100],dec[100],key[100];
	cout<<"enter plain text : ";
	cin.getline(plain,100);
	
	int i,j,l=0,kl=0,numplain[100],numenc[100],numdec[100],numkey[100];
	
	
	
	cout<<"enter key : ";
	cin.getline(key,100);
	
	while(plain[l]!='\0')
	{
		l =l+1;
	}
	while(key[kl]!='\0')
	{
		kl = kl+1;
	}
	
	for(i=0;plain[i]!='\0';i++)
	{
		plain[i] = toupper(plain[i]);
	}
	for(i=0;i<key[i]!='\0';i++)
	{
		key[i] = toupper(key[i]);
	}
	
	for(i=0;plain[i]!='\0';i++)
	{
		numplain[i] = plain[i]-'A';
	}
	for(i=0;key[i]!='\0';i++)
	{
		numkey[i] = key[i]-'A';
		
	}
	for(i=0;plain[i]!='\0';i++)
	{
		numenc[i] = (numplain[i]+numkey[i%kl])%26;
		enc[i] = numenc[i]+'A';
	}
	cout<<enc;
	
	for(i=0;i<l;i++)
	{
		numdec[i] = (numenc[i]-numkey[i%kl]+26)%26;
		dec[i] = numdec[i]+'A';
	}
	cout<<endl<<dec;
	
	
}*/
/*
#include<iostream>
using namespace std;
int modinv(int a,int b)
{
	int i;
	for(i=1;i<b;i++)
	{
		if((a*i)%b==1)
		{
			return i;
		}
		else
		{
			return 1;
		}
	}
}
int main()
{
	char plain[100],enc[100],dec[100];
	cout<<"enter plain text : ";
	cin.getline(plain,100);
	
	
	int i,l,k1,k2,numplain[100],numenc[100],numdec[100];
	
	cout<<"enter the first key : ";
	cin>>k1;
	
	cout<<"enter the second key : ";
	cin>>k2;
	
	
	while(plain[l]!='\0')
	{
		l=l+1;
	}
	for(i=0;i<l;i++)
	{
		
		plain[i] = toupper(plain[i]);
	}
	
	for(i=0;i<l;i++)
	{
		numplain[i] = plain[i] - 'A'; 
	}
	for(i=0;i<l;i++)
	{
		numenc[i] = (k1*numplain[i]+k2)%26;
		enc[i] = numenc[i]+'A';
	}
	cout<<enc;
	

	int kin = modinv(k1,26);
	if(kin == 1)
	{
		cout<<endl<<"k1 length is invalid for decryption";
	}
	else
	{
	
	for(i=0;i<l;i++)
	{
		
		numdec[i] = (kin*(numenc[i]-k2+26))%26;
		dec[i] = numdec[i]+'A';
	}
	cout<<endl<<dec;
	}
	

	
}
*/
/*
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int t;
	while(b!=0)
	{
		t = b;
		b = a%b;
		a = t;
	}
	return a;
}
int extgcd(int a,int b, int &x,int &y)
{
	if(b==0)
	{
		x = 1;
		y = 0;
		return a;
	}
	
	int x1,y1;
	int xt = extgcd(b,a%b,x1,y1);
	x = y1;
	y = x1-(a/b)*y1;
	return xt;
}
int multi(int a,int b)
{
	int x,y;
	int inv = extgcd(a,b,x,y);
	return (x%b+b)%b;
}
long long modexp(long long base, long long exp,long long mod)
{
	long long res = 1;
	base = base%mod;
	while(exp>0)
	{
		if(exp%2==1)
		{
			res = (res*base)%mod;
		}
		exp = exp/2;
		base = (base*base)%mod;
	}
	return res;
}
int main()
{

int n,q,p,e,d,phi,track,plain;
long long dsa,enc;

cout<<"plain : ";
cin>>plain;


cout<<"p and q : ";
cin>>p>>q;

n = p*q;
phi = (p-1)*(q-1);

cout<<"e : ";
cin>>e;

while(e<phi)
{
	track = gcd(e,phi);
	if(track == 1)
	{
		break;
	}
	else
	{
		e++;
	}
}
d = multi(e,phi);

enc = modexp(plain,d,n);

dsa = modexp(enc,e,n);

if(plain==dsa)
{
	cout<<"yes";
}
else
{
	cout<<"no";
}
}*/
/*
#include<iostream>
using namespace std;
int main()
{
	char arr[5][6] = {"ABCDE", "FGHIK", "LMNOP", "QRSTU", "VWXYZ"};
	int i,j;
	char plain[3],ci[3];
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}


cout<<"plain text : ";
cin.getline(plain,3);
for(i=0;plain[i]!='\0';i++)
{
	plain[i] = toupper(plain[i]);
}

int r1=0,r2=0,c1=0,c2=0;
for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
		if(arr[i][j] == plain[0])
		{
			r1 = i;
			c1 = j;
		}
		if(arr[i][j] == plain[1])
		{
			r2 = i;
			c2 = j;
		}
	}
}
if(r1==r2)
{
	ci[0] = arr[r1][(c1+1)%5];
	ci[1] = arr[r2][(c2+1)%5];
}
else if(c1==c2)
{
	ci[0] = arr[(r1+1)%5][c1];
	ci[1] = arr[(r2+1)%5][c2];
}
else
{
	ci[0] = arr[r1][c2];
	ci[1] = arr[r2][c1];
}
ci[2] = '\0';
cout<<ci;

char oi[3];

 for(i=0;i<5;i++)
 {
 
	for(j=0;j<5;j++)
	{
		if(arr[i][j] == ci[0])
		{
			r1 = i;
			c1 = j;
		}
		if(arr[i][j] == ci[1])
		{
			r2 = i;
			c2 = j;
		}
	}
  }

if(r1==r2)
{
	oi[0] = arr[r1][(c1+4)%5];
	oi[1] = arr[r2][(c2+4)%5];
}
else if(c1==c2)
{
	oi[0] = arr[(r1+4)%5][c1];
	oi[1] = arr[(r2+4)%5][c2];
}
else
{
	oi[0] = arr[r1][c2];
	oi[1] = arr[r2][c1];
}
oi[2] = '\0';
cout<<oi;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	char plain[100],enc[100],dec[100];
	
	cout<<"enter plain text : ";
	cin.getline(plain,100);
	
	int i,j,l=0;
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
	enc[i] = '\0';
	cout<<enc;
	
	int k;
	if(l%2 == 0)
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
	cout<<dec;
	
}
*/
#include<iostream>
using namespace std;
int main()
{
	char pt[27]  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ci[27]  = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	char plain[100],enc[100],dec[100];
	cout<<"enter plain text : ";
	cin.getline(plain,100);
	int i,j;
	for(i=0;plain[i]!='\0';i++)
	{
		if(plain[i]>=97&&plain[i]<=122)
		{
			plain[i] = plain[i]-32;
		}
	}
	cout<<plain[i];
	
	
	for(i=0;plain[i]!='\0';i++)
	{
		for(j=0;j<26;j++)
		{
			if(plain[i] == pt[j])
			{
				enc[i] = ci[j];
			}
		}
	}
	cout<<enc;
	for(i=0;enc[i]!='\0';i++)
	{
		for(j=0;j<26;j++)
		{
			if(enc[i] == pt[j])
			{
				dec[i] = ci[j];
			}
		}
	}
	cout<<endl<<dec;
}




