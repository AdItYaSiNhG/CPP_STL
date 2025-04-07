#include <bits/stdc++.h>
using namespace std;

int main()
{
//pairs
pair <int,int> p={1,3};
cout<<p.first<<" "<<p.second<<endl; // prints 1 3

//nested pairs
pair <int,pair<int,int>> p1 = {1,{3,4}};
cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl; // prints 1 3 4

//array of pairs
pair <int,int> arr[] = {{1,2},{3,4},{5,6}};
cout<<arr[0].first<<" "<<arr[0].second<<endl; // prints 1 2

//sum of pairs
pair <int,int> p2 = {1,2};
pair <int,int> p3 = {3,4};
pair <int,int> p4 = {p2.first + p3.first, p2.second + p3.second};
cout<<p4.first<<" "<<p4.second<<endl; // prints 4 6
}