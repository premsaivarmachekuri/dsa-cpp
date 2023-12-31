#include<bits/stdc++.h>

using namespace std;


void vectorList(){

    list<int> l;
    l.push_back(12);
    l.push_front(10);
    l.emplace_front(20);
    l.emplace_back(9);
    l.reverse();
    cout << l.front();
}

int main(){
    // pairExample();
    vectorList();

    
}