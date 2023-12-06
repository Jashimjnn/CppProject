#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

void insert(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

bool isSorted(Node *head)
{
    Node *current = head;
    while (current != nullptr && current->next != nullptr)
    {
        if (current->val > current->next->val)
        {
            return false; // If current node's value is greater than the next node's value, the list is not sorted.
        }
        current = current->next;
    }
    return true; // If we reach here, the list is sorted.
}

int main()
{
    Node *head = nullptr;
    int x;
    while (1)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert(head, x);
    }

    if (isSorted(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
