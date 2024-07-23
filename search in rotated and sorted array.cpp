int binarysearch(int s,int e,int* &arr,int key)
{
    long long mid=s+(e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]<key)
        {
            s=mid+1;
        }

        else 
        {
            e=mid-1;
        }

        mid=s+(e-s)/2;

    }
    return -1;
}




int search(int* arr, int n, int key) {
    // Write your code here.
    int s=0;
    int e =n-1;
    long long pivot=-1;

    long long mid=s+(e-s)/2;

    while(s<=e)
    {
        if (s == e) {
            pivot = s;
        }
        if(mid-1>=0 && arr[mid]<arr[mid-1])
        {
            pivot=mid-1;
        }

        if(mid+1<n && arr[mid]>arr[mid+1])
        {
            pivot=mid;
        }

        if(arr[mid]<arr[s])
        {
            e=mid-1;
        }
        else 
        {
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }


    long long ans=-1;
    if(key>=arr[0] && key<=arr[pivot])
    {
        ans=binarysearch(0,pivot,arr,key);
    }

    else
    {
        ans=binarysearch(pivot+1,n,arr,key);
    }

    return ans;
}