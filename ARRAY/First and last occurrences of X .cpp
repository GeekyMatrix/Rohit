vector<int>v;
    
    //IST Occurence
   int s=0,e=n-1;
   int result=-1;
   while(s<=e){
   
      int mid=s+(e-s)/2;
   if(arr[mid]==x){
       result=mid;
       e=mid-1;
   
   }
   else if(x<arr[mid]){
       e=mid-1;
   }
   else{
       s=mid+1;
   }
   
   }
    v.push_back(result);
   //Last Occurence
   int S=0,E=n-1;
   int resul=-1;
   while(S<=E){
      int mi=S+(E-S)/2;
   if(arr[mi]==x){
       resul=mi;
       S=mi+1;
      // v.push_back(resul);
   }
   else if(x<arr[mi]){
       E=mi-1;
   }
   else{
       S=mi+1;
   }
   
   }
    v.push_back(resul);
    if(result==-1){
        return {-1};
    }
   return v;
    }
