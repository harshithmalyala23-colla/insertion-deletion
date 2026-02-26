#include<bits/stdc++.h>
using namespace std;
int main(){
    list<string> l;
    l.push_back("C++");
    l.push_back("Python");
    l.push_back("Java");
    for(list<string>:: iterator x=l.begin();x!=l.end();x++){
        cout<<*x<<" \t";
    }
    cout<<"\n";
    l.push_front("DS");
    l.pop_back();
    for(list<string>:: iterator x=l.begin();x!=l.end();x++){
        cout<<*x<<" \t";
    }
}