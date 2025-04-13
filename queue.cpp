//FIFO APPROACH 
#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q; // queue of integers
    q.push(1); // push 1 onto the queue
    q.push(2); // push 2 onto the queue
    q.push(3); // push 3 onto the queue
    q.emplace(4); // emplace 4 onto the queue
    // emplace is more efficient than push because it constructs the object in place,
    //avoiding a copy.
    cout << "Front element: " << q.front() << endl; // prints 1
    cout << "Back element: " << q.back() << endl; // prints 4

    int a = q.back()+=5; // adds 5 to the back element (4)
    cout<< "value at back of queue after adding 5:" <<a<<endl; // prints 9
    
    q.pop(); // removes the front element (1)

    cout << "Front element after pop: " << q.front() << endl; // prints 2

    cout << "Size of queue: " << q.size() << endl; // prints 3

    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // prints No

    //swapping two queues
    queue<int> q1, q2;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q2.push(4);
    q2.push(5);

    cout << "Queue 1 before swap: ";
    while (!q1.empty()) {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    
    swap(q1, q2); // swaps the two queues

    cout << "Queue 1 after swap: ";
    while (!q1.empty()) {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl; // prints 4 5
    return 0;

    //cpmplexity of queue operations:
    //push: O(1)
    //pop: O(1)
    //front: O(1)
    //back: O(1)
    //size: O(1)
    //empty: O(1)
    //emplace: O(1)
    //swap: O(1)
    
}