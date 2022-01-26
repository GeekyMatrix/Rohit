class Solution {
  public:
    string triDownwards(string S){
     int N=S.length();
        string temp,ans="";
        for(int i=1;i<=N;i++){
            temp="";
            for(int l=1;l<=i-1;l++){
              // S.push_back(".");
               temp+=".";
            }
            
              for(int j=i-1;j<N;j++){
	            temp+=S[j];
              }
           
           ans+=temp;
   }
    return ans;
    }
};
    
