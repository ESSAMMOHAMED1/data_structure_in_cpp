//Queue
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    string name; // set data
    int number;  // set data
    Node *next;  // set pointer to linke nodes
};

Node *H = NULL; // set main pointer  Head
Node *T = NULL; // set main pointer  Tail
Node *C = NULL; // set main pointer  Current

void Add_Tail(string A, int B)
{
    C = new Node;      // create new node
    C->name = A;       // set data of node
    C->number = B;     // set data of node
    C->next = NULL;    // set pointer next = null >> case it's a tail (:
    
    // check if list is empty
    if (H == NULL && T == NULL)
    {
        H = C; // set head = current
        T = C; // set tail = current
    }
    else
    {
        T->next = C; // pointer tail of next -> current
        T = C;       // set tail = current
    }
}
//=============================================================================================
void Erase_Head()
{
    C = H;       // set current = head
    H = H->next; // set head =>> head of next
    delete C;    // delete current
}