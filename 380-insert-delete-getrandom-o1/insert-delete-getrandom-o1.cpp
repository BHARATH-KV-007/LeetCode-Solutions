class RandomizedSet {
    unordered_set<int>a;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(a.find(val)!=a.end())
        {
            return 0;
        }
        else
        {
            a.insert(val);
            return 1;
        }
        
    }
    
    bool remove(int val) {
        if(a.find(val)==a.end()) return 0;
        else
        {
            a.erase(val);
            return 1;
        }
        
    }
    
    int getRandom() {
        return *next(a.begin(),rand()%a.size());
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */