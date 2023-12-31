#include<bits/stdc++.h>

using namespace std;

// push, pop takes logn
// top O(1)

void stlPriority_Queue(){
    // max heap => top element is greater
    priority_queue<int> pq;
    pq.push(12);
    pq.push(10);
    pq.push(11);
    pq.push(15);

   // min heap => top element is smaller
   priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(12);
    mpq.push(10);
    mpq.push(11);
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

}

int main(){
    // pairExample();
    stlPriority_Queue();

    
}