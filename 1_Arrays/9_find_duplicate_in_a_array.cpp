#include<bits.stdc++.h>
using namespace std;
int main()
{
	vector<int> nums;
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(4);
	nums.push_back(1);
	nums.push_back(5);
	Soluction ob;
	cout<<ob.findDuplicate()<<endl;
}


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
             if( nums[i]==nums[i+1])
             {
                 a=nums[i];
                 break;
             }
         }
        
        return a;
        
    }
};
