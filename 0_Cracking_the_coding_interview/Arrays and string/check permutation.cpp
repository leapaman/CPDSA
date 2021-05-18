//complexity O(nlogn)
#include <bits/stdc++.h>

using namespace std;
bool solve()
{
 string str,str1;
 cin>>str>>str1;

	int n=str.size();

	sort(str.begin(), str.end());
	sort(str1.begin(), str1.end());
	
	for(int i=0;i<n;i++)
	{
		if(str1[i]!=str[i])
		return false;
		
	}
	return true;
}

int main()
{
	int t; cin>>t; while(t--)
    cout<<solve()<<endl;	
}

