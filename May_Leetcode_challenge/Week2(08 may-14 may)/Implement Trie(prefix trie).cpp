class Trie {
public:
    /** Initialize your data structure here. */
        bool isEndofWord;
        unordered_map<char,Trie*> m;
    Trie() {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        isEndofWord=false;
        unordered_map<char,Trie*> m;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* temp=this;
        for(int i=0;i<word.length();i++){
            char x=word[i];
            if(temp->m.find(x)==temp->m.end()){
                temp->m[x]=new Trie;
            }
            temp=temp->m[x];
        }
        temp->isEndofWord=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* temp=this;
        if(temp->m.size()==0)
            return false;
        int i=0;
        for(i=0;i<word.length();i++){
            if(temp->m.find(word[i])==temp->m.end())
                return false;
            temp=temp->m[word[i]];
        }
        return temp->isEndofWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* temp=this;
        if(temp->m.size()==0)
            return false;
        for(int i=0;i<prefix.length();i++){
            if(temp->m.find(prefix[i])==temp->m.end())
                return false;
            temp=temp->m[prefix[i]];            
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
