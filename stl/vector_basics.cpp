#include<bits/stdc++.h>

using namespace std;

void vectorExample(){
    vector<int> v;
    v.push_back(9); // creates a copy and then adds to the container
    v.emplace_back(10); // directly adds to teh container
    for(int i: v){
        cout << i << "\n";
    }

    vector<int>v2(5,100); // creates 100 5 times in the vector
    vector<int>v3(5); // creates container of size 5
    vector<int>v4(v2); // copy the v2 to v4

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << "\n";

    vector<pair<int, int>> vr;
    vr.push_back({1, 2});
    vr.emplace_back(3, 4);
    auto it2 = vr.end();
    it2--;
    cout << (*(it2)).first;

    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout << *(it) << " ";
    }
    
    for(auto it: v){
        cout << it << " ";
    }

    // v.erase(v.begin())
    v.erase(v.begin(), v.begin() + 2); // (start, end)

    // insert 
    v.insert(v.begin(), 5); // (position, number), // (position, times, number)

    cout << v.size();
    v.swap(v2);
    v.clear();

}

int main(){
    vectorExample();

    
}