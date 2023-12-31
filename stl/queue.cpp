#include<bits/stdc++.h>

using namespace std;

// Operations in Big O(1)

void stlQueue(){
    
    queue<int> q;
    q.push(12);
    q.push(10);
    q.push(11);
    q.push(15);
    q.back() += 5; // 15 -> 20

    queue<int> st1, st2;
    st1.swap(st2);
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

}

int main(){
    // pairExample();
    stlQueue();

    
}