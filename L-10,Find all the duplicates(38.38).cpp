//Ist method(Brut code),TLE wala


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>a;
        int n=nums.size();
            int count=0;
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    if(nums[i]==nums[j]){
                        count++;
                    a.push_back(nums[i]);
                    }
                }  
            }
         return a;
     }
};


//2nd method(By Map)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        vector<int>a;
        for(int i=0;i<nums.size();i++){
           
            
            m[nums[i]]++;
        }
        for(auto i:m)
        {
        if(i.second==2)    
            a.push_back(i.first);   
        }
        return a;   
    }
};





//3rd method(By Set)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>a;
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
        if(s.find(nums[i])!=s.end())
        {
               a.push_back(nums[i]);
        }
            else{
                s.insert(nums[i]);
            }
            
            
        }
       
        return a;
    }
};
