vector<vector<int>> transpose(int a[][M], int n)
{
if(n==0){
       return {{}};
   }
   int row=n;
   int col=n;
   vector<vector<int>> v(n,vector<int>(row));
   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
          v[j][i]=a[i][j];
       }
   }
    return v;
    
}
