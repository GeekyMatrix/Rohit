class Solution {
  public:
    vector<string> invIsoTriangle(int N) {
        vector<string> v;
        string temp;
        int l=1;
        int m=1;
        for(int i=1;i<=N;i++){
            temp="";
            int z=i-1;
           while(z)
           {
                temp+=" ";
                z--;
            }
            for(int j=l;j<=N;j++){
                temp+="*";
            }
            l++;
            for(int k=m;k<N;k++){
                temp+="*";
            }
            m++;
            v.push_back(temp);
        }
        
        return v;
        
    }
};
