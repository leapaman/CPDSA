#include<bits/stdc++.h>
#define Test int t;cin>>t;while(t--)
#define Loop for(Int i=0;i<n;i++)
using namespace std;
void solve()
{	
Int n,m;
cin>>n>>m;
unordered_map<int, int> map;
Int arr[n],arr1[m];
for(Int i=0;i<n;i++)
{
	cin>>arr[i];
	map[arr[i]++];
	
}
for(Int i=0;i<m;i++)
{
	cin>>arr1[i];
	map[arr1[i]++];
}

cout<<map.size()<<endl;	
	

}
int main()
{
	Test
	{
		solve();
	}
}
