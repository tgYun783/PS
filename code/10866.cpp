#define BOJ                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);                     \
    cout.tie(NULL);
#include <iostream>
#include <string>
using namespace std;

class Node
{
    friend class Deque;
    Node *prev;
    Node *next;
    int value;
    Node(int value)
    {
        prev = next = nullptr;
        this->value = value;
    }
    int getValue() { return value; }
    void add_back(Node *n)
    {
        next = n;
        n->prev = this;
    }
    void add_front(Node *n)
    {
        prev = n;
        n->next = this;
    }
    Node *remove()
    {
        Node *n = next;
        delete this;
        return n;
    }
};

class Deque
{
    Node *head;
    Node *tail;
    int size;

public:
    Deque()
    {
        head = tail = nullptr;
        size = 0;
    }
    ~Deque()
    {
        for (Node *n = head; n != nullptr; n = n->remove())
            ;
    }

    void push_front(int n);
    void push_back(int n);
    void pop_front();
    void pop_back();
    void getSize();
    void empty();
    void front();
    void back();
};
void Deque::push_back(int val)
{
    Node *n = new Node(val);
    if (tail)
    {
        tail->add_back(n);
        tail = n;
    }
    else
        tail = head = n;
    size++;
}
void Deque::push_front(int val)
{
    Node *n = new Node(val);
    if (head)
    {
        head->add_front(n);
        head = n;
    }
    else
        tail = head = n;
    size++;
}
void Deque::pop_front()
{
    if (size == 0)
        cout << -1 << '\n';
    else
    {
        int val = head->value;
        Node *next = head->next;
        delete head;
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
void Deque::pop_back()
{
    if (size == 0)
        cout << -1 << '\n';
    else
    {
        int val = tail->value;
        Node *prev = tail->prev;
        delete tail;
        size--;
        if (prev)
        {
            prev->next = nullptr;
            tail = prev;
        }
        else
        {
            head = tail = nullptr;
        }
        cout << val << '\n';
    }
}
void Deque::getSize()
{
    cout << size << '\n';
}
void Deque::empty()
{
    if (size == 0)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
}
void Deque::front()
{
    if (size == 0)
        cout << -1 << '\n';
    else
    {
        int val = head->value;
        cout << val << '\n';
    }
}
void Deque::back()
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
    Deque q;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "push_back")
        {
            int n;
            cin >> n;
            q.push_back(n);
        }
        else if (s == "push_front")
        {
            int n;
            cin >> n;
            q.push_front(n);
        }
        else if (s == "front")
            q.front();
        else if (s == "back")
            q.back();
        else if (s == "size")
            q.getSize();
        else if (s == "pop_front")
            q.pop_front();
        else if (s == "pop_back")
            q.pop_back();
        else if (s == "empty")
            q.empty();
    }
}
