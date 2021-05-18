#include<iostream>
using namespace std;
bool solve()
{
	string str;
	getline(cin,str);
	int n=str.size();
	int charcount[26]={0};
	for(int i=0;i<n;i++)
	{
		if(str[i]==' ')
		continue;
		
		int lol=0;
		for(char temp='a';temp<='z';temp++)
		{
			lol++;
			if(temp==str[i])
			{
			 	charcount[lol]++;
			}
		}
		
	}
	int oddcount=0,count=0;
	for(int i=0;i<26;i++)
	{
		if(charcount[i]%2!=0)
		{
			oddcount++;
		}
		count++;
	}
	if(count%2==0 & (oddcount==0 || oddcount==1))
	return true;
	else return false;
}

int main()
{
	int t; cin>>t; while(t--)
    cout<<solve()<<endl;	
}
