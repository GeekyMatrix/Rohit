int convertFive(int n) {
    // Your code here
    int i=0,z=0;
    while(n>0){
        int m=n%10;
        if(m==0){
            m=5;
        }
        z+=pow(10,i)*m;
        i++;
    n/=10;
    }
    return z;
}
