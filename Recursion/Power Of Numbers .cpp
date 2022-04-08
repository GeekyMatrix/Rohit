class soluion{
public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
        if(R==0)
        return 1;
        
        if(R==1)
        return (N%1000000007);
        long long ans=1;
        //N/2 power nikal liya
        long long know=power(N,R/2)%1000000007;
        
        if(R%2)
        //for odd power we use line no.24
        ans=(ans*N)%1000000007;
       // for even power we directly use line no.26
        return (ans*((know*know)%1000000007)%1000000007);
        
        
    }

};

