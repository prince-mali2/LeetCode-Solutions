struct Node{
    Node* links[26];
    bool isEnd= false;
};

class Trie {
public:

    Node* root;

    Trie(){
        root = new Node();
    }
    
    void insert(string word) {
        Node* curr = root;

        for(char c : word){
            if(curr->links[c-'a']==NULL){
                Node* newnode = new Node();
                curr->links[c-'a'] = newnode;
            }
            curr = curr->links[c-'a'];
        }
        curr->isEnd = true;
    }
    
    bool search(string word) {
        Node* curr = root;

        for(char c:word){
            if(curr->links[c-'a']==NULL) return false;
            curr = curr->links[c-'a'];
        }
    return curr->isEnd;
    }
    
    bool startsWith(string prefix) {
        Node* curr = root;

        for(char c:prefix){
            if(curr->links[c-'a']==NULL) return false;
            curr = curr->links[c-'a'];
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