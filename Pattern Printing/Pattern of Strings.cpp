class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	    vector<string> v;
	    string temp;
	    int N=S.length();
	    int k=N;
	    for(int i=1;i<=N;i++){
	        temp="";
	        
	        for(int j=0;j<k;j++){
	        temp+=S[j];
	    }
	    k--;
	  v.push_back(temp);
      }
 return  v;
}
};
