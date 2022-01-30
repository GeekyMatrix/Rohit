class Solution {
  public:
    vector<string> yShapedPattern(int N) {
        vector<string> v;
        string temp;
        int l=N/2;
        int x=1;
        int y=N+1;
        for(int i=1;i<=l;i++){
            temp="";
            for(int j=1;j<=N+1;j++){
            if(j==x)
            {
                temp+="*";
            }
            
            
            else if(j==y)
            {
                temp+="*";
            }
            else{
                temp+=" ";
            }
            }
            x++;
            y--;
             v.push_back(temp);
            }
            for(int k=1;k<=l;k++){
                    string s="";
                    for(int b=1;b<=l;b++){
                    s+=" ";
                    }
                    
                        s+="*";
                    temp=s;
                    v.push_back(temp);
                }
        return v;
    }
};
