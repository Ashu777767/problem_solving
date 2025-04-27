#include <bits/stdc++.h> 
vector<int> bitwiseAnd(int n, int q, vector<int> arr, vector<int> queries)
{ 
    vector<int>jawab(q);
    vector<int>real(n+1);
   // real[0] = 0;
    for(int i = 1;i<=n;i++){
        real[i] = arr[i-1];
    }
    for(int i = 0;i<q;i++){
        int ans = real[1];
        int j = 1;
        while(j<=n){
            if((ans&real[j])>=queries[i]){
                ans = ans&real[j];
                j++;
            }else{
                 jawab[i] = j-1;
                 break;
            }
        }
         if (j > n) {
            jawab[i] = n;
        }
    }
    
    return jawab;
}