#include<bits/stdc++.h>
using namespace std;
int main()
{   
     long long int x,count=0;
     cin>>x;
     while (x!=0)
     {
     if(x%2==0)
     {
         x=x>>1;
     }
     else
     {
         count+=1;
         x-=1;
     }
     }
     cout<<count;
     return 0;
}