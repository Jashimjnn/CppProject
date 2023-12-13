class Node{
public:
    string val;
    Node *prev;
    Node *next;

    Node(string val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class BrowserHistory {
public:
    Node *curr;
    BrowserHistory(string homepage) {
        this->curr = new Node(homepage);
    }
    
    void visit(string url) {
        Node *newNode = new Node(url);
        curr->next = newNode;
        newNode->prev = curr;
        curr = newNode;
    }
    
    string back(int steps) {
        while(curr->prev != NULL && steps > 0){
            curr = curr->prev;
            steps--;
        }
        return curr->val;
    }
    
    string forward(int steps) {
        while(curr->next != NULL && steps > 0){
            curr = curr->next;
            steps--;
        }
        return curr->val;
    }
};