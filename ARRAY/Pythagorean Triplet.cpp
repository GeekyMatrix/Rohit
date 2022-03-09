class Solution{
public:
bool checkTriplet(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    
	    for(int i=n-1; i>1; i--){
          int r = i-1;
          int l = 0;
          
          int num = arr[i]*arr[i];
          
          while(l < r){
              int sum = arr[l]*arr[l] + arr[r]*arr[r];
              
              if(sum == num){
                  return true;
              }else if(sum > num){
                  r--;
              }else{
                  l++;
              }
          }
      }
      
      return false;
	}
};
