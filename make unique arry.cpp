int minElementsToRemove(vector<int> &arr)
{
	// Write your code here.
	sort(arr.begin(),arr.end());

	int i=0;
	int count=0;
	while(i<arr.size())
	{
		if(arr[i]==arr[i+1])
		{
			count++;
			i++;
		}
		else
		{
			i++;
		}
	}
	return count;
}