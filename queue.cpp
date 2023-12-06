// Queue
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    string name; // set data
    int number;  // set data
    Node *next;  // set pointer to linke nodes
};

Node *F = NULL; // set main pointer  front
Node *R = NULL; // set main pointer  rear
Node *C = NULL; // set main pointer  current

bool Deleted()
{
    if (F == NULL && R == NULL)
        return true;
    return false;
}

void EnQueue(string A, int B)
{
    C = new Node;   // create new node
    C->name = A;    // set data of node
    C->number = B;  // set data of node
    C->next = NULL; // set pointer next = null >> case it's a tail (:

    // check if Queue is empty
    if (Deleted())
    {
        F = R = C; // set front = rear = current
    }
    else
    {
        R->next = C; // pointer rear of next -> current
        R = C;       // set rear = current
    }
}
//=============================================================================================
void Erase_Head()
{
    C = F;
    if (F == R)
    {
        delete C;
        F = R = NULL;
    }
    else
    {
        // set front = front -> next
        F = F->next; // set front =>> front of next
        delete C;    // delete current
    }
}

int main()
{
}