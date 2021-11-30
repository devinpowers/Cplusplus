/*	
LRU Policy

https://www.geeksforgeeks.org/lru-cache-implementation/

*/

#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;
 
class LRUCache {
    
  protected:
    list<int> dq;
    unordered_map<int, list<int>::iterator> map_;
    int csize; 
 
  public:
      LRUCache(int);
      void refer(int);
      void display();
};
 

LRUCache::LRUCache(int n)
{
    csize = n;
}
 
void LRUCache::refer(int x)
{
    if (map_.find(x) == map_.end()) {
        // Not in Map yet (AKA not in our Deque)
        cout << "YES" << endl;
        if (dq.size() == csize) {
            // if full, delete least recently used element
            int last = dq.back();
            cout << "Last: " << last << endl;
            
            dq.pop_back();
            map_.erase(last);
        }
    }
    else{
        dq.erase(map_[x]);
    }
        
    dq.push_front(x); // add to the front
    map_[x] = dq.begin(); 
}

void LRUCache::display()
{   
    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << (*it) << " ";
    }
 
    cout << endl;  
}
 

int main()
{
    LRUCache cac(4);
 
    cac.refer(1);
    cac.refer(2);
    cac.refer(3);
    cout << "Cache: ";
    cac.display();
    cac.refer(1); // 1 is already in our LRU
    cout << "Cache: ";
    cac.display();
    cout << "The Cache Will be full now"<< endl;
    cac.refer(4);
    cout << "Cache: ";
    cac.display();
    cac.refer(5);
    cout << "Cache: ";
    cac.display();
    cac.refer(9);
    cout << "Cache: ";
    cac.display();
    cac.refer(7);
    cout << "Cache: ";
    cac.display();
    cac.refer(4);
    cout << "Cache: ";
    cac.display();
}





