#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n ; 
    cout <<"enter the  size of the vector : ";
    cin>>n;
     int q; 
     cout<<endl;
    cout <<"enter the  number of queries for  the vector : ";
    cin>>q;
    vector<int>v(n+1,0);
     cout <<"enter the  elements of  the vector : ";
    for (int i=1;i<=n;i++)
    {
        cin>>v[i];
    } 
    int prefix_sum=0;
    int ans=0;
     for (int i =1;i<=n;i++)
          {          
            prefix_sum+=v[i];
          }
   
    while(q--)
    {  
         int l,r;    
        cout <<"enter the range l : " <<"r :" ;
        cin >>l>>r;      
        ans=v[r]+v[l-1];
        cout <<"the sum of the queriies in the given range is :"<< ans <<endl;
    }
    
    
    return 0;
}
