
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void delete_at_position(Node *&head, int pos)
{
    if (pos == 0)
    {
        if (head == NULL)
        {
            return;
        }

        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            temp = temp->next;
        }
        Node *deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }
}
int size_value(Node *head)
{
    Node *temp = head;
    int cnt_size = 0;
    while (temp != NULL)
    {
        cnt_size++;
        temp = temp->next;
    }
    return cnt_size;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    int test;
    cin >> test;

    for (int i = 1; i <= test; i++)
    {
        int x, val;
        cin >> x;

        switch (x)
        {
        case 0:
            cin >> val;
            insert_at_head(head, val);
            break;
        case 1:
            cin >> val;
            insert_at_tail(head, val);
            break;
        case 2:
            cin >> val;
            if (size_value(head) <= val)
            {
                print_linked_list(head);
                continue;
            }
            else
            {
                delete_at_position(head, val);
            }
            break;
        }

        print_linked_list(head);
    }

    return 0;
}
