int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int i=arr.size()-1;
    sort(arr.begin(),arr.end());

    while(i>1)
    {
       if(arr[i]!=arr[i-1])
       {
           return arr[i-1];
       }
       else
       {
           i--;
       }
    }
    return -1;
}