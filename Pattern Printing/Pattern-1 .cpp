class Solution {
  public:
    vector<string> findThePattern(int N) {
        vector<string> v;
        string temp;
        char ch='A';
        for(int i=1;i<=N;i++){
            temp="";
            for(int j=1;j<=N;j++){
        
        if((i!=1 && i!=N) && (j!=1 && j!=N))
        {
            temp+="$";
        }
        else{
            temp+=ch;
               ch++;
        }
               
               
            }
           
            
            v.push_back(temp);
        }
        return v;
    }
};
