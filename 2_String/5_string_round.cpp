#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string str1="ABCDE";
    string str2="CDEAB";
    
    if(str1.size()==str2.size())
    {
        int j=0, i=0,count=0,count1=0;
        while(true)
        {
            count1++;
            if(str2[i]==str1[j])
            {
                j++;
                count++;
            }
            
            if(count<str1.size() && i==str1.size()-1)
            {
                i=0;
            }
            
            i++;
            
            if(count1>str1.size()*2) break;
        }
        
        if(count==str1.size()) cout<<"true"<<endl;else cout<<"false"<<endl;
    
    }
    else cout<<"false"<<endl;
   
    
    
    
}

int main()
{
    solve();
}
