class Solution{
    public:
    string longest(string names[], int n)
    {
        int c=0,temp;
        for(int i=0;i<n;i++)
        {
            if((names[i].length())>c)
            {
            	//storing the maximum length of string
                c=(names[i].length());
                //storing the max string index
                temp = i;
            }
            
        }
        //returning the index of arr where the max string is present
        return names[temp];
    }
};
