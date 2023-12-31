#include<bits/stdc++.h>

using namespace std;

// Operations in Big O(1)

void stlStack(){
    
    stack<int> s;
    s.push(12);
    s.push(10);
    s.push(11);
    s.push(15);

    stack<int> st1, st2;
    st1.swap(st2);
    
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

}

int main(){
    // pairExample();
    stlStack();

    
}