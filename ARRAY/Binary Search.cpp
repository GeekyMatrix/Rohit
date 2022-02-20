class Solution{
  public:
     int binarysearch(int arr[], int n, int k){
        //ist approach
        for(int i=0;i<n;i++){
            if(arr[i]==k)
            return i;
        }
        return -1;
    }
  
  
    //2nd approach
    int start=0;
    int end=n-1;
    int mid=start+(end-start/2);
    
    while(start<=end){
        if(arr[mid]==k){
        return mid;
        }
        if(k>arr[mid]){
        start=mid+1;
        }
        else
        {
            k<arr[mid];
        end=mid-1;
        }
        
        mid=start+(end-start/2);
    }
    return -1;
        }
    
};
