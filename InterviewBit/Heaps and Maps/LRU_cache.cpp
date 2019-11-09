#include<bits/stdc++.h>

int cap;
unordered_map<int,int> um;
unordered_map<int,list<int>::iterator> t;
list<int> d;

LRUCache::LRUCache(int capacity) {
    cap = capacity;
    um.clear();
    t.clear();
    d.clear();
}

int LRUCache::get(int key) {
    if(um.find(key)==um.end()) return -1;
    d.erase(t[key]);
    d.push_front(key);
    t[key] = d.begin();
    return um[key];
}

void LRUCache::set(int key, int value) {
    if(um.find(key)==um.end()){
        if(um.size()>=cap){
            int k = d.back();
            d.pop_back();
            um.erase(k);
            t.erase(k);
        }
    }
    else d.erase(t[key]);
    d.push_front(key);
    t[key] = d.begin();
    um[key] = value;
}