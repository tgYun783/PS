#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <string>
using namespace std;

class Node
{
    friend class Queue;
    Node *prev;
    Node *next;
    int value;
    Node(int value)
    {
        prev = next = nullptr;
        this->value = value;
    }
    int getValue() { return value; }
    void add(Node *n)
    {
        next = n;
        n->prev = this;
    }
    Node *remove()
    {
        Node *n = next;
        delete this;
        return n;
    }
};

class Queue
{
    Node *head;
    Node *tail;
    int size;

public:
    Queue()
    {
        head = tail = nullptr;
        size = 0;
    }
    ~Queue()
    {
        for (Node *n = head; n != nullptr; n = n->remove())
            ;
    }

    void push(int n);
    void pop();
    void getSize();
    void empty();
    void front();
    void back();
};
void Queue::push(int val)
{
    Node *n = new Node(val);
    if (tail)
    {
        tail->add(n);
        tail = n;
    }
    else
    {
        tail = head = n;
    }
    size++;
}
void Queue::pop()
{
    if (size == 0)
        cout << -1 << '\n';
    else
    {
        int val = head->value;
        Node *next = head->next;
        delete[] head;
        size--;
        if (next)
        {
            next->prev = nullptr;
            head = next;
        }
        else
        {
            head = tail = nullptr;
        }
        cout << val << '\n';
    }
}
void Queue::getSize()
{
    cout << size << '\n';
}
void Queue::empty()
{
    if (size == 0)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
}
void Queue::front()
{
    if (size == 0)
        cout << -1 << '\n';
    else
    {
        int val = head->value;
        cout << val << '\n';
    }
}
void Queue::back()
{
    if (size == 0)
        cout << -1 << '\n';
    else
    {
        int val = tail->value;
        cout << val << '\n';
    }
}
int main()
{
    BOJ;
    int n;
    Queue q;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int n;
            cin >> n;
            q.push(n);
        }
        else if (s == "front")
            q.front();
        else if (s == "back")
            q.back();
        else if (s == "size")
            q.getSize();
        else if (s == "pop")
            q.pop();
        else if (s == "empty")
            q.empty();
    }
}
