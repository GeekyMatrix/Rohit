class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
         int i=0,j=k,g=0;
        while(k<=n)
        {
            g=n-k;
            reverse(arr.begin()+i,arr.end()-g);
            i+=j;
            k+=j;
        }
            reverse(arr.begin()+i,arr.end());
    }
};
