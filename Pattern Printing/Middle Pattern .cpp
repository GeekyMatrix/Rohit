void printPattern(string s)
{
    int l;
   int N=s.length();
   string temp;
    l=N/2;
   for(int i=0;i<=N/2;i++){
       temp="";
      
       temp+=s.substr(l,i+1);
       cout<<temp;
       cout<<"$ ";
   }
        for(int j=0;j<l;j++){
            temp+=s[j];
        
       cout<<temp;
       cout<<"$ ";
        }
}
