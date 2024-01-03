// Queue
#include <bits/stdc++.h>
using namespace std;
struct Queue
{
    string name; // set data
    int number;  // set data
    Queue *next;  // set pointer to linke Queues
};

Queue *F = NULL; // set main pointer  front
Queue *C = NULL; // set main pointer  current

bool Deleted()
{
    if (F == NULL && R == NULL)
        return true;
    return false;
}

void EnQueue(string A, int B)
{
    C = new Queue;   // create new Queue
    C->name = A;    // set data of Queue
    C->number = B;  // set data of Queue
    C->next = NULL; // set pointer next = null 

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
void DeQueue()
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