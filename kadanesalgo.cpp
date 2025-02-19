long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    if(n==0) return 0;
    
    long long sum=0;
    long long ans=INT_MIN;

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        ans=max(ans,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    if(ans<0) return 0;
    return ans;
}