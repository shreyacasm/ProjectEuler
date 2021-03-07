/*This problem is a programming version of Problem 5 from projecteuler.net

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible(divisible with no remainder) by all of the numbers from 1 to N?
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
ll solve(ll n){
    bool flag=1;
    ll pro=1;
    if(n==2){
        pro=2;
    }
   for(ll i=2;i<=n;i++){
       flag=1;
       for(ll j=2;j<=sqrt(i);j++){
           if(i%j==0){
               flag=0;
               break;
           }
       }
       if(flag==1 || i==2){
           for(int p=1;p<n;p++){
               if(pow(i,p)>n){
                   //cout<<"here p-1 is "<<p-1<<"  for i "<<i<<"\n";
                   pro=pro*pow(i,p-1);
                   break;
               }
           }
       }
   }
   cout<<pro<<"\n"; 
   return 0; 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        solve(n);
    }
    return 0;
}
