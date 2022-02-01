class Solution{
public:	
	void swapKth(int *arr, int n, int k) {
	    // code here
	    int a;
	            a=arr[k-1];
	             arr[k-1]=arr[n-k];
	             arr[n-k]=a;
	    
	}
};
