/*This problem is a programming version of Problem 1 from projecteuler.net
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below N.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll unsigned long long int

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, sum=0;
        cin>>n;
        ll p3,p5,p35,s3,s5,s35;
        p3=(n-1)/3;
        p5=(n-1)/5;
        p35=(n-1)/15;
        s3=(p3*(6+(p3-1)*3))/2;
        
        s5=(p5*(10+(p5-1)*5))/2;
        
        s35=(p35*(30+(p35-1)*15))/2;
        cout<<s3+s5-s35<<"\n";
    }
    return 0;
}
