#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3); 
    // emplace_back is more efficient than push_back
    // because it constructs the object in place, avoiding a copy.
    // emplace_back is used for complex objects or when you want to avoid unnecessary copies.

    //pairs in vector
    vector<pair<int,int>> vp;
    vp.push_back({1,2});
    vp.emplace_back(3,4); 

    //miscellaneous
    vector <int> v1(5,100); // 5 elements with value 100
    vector <int> v2(5); // 5 elements with default value 0 or garbage values
    vector <int> v3(v1.begin(),v1.end()); // copy constructor
    vector <int> v4(v1); // copy constructor
    
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v4.size();i++){
        cout<<v4[i]<<" ";
    }
    cout<<endl;

    //output
    // 100 100 100 100 100 
    // 0 0 0 0 0 
    // 100 100 100 100 100 
    // 100 100 100 100 100 

    //accessing elements in vector
    //1.same as array
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; // v[0],v[1],v[2] = 1,2,3

    //2.using iterators
    vector<int>::iterator it = v.begin();

    cout <<*it<<" "<<endl; // prints 1
    cout <<*(it+2)<<" "<<endl; // prints 3

    cout<<"----------------"<<endl;
    while(it != v.end())
    {
        cout<<*it<<" "<< endl;
        it++;
    }

    cout<<"----------------"<<endl;
    //or using for loop
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<" "<<endl;
    }

    cout<<"----------------"<<endl;
    //or
    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<" "<<endl;
    }

    cout<<"----------------"<<endl;
    //use of v.at() function
    cout << v.at(2) << endl; // prints 3
    //why used: bcoz if the vector is empty or the index is out of range, it will throw an exception.
    //v.at(10); // throws out_of_range exception


    //deletion in vector
    v.erase(v.begin()+1); // deletes the element at index 1

    v.pop_back(); // deletes the last element
    //swapping two vectors
    vector<int> v5 = {1,2,3,4,5};
    vector<int> v6 = {6,7,8,9,10};
    swap(v5,v6); // swaps the two vectors
    cout<<"v5: ";
    for(int i=0;i<v5.size();i++){
        cout<<v5[i]<<" ";
    }
    cout<<endl; // prints 6 7 8 9 10
    
    cout<<"v6: ";
    for(int i=0;i<v6.size();i++){
        cout<<v6[i]<<" ";
    }
    cout<<endl; // prints 1 2 3 4 5

    v5.clear(); // clears the vector
    cout<<"v5: ";
    for(int i=0;i<v5.size();i++){
        cout<<v5[i]<<" ";
    }
    cout<<endl; // prints nothing

    cout<<v5.empty()<<endl; // prints 1 (true)
    cout<<v6.empty()<<endl; // prints 0 (false)


}