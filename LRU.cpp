#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int page_fault(int pages[],int n, int c){
    int page_fault=0;
    vector<int> v;
    for(int i=0;i<=n;i++){
        auto it=find(v.begin(),v.end(),pages[i]);
        if(it==v.end()){
            if(v.size()==c){
                v.erase(v.begin());
            }
            v.push_back(pages[i]);
            page_fault++;
        }
        else{
            v.erase(it);
            v.push_back(pages[i]);
        }
    }
    return page_fault;
}

int main(){
    
    int pages[]={7,0,1,2,0,3,0,4,2,3,0,3,2};
    int n=14;
    int memo_capacity=4;
    cout<<"Page Fault= "<<page_fault(pages,n,memo_capacity);
    getch();
    return 0;
}