#include<iostream>
using namespace std;

int setBits( int a , int b)
{

    int sum = 0 ;

    while( a!=0 || b !=0 )
    {
        if( a&1 )
            ++sum ;
        if( b & 1)
            ++sum ;

        a >>= 1 ;
        b >>= 1;
    }
    return sum ;
}

int main()
{

   int a, b ;
   cin >> a >> b ;

   cout<<"Total set bits = " << setBits( a , b);

}
