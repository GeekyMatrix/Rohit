class solution
{
public:
void printTriangleDownwards(string S)
    {
         int N=S.length();
        string temp,ans="";
        for(int i=1;i<=N;i++){
            temp="";
            for(int l=1;l<=N-i;l++){
               temp+=".";
            }
            
              for(int j=0;j<i;j++){
	            temp+=S[j];
              }
           
           ans+=temp;
           cout<<temp;
           cout<<endl;
        }
    }
};
