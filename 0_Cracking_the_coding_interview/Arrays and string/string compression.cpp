#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t; while(t--)
    {
      string str;
      cin>>str;
    
      
      transform(str.begin(), str.end(), str.begin(), ::tolower);
   
      int count=1;
      int pos=0;
      for(int i=pos;i<str.size();i++)
      {
          for(int j=i+1;j<str.size();j++)
          {
              pos=j;
              if(str[i]==str[j])
              {
                  count++;
              }
              else break;
             
          }
          
         cout<<str[i]<<count;
         count=1;
      
    }
    
    }
}
