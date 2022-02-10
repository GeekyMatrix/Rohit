class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
        // Your code goes here 
        sort(binArray.begin(),binArray.end());
       return binArray;
    }
};


//2nd Approach
class Solution 
{ 
	static int[] SortBinaryArray(int arr[], int n) 
	{
	   int i = -1; //index of sorted subarray
	   for(int j = 0; j<n; j++){
	       if(arr[j]==0){
	           i++;
	           int temp = arr[i];
	           arr[i] = arr[j];
	           arr[j] = temp;
	       }
	   }
	   return arr;
	} 
} 
