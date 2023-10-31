//vector

/*
- It is a conatiner.
- Dynamic in nature.
- Inside operated as "Singly Linked List".

*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> v; //It creates and empty vector, v={}
    v.push_back(5); // {5}
    v.emplace_back(10); // {5,10} - emplace_back() works faster than push_back().

    //pair in a vector.
    vector<pair<int, int>> vect;
    vect.push_back({1,2}); // vector needs {} inside the ().
    vect.emplace_back(3,4); // emplace_back() automatically take 3,4 into a vector syntax.

    //Size declaration
    vector<int> vec(5,100); // {100,100,100,100,100}
    vector<int> vtr(5); // {0,0,0,0,0}

    //Copy of other vector.
    vector<int> v1(2,4); // v1 = {4,4}
    vector<int> v2(v1); // v2 = {4,4}

    //Iterator - It points to the memory address.
    vector<int>::iterator it = vec.begin();
    it++;
    cout<<"it++ points out "<<*(it)<<"in the 'vec' vector"<<endl;
    it = it+2;
    cout<<"it points out "<<*(it)<<"in the 'vec' vector"<<endl;
    /*vector<int>::iterator i1 = vec.end();
    cout<<"*(i1)"<<*(i1)<<endl;
    vector<int>::iterator i2 = vec.rbegin(); //reverse begin
    cout<<"*(i2)"<<*(i2)<<endl;
    vector<int>::iterator i3 = vec.rend(); //reverse end
    cout<<"*(i3)"<<*(i3)<<endl; */

    cout<<"Element at index '0' in vector, v: "<<v[0]<<endl;
    cout<<"Element at index '0' in vector, v using at(): "<<v.at(0)<<endl;

    cout<<"v.back(): "<<v.back()<<endl;

    cout<<"Elements in the vector, vec are: "<<endl;
    for(vector<int>::iterator itr=vec.begin(); itr!=vec.end(); itr++){
        cout<<*(itr)<<" ";
    }
    cout<<endl;
    cout<<endl;

    // Instead of iterator, we can use "auto" - that takes the data type automatically a/c to the value assigned to the variable.
    cout<<"Iterating using auto: "<<endl;
    cout<<"Elements in the vector, vec are: "<<endl;
    for(auto it=vec.begin(); it!=vec.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<endl;

    cout<<"Elements in v: "<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Elements in vec: "<<endl;
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Elements in vtr: "<<endl;
    for(auto i:vtr){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Elements in v1: "<<endl;
    for(auto i:v1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Elements in v2: "<<endl;
    for(auto i:v2){
        cout<<i<<" ";
    }
    cout<<endl;

    //erase() - deletes the address of the element.
    vec.erase(vec.begin()+1);
    cout<<"Elements in v after applying vec.erase(v.begin()+1): "<<endl;
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;

    //v.erase[start,end) - ***Brackets are important***
    vec.erase(vec.begin()+2, vec.begin()+4);
    cout<<"Elements in v after applying vec.erase(vec.begin+2, vec.begin()+4): "<<endl;
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;

    //Insert
    vector<int> v3(2,100);
    v3.insert(v3.begin(),300);
    //v3.insert((v3.begin()+1), 2 10);
    cout<<"Elements in v3: "<<endl;
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;

    //inserting a vector inside another vector.
    vector<int> v4(2,50);
    v3.insert(v3.begin(), v4.begin(), v4.end());
    cout<<"Elements in v3 after inserting a vector inside another vector: "<<endl;
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;

    //size of the vector
    cout<<"v3.size(): "<<v3.size()<<endl;

    //pop_back
    cout<<"v3.pop_back(): ";
    v3.pop_back();
    cout<<"elements in v3 after pop_back(): "<<endl;
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;

    //swap
    v3.swap(v4);
    cout<<"swaping v3 and v4: "<<endl;
    cout<<"v3: ";
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"v4 ";
    for(auto i:v4){
        cout<<i<<" ";
    }
    cout<<endl;

    //clear a vector.
    cout<<"v3 vector after clearing: ";
    v3.clear();
    for(auto i:v3){
        cout<<i<<" ";
    }
    cout<<endl;

    // empty or not.
    cout<<"Checking whether the v3 vector is empty or not: ";
    cout<<v3.empty();
    cout<<endl;

    cout<<"Checking whether the v4 vector is empty or not: ";
    cout<<v4.empty()<<endl;
}


/* ----------------- OUTPUT -------------------

it++ points out 100in the 'vec' vector
it points out 100in the 'vec' vector
Element at index '0' in vector, v: 5
Element at index '0' in vector, v using at(): 5
v.back(): 10
Elements in the vector, vec are:
100 100 100 100 100

Iterating using auto:
Elements in the vector, vec are:
100 100 100 100 100

Elements in v:
5 10
Elements in vec:
100 100 100 100 100
Elements in vtr:
0 0 0 0 0
Elements in v1:
4 4
Elements in v2:
4 4
Elements in v after applying vec.erase(v.begin()+1):
100 100 100 100
Elements in v after applying vec.erase(vec.begin+2, vec.begin()+4):
100 100
Elements in v3:
300 100 100
Elements in v3 after inserting a vector inside another vector:
50 50 300 100 100
v3.size(): 5
v3.pop_back(): elements in v3 after pop_back():
50 50 300 100
swaping v3 and v4:
v3: 50 50
v4 50 50 300 100
v3 vector after clearing:
Checking whether the v3 vector is empty or not: 1
Checking whether the v4 vector is empty or not: 0

*/
