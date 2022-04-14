#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    class node *next;
};
void push(node **head, int data)
{
    node *nnode = new node();
    nnode->data = data;
    nnode->next = *head;
    *head = nnode;
}
int main()
{
    int n;
    node *p = NULL;
    node *q = NULL;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter data:" << endl;
        cin >> n;
        push(&p, n);
    }
    q = p;
    for (int i = 0; i < 5; i++)
    {
        cout << q->data << endl;
        q = q->next;
    }
}
