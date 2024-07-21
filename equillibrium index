int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
   int n=arr.size();
   if(n==1) return 1;

   int prefix[n]={0};
   int suffix[n]={0};

   prefix[0]=arr[0];
   suffix[n-1]=arr[n-1];

   for(int i=1;i<n;i++)
   {
       prefix[i]=prefix[i-1]+arr[i];
   }

   for(int i=n-2;i>=0;i--)
   {
       suffix[i]=suffix[i+1]+arr[i];
   }

   for(int i=0;i<n;i++)
   {
       if(suffix[i]==prefix[i])
       {
           return i;
       }
   }
   return -1;
}