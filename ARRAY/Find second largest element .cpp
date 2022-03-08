class Solution
{
public:
    int print2largest(int A[], int N)
    {
    	//code here.
    	 int res = -1;
       int largest = A[0];
       for(int i=1;i<N;i++){
           if(A[i]>largest){
               res = largest;
               largest = A[i];
               
           }
           else if(A[i]!=largest){
               if(res == -1 || A[i]>res){
                   res = A[i];
               }
           }
       }
       return res;
    }

};



