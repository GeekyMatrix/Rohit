class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	   int s=0;
	    for(int i=0;i<n;i++){
	        s=s+arr[i];
	    }
	    return s;
	}
};
