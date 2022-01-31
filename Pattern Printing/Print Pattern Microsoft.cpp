
class Solution{
public:
vector<int>v;
    vector<int> pattern(int N){
      
          v.push_back(N);
       if(N<=0) 
       return v;
   
       
       pattern(N-5);
       v.push_back(N);
       return v;
    }
};


//2nd Approach
class Solution{
public:
    vector<int> pattern(int N){
   vector<int>v;
   int a,b;
     a=N;
   v.push_back(a);
   b=a-5;
   a=b;
   v.push_back(a);
   bool temp=true;
   
   while(a!=N){
       
       if(temp && a>0){
       b=a-5;
       a=b;
       v.push_back(a);
       }
       else{
       b=a+5;
       a=b;
       v.push_back(a);
       temp=false;
       }
   }
   return v;
    }
};
