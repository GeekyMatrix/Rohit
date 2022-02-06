class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int b;
	    b=arr[0];
	    for(int i=1;i<n;i++){
	       if(arr[i]>b)
	        b=arr[i];
	    }
	    int c=-1;
	    for(int j=0;j<n;j++){
	       if(arr[j]>c &&arr[j]!=b)
	     
	        c=arr[j];
	   
	    }
	    
	    
	
	return c;
	}
};
