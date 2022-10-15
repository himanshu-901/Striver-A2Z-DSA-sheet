// Largest Element in an Array 


// logic 1 

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
};

// logic 2

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
       int ans=0;
       for(int i=0;i<n;i++){
           ans = max(ans,arr[i]);
       }
       return ans;
    }
};

// logic 3

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
       sort(arr.begin(),arr.end());
       return arr[n-1];
    }
};
