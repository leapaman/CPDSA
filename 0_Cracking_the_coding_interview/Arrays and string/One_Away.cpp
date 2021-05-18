#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t; while(t--)
    {
        
    
    string str,str1;
    cin>>str>>str1;
    int count=0;
    if(str.size()==str1.size())
    {
        for(int i=0;i<str.size();i++)
        {
        if(str1[i]==str[i])
        count++;
        }
        if(count==str.size() || count==str.size()-1)
        {
            cout<<"true"<<"\n";
        }
        else
        cout<<"false"<<"\n";
    }
    else if(str1.size()==str.size()-1)
    {
        for(int i=0;i<str1.size();i++)
        {
            if(str1[i]==str[i])
            {
                count++;
            }
            else if(str1[i]==str[i+1])
            {
                count++;
            }
            
        }
        if(count==str.size()-1)
        {
            cout<<"true"<<"\n";
        }
        else
        cout<<"false"<<"\n";
    }
   
    }
    
    
}