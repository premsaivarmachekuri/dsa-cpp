#include<bits/stdc++.h>

using  namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[1000000] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    // map<int, int> mp;
    // for(int i=0; i<n;i++){
    //     mp[arr[i]]++;
    // }
    // for(auto ip: mp){
    //     cout << ip.first << "->" << ip.second << endl;
    // }

}