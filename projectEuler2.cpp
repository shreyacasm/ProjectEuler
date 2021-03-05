/*This problem is a programming version of Problem 2 from projecteuler.net
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1,2,3,5,8,13,21,34,55,89
By considering the terms in the Fibonacci sequence whose values do not exceed N, find the sum of the even-valued terms.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll unsigned long long int

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll t;
    cin>>t;
    while(t--){
        ll n; cin>>n;
        ll sum=2,temp=0;
        for(ll i=2;i<n;){
            ll nterm=i*4+temp;
            if(nterm>=n){
                break;
            }
            temp=i;
            i=nterm;
            sum=sum+nterm;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
