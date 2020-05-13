class LRUCache {
    
      typedef pair<int, int> Node;
      typedef list<Node>::iterator ref;

      list<Node> q;
      unordered_map<int, ref> m;
      int capacity;

      void insert(int key, int value) {
          
        if (m.find(key) != m.end()) {
            
          q.erase(m[key]);
          m.erase(key);
        }
          
        q.push_front(make_pair(key, value));
        m[key] = q.begin();
          
        if (q.size() > capacity) {
          m.erase(q.back().first);
          q.pop_back();
        }
      }

 public:
    
      LRUCache(int v) : capacity(v) {
          
          m.reserve(capacity);
      }

      int get(int key) {
          
        if (m.find(key) == m.end()) {
          return -1;
        }
          
        int value = m[key]->second;
        insert(key, value);
        return value;
          
      }

      void put(int key, int value) {
          
        insert(key, value);
          
      }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
