class Solution{   
public:
    int maxDays(int arr[],int n){
        int ans1;
         ans1=arr[0];      
         for(int i=1;i<n;i++){
	        if(arr[i]>ans1)
	            ans1=arr[i];
	       
	        }
	        return ans1;
	        
    }
};
