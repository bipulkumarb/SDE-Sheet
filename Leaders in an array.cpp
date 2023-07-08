#include<bits/stdc++.h>
using namespace std;  

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>b;
        int temp=a[n-1];
        b.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--) {
            if(temp<=a[i]) {
                b.push_back(a[i]);
                temp=a[i];
            }
        }
        reverse(b.begin(),b.end());
        return b;
    }
};
