// nearly sorted array
// sort a 'k' sorted array (sort a nearly sorted array)
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {10,20,-4,5,18,24,1,-7,56};
    int k= 2;
    int n = sizeof(arr)/4;
    vector<int>ans;
    priority_queue<int,vector<int>,greater<int> >pq;// minheap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) 
        ans.push_back(pq.top());
        pq.pop();
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}