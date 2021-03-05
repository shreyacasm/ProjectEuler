/*
This problem is a programming version of Problem 3 from projecteuler.net

The prime factors of 13195 are 5,7,13 and 29.

What is the largest prime factor of a given number N?
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll unsigned long long int

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll res=n,des=2;
        for(ll i=2;i<=sqrt(n);i++){
            while(n%i==0){
                des=i;
                n=n/i;
            }
        }
        if(n>des){
            des=n;
        }
        cout<<des<<"\n";
    }
    return 0;
}
