//lexigraphic order of elements in queues
#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(8);
    pq.push(9);
    pq.push(2);

    //maxhaep()
    //front element of the queue
    cout << "Front element: " << pq.top() << endl; // prints 9

    while(pq.size() > 0){
        cout << pq.top() << " "; // prints 9 8 5 2
        pq.pop(); // removes the top element (9)
    }
    cout << endl; // prints 8 5 2

    //to arrange the elemnets in ascending order i.e, minheap()
    priority_queue<int, vector<int>, greater<int>> minHeap;
    //meaning of the above line:
    //priority_queue<type, container_type, comparison_function>
    //type: type of the elements in the queue (int in this case)
    //container_type: type of the underlying container (vector<int> in this case)
    //comparison_function: function to compare the elements (greater<int> in this case)
    //greater<int> is a function object that returns true if the first argument is greater than the second argument.
    //This means that the priority queue will be a min-heap, where the smallest element is at the top.
    //This is useful when we want to get the smallest element first, rather than the largest element.
    minHeap.push(5);
    minHeap.push(8);
    minHeap.push(9);
    minHeap.push(2);
    //minheap()
    //front element of the queue
    cout << "Front element: " << minHeap.top() << endl; // prints 2
    while(minHeap.size() > 0)
    {
        cout << minHeap.top() << " "; // prints 2 5 8 9
        minHeap.pop(); // removes the top element (2)
        }
    cout << endl; // prints 5 8 9
    return 0;

}