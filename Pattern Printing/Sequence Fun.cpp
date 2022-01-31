class Solution {
	public:
		int NthTerm(int n){
        long long int b;
		  long long  int a=1;
		    for(int i=1;i<=n;i++){
		      b=(a*i)+1;
		      b=b%(1000000007);
		       a=b;
		  
		    }
		    return a;
		}

};
