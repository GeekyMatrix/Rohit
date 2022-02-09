class Solution{
public:
long long find_multiplication(int a[], int b[], int n, int m)
        {
            int ans1,ans2,i,c;
	        ans1=a[0];
	        ans2=b[0];
	        
	        for(i=1;i<n;i++){
	        if(a[i]>ans1)
	            ans1=a[i];
}
	        for(i=1;i<m;i++){
	            if(b[i]<ans2)
	           ans2=b[i];
	        }
	  c=ans1*ans2; 
	        
	return c;
}
    
};

