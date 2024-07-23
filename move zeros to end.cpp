void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
	int k=0;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]!=0)
		{
			arr[k++]=arr[i];
		}
	}
	while(k<arr.size())
	{
		arr[k++]=0;
	}
}