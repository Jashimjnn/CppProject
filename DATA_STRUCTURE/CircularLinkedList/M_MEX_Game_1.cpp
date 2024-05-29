#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class CircularSinglyLinkedList {
private:
    Node* last;

public:
    CircularSinglyLinkedList() {
        last = nullptr;
    }

    // Print the list
    void printList() {
        if (last == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* head = last->next;
        Node* tmp = head;
        do {
            cout << tmp->val << " ";
            tmp = tmp->next;
        } while (tmp != head);
        cout << endl;
    }

    // Insert a node at the head
    void insertHead(int v) {
        Node* nd = new Node(v);
        if (last == nullptr) {
            last = nd;
            last->next = last;  // Point to itself
        } else {
            nd->next = last->next;
            last->next = nd;
        }
    }

    // Insert a node at the tail
    void insertTail(int v) {
        Node* nd = new Node(v);
        if (last == nullptr) {
            last = nd;
            last->next = last;  // Point to itself
        } else {
            nd->next = last->next;
            last->next = nd;
            last = nd;
        }
    }

    // Insert a node at any position
    void insertAnyPosition(int pos, int v) {
        if (pos < 0) {
            cout << "Invalid position." << endl;
            return;
        }

        if (pos == 0) {
            insertHead(v);
            return;
        }

        Node* nd = new Node(v);
        Node* head = last->next;
        Node* tmp = head;
        int count = 0;

        while (count < pos - 1 && tmp != last) {
            tmp = tmp->next;
            count++;
        }

        if (tmp == last && count < pos - 1) {
            cout << "Invalid position." << endl;
            delete nd;
        } else {
            nd->next = tmp->next;
            tmp->next = nd;
            if (tmp == last) {
                last = nd;
            }
        }
    }

    // Delete a node from the head
    void deleteHead() {
        if (last == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* head = last->next;
        if (last->next == last) {  // Only one node
            delete last;
            last = nullptr;
        } else {
            last->next = head->next;
            delete head;
        }
    }

    // Delete a node from the tail
    void deleteTail() {
        if (last == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        if (last->next == last) {  // Only one node
            delete last;
            last = nullptr;
        } else {
            Node* head = last->next;
            Node* tmp = head;
            while (tmp->next != last) {
                tmp = tmp->next;
            }
            tmp->next = head;
            delete last;
            last = tmp;
        }
    }

    // Delete a node from any position
    void deleteAnyPosition(int pos) {
        if (last == nullptr || pos < 0) {
            cout << "Invalid position or list is empty." << endl;
            return;
        }

        if (pos == 0) {
            deleteHead();
            return;
        }

        Node* head = last->next;
        Node* tmp = head;
        int count = 0;

        while (count < pos - 1 && tmp->next != head) {
            tmp = tmp->next;
            count++;
        }

        if (tmp->next == head || count < pos - 1) {
            cout << "Invalid position." << endl;
        } else {
            Node* toDelete = tmp->next;
            tmp->next = toDelete->next;
            if (toDelete == last) {
                last = tmp;
            }
            delete toDelete;
        }
    }
};

int main() {
    CircularSinglyLinkedList csll;
    csll.insertHead(10);
    csll.insertHead(20);
    csll.insertHead(30);
    csll.insertHead(40);
    csll.insertHead(50);
    cout << "Initial List: ";
    csll.printList();

    

    return 0;
}
