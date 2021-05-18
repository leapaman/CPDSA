//complexity O(nlogn)
#include <bits/stdc++.h>

using namespace std;
bool solve()
{
	string str;
	getline(cin,str);
	int n=str.size();
	sort(str.begin(), str.end());
	
	for(int i=0;i<n-1;i++)
	{
		if(str[i]==str[i+1])
		{
			return false;
		}
		
	}
	return true;
}

int main()
{
	int t; cin>>t; while(t--)
    cout<<solve()<<endl;	
}
