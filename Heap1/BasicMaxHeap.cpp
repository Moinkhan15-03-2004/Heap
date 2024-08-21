#include<iostream>
#include<queue>
using namespace std;
int main(){
//     priority_queue<int>pq;// this is default maxheap in c++
//     pq.push(10);
//     pq.push(2);
//     pq.push(-6);
//     pq.push(81);
//    cout<<pq.top();// 81 is print 
//     pq.pop();// top pe element hi remove hota hai
//     cout<<endl;
//     cout<<pq.top()<<endl;
    priority_queue<int,vector<int>,greater<int> >pq;// minHeap
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(81);
   cout<<pq.top();// 81 is print 
    pq.pop();// top pe element hi remove hota hai
    cout<<endl;
    cout<<pq.top()<<endl;

}