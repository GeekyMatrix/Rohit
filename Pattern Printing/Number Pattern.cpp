vector<string> numberPattern(int N)
    {  vector<string> v;
        string temp;
        for(int i=1;i<=N;i++){
             temp="";
       for(int j=1;j<=i;j++){
  
      temp+=to_string(j);//to_string used for convert integer into string 
       }
      for(int k=i-1;k>=1;k--){
          
         temp+=to_string(k);
      }
     
        v.push_back(temp);
  
      }
 return  v;
    }
};
