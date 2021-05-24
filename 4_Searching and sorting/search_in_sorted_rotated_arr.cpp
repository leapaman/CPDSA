class Solution {
public:
    int search(vector<int>& arr, int target) {
        int pos;
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                pos=i; break;
            }
        }
        
        if(target<arr[0])
        {
            for(int i=pos+1;i<n;i++)
            {
                if(arr[i]==target) return i;
            }
            
        }
        else
        {
            for(int i=0;i<=pos;i++)
            {
                if(arr[i]==target) return i;
                
            }
        }
        return -1;
    }
};