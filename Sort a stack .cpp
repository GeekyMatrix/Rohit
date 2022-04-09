void insert(stack<int> &s, int x){
   if(s.size()==0 || s.top()<=x){
       s.push(x);
       return;
   }
   //
   int val= s.top();
   s.pop();
   insert(s,x);
   s.push(val);
   return;
}
void SortedStack :: sort()
{
   //Your code here
   if(s.size()==1)
   {
      return; 
   }
   int temp=s.top();
   s.pop();
   sort();
   insert(s,temp);
   return;
}
