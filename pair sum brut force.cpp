int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int count =0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				count++;
			}
		}
	}
	if(count==0) return -1;
	return count;
}