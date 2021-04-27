#include<iostream>
#include<string>
using namespace std;

string reverseWord(string str);
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str)
{
  int j=str.size()-1;
  for(int i=0;i<str.size()/2;i++)
  {
      swap(str[i],str[j]);
      j--;
  }
  
 return str;
}
