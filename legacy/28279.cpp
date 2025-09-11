#include <iostream>
using namespace std;

class node
{
    friend class deque;
    int value;
    node *prev;
    node *next;

public:
    node(int n)
    {
        value = n;
        prev = next = nullptr;
    }
    int getValue() { return value; }
    void addback(node *n)
    {
        next = n;
        n->prev = this;
    }
    void addfront(node *n)
    {
        prev = n;
        n->next = this;
    }
    node *remove()
    {
        node *n = next;
        delete this;
        return n;
    }
};

class deque
{
    node *head;
    node *tail;
    int size;

public:
    deque()
    {
        head = tail = nullptr;
        size = 0;
    }
    ~deque()
    {
        for (node *n = head; n != nullptr; n = n->remove())
            ;
    }
    void pushfront(int n);
    void pushback(int n);
    int removefront();
    int removeback();
    int getfront();
    int getback();
    int empty();
    int getsize();
};
void deque::pushback(int value)
{
    node *n = new node(value);
    if (tail)
    {
        tail->addback(n);
        tail = n;
    }
    else
    {
        tail = head = n;
    }
    this->size++;
}
void deque::pushfront(int value)
{
    node *n = new node(value);
    if (head)
    {
        head->addfront(n);
        head = n;
    }
    else
    {
        tail = head = n;
    }
    this->size++;
}
int deque::removefront()
{
    if (size == 0)
        return -1;
    int val = head->value;
    node *next = head->next;
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
    return val;
}
int deque::removeback()
{
    if (size == 0)
        return -1;
    int val = tail->value;
    node *prev = tail->prev;
    delete[] tail;
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
    return val;
}
int deque::getback()
{
    if (size == 0)
        return -1;
    int val = tail->value;
    return val;
}
int deque::getfront()
{
    if (size == 0)
        return -1;
    int val = head->value;
    return val;
}
int deque::empty()
{
    if (size == 0)
        return 1;
    else
        return 0;
}
int deque::getsize()
{
    return size;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);
    int n;
    deque deque;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t, tmp;
        cin >> t;
        switch (t)
        {
        case 1:

            cin >> tmp;
            deque.pushfront(tmp);
            break;

        case 2:

            cin >> tmp;
            deque.pushback(tmp);
            break;
        case 3:
            cout << deque.removefront() << '\n';
            break;
        case 4:
            cout << deque.removeback() << '\n';
            break;
        case 5:
            cout << deque.getsize() << '\n';
            break;
        case 6:
            cout << deque.empty() << '\n';
            break;
        case 7:
            cout << deque.getfront() << '\n';
            break;
        case 8:
            cout << deque.getback() << '\n';
        }
    }
}
