//stack uses LIFO approach
//main three operations in stack i.e, push,pop,top laos to check for empty.

#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s; // stack of integers
    s.push(1); // push 1 onto the stack
    s.push(2); // push 2 onto the stack
    s.push(3); // push 3 onto the stack
    s.emplace(4); // emplace 4 onto the stack
    // emplace is more efficient than push because it constructs the object in place,
    //avoiding a copy.
    cout << "Top element: " << s.top() << endl; // prints 4

    s.pop(); // removes the top element (4)

    cout << "Top element after pop: " << s.top() << endl; // prints 3

    cout << "Size of stack: " << s.size() << endl; // prints 3

    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // prints No

    return 0;
}
