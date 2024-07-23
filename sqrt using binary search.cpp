int floorSqrt(int n)
{
    // Write your code here.
    int s=0;
    int e=n;
    long long mid =s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(mid*mid<=n)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }

    return floor(ans);
}