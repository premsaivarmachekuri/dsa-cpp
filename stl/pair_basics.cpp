#include<bits/stdc++.h>

using namespace std;

void pairExample(){
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second << "\n";
    
    pair<int, float> arr[] = {{1,2}, {3,4},{6,7}};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<arrLength; i++){
        cout << arr[i].first << " " << typeid(arr[i].second).name() << "\n";
    }

}


int main(){
    pairExample();

    
}