#include<bits/stdc++.h>
using namespace std;


void explainPair(){

    pair<int,int> p ={1,3};

    pair<int, pair<int,int>> p = {1,{2,3}};

    pair<int, int> arr[]={{1,2},{3,4},{5,6}};
}


void explainList(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); // {5,2,4}

    ls.emplace_front();
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}

void explainVector(){
     
     vector<int> v;
     v.push_back(1); // {1}
     v.emplace_back(2); // {1,2}

     vector<pair<int,int>> p;

     p.push_back({1,3}); // need to specify as pair
     p.emplace_back(1,3); // no need to specify (automatically determines)

     vector<int> v(5,100);  // {20,20,20,20,20}
     vector<int>v(5); // {0,0,0,0,0}

     vector<int>v1(5,20); // {20,20,20,20,20}
     vector<int>v2(v1);  // {20,20,20,20,20}


     // Iterator

     vector<int>::iterator it = v.begin(); 
     cout<<*(it)<<" ";
     it++;

     // there are 4 types of iterators
     // v = {20,10,5,30,40}
     // v.begin(); it will point at 20
     // v.end(); it will point at after 40 so it--; will point to 40
     // v.rend();
     // v.rbegin();

     for(vector<int>::iterator it =v.begin(); it!=v.end();it++){
        cout<<*(it)<<" ";
     }

     for(auto it = v.begin(); it!=v.end();it++){ // automatically c++ assign to vector iterator considering datatype
        cout<<*(it)<<" ";
     }

     for(auto it:v){ // this is for each loop, it means iterate the v
        cout<<it<<" ";
     }

    vector<int>v(2,100); // {100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

    vector<int> copy(2,50);//{50,50}
    
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

    v.size(); // calculate the size
    v.pop_back(); // {10,20}-->{10}

    //v1-->{10,20}   v2-->{30,40}
    v1.swap(v2); // after swap v1--> {30,40}    v2-->{10,20}

    v.clear(); // erase entire vector
      
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3);//{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); //{4,1}

    dq.back();
    dq.front();

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}


void explainStack(){
    stack<int> st;
    st.push(1); //  {1}
    st.push(2); // {2,1}
    st.push(3);// {3,2,1}
    st.push(3); //{3,3,2,1}

    st.emplace(4); // {4,3,3,2,1}

    cout<<st.top(); // 4
    st.pop(); //{3,3,2,1}

    st.size(); // 4
     


}

void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2);// {1,2}
    q.emplace(4);//{1,2,4} 

    q.back() +=5;  //{1,2,9}
    cout<<q.back(); // prints 9
    cout<<q.front(); // prints 1

    q.pop(); // {2,9}

    cout<<q.front(); // prints 2

}

void explainPQ(){

    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout<<pq.top(); //prints 10
    pq.pop(); //{8,5,2}
    pq.top(); // 8


    // minimum heap

    priority_queue<int,vector<int>, greater<int>> pq;

    pq.push(2); // {2}
    pq.push(1); // {1,2}
    pq.push(8); // {1,2,8}
    pq.emplace(10); // {1,2,8,10}

    cout<<pq.top(); // prints 1


}


void explainSet(){
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    // only stores unique element
    // stores in ascending order (sorted manner)

    // {1,2,3,4,5}
    auto it = st.find(3); // return the iterator which returns to the 3

    auto it = st.find(6); // as 6 is not in the set, so it will return st.end(); which point just after last element

    st.erase(5); // {1,2,3,4}

    int cnt = st.count(1); // if there is 1 present there will be 1given because it will be unique otherwise 0

    auto it= st.find(3); // returns iterator which has 3

    auto it =st.find(6); // if element is not in the set then it will return st.end() which points at the end after last element

    st.erase(5); // removes 5  // takes logarithmic time

    auto it = st.find(3);
    st.erase(it); // takes constant count

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(5);

    st.erase(it1,it2); // {1,2,3,4,5} --> {1,5} [first,end)

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void Multiset(){
    // Everrything is same as set
    // only stores duplicates elements also

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(2);// {1,2}
    ms.insert(1); //{1,1,2}

    ms.erase(1); //all 1's erased

    int cnt = ms.count(1); // count the no.of 1's

    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1));

}

void ExplainUset(){
    unordered_set<int> ust;
    /* lower bound and upper bound funtions does not work,
    rest all funtions are same as above, it does not 
    stores in any particular order it has a better
    complexity than set in most cases, except some
    when collision happens */

   // unique element


}

void explainMap(){

    // stores in respect to key {key,value}
    // it can be of any data type
    map<int,int> mpp;
    map<int, pair<int,int>> mpp;
    map<pair<int,int>,int> mpp;

    mpp[1]=2;
    mpp.emplace({3,1});
    mpp.insert({2,3});
}





int main(){

    return 0;
}
