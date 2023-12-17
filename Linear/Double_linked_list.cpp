#include <bits/stdc++.h>
using namespace std;
// Double linked list
struct Node
{
    string name; // set data
    int number;  // set data
    Node *next;  // set pointer to linke nodes
    Node *P;
};

Node *H = NULL; // set main pointer  Head
Node *T = NULL; // set main pointer  Tail
Node *C = NULL; // set main pointer  Current
//==================================================================================

// add new node to head of list
void Add_Head(string A, int B)
{
    C = new Node;  // creat new node
    C->name = A;   // set data of node
    C->number = B; // set data of node
    // check if list is impety
    if (H == NULL && T == NULL)
    {
        H = C;          // set head = current
        T = C;          // set tail = current
        C->next = NULL; //  set pointer next = null
        C->P = NULL;   //  set pointer prev = null
    }
    else
    {
        C->next = H; // set current of next = head
        H->P = C;
        H = C;       // set current = head
        H->P = NULL; // set head of prev = null 
    }
}

//==========================================================================================

// add new node to tail

void Add_Tail(string A, int B)
{
    C = new Node;   // create new node
    C->name = A;    // set data of node
    C->number = B;  // set data of node
    C->next = NULL; // set pointer next = null >> case it's a tail (:

    // check if list is empty
    if (H == NULL && T == NULL)
    {
        H = C;          // set head = current
        T = C;          // set tail = current
        C->next = NULL; //  set pointer next = null
        C->P = NULL;   //  set pointer prev = null
    }
    else
    {

        T->next = C; // pointer tail oP next -> current
        C -> P = T; // set current oP prev = tali
        T = C;       // set tail = current
    }
}

//==============================================================================================
// Delete Head node

void Erase_Head()
{
    C = H;       // set current = head
    H = H->next; // set head =>> head oP next
    delete C;    // delete current
    H->P = NULL;
}
//==============================================================================================

// delete Tail node

void Erase_Tail()
{
    C = T; // set current = head
    T->P = T; //set tail oP prev = tail 
    delete C; //dell current
    T->next = NULL; // set pointer => null
}

//=====================================================================================
// print linked list

void Print_Nodes()
{
    C = H;
    while (C != NULL)
    {
        cout << "Name : " << C->name << ","
             << "ID : " << C->number << endl;
        C = C->next;
    }
}


void Revers_Print_Nodes()
{
    C = T;
    while (C != NULL)
    {
        cout << "Name : " << C->name << ","
             << "ID : " << C->number << endl;
        C = C->P;
    }
}


int main()
{
    Add_Head("ahmed", 1);
    Add_Head("essam", 2);
    Add_Head("mohmaed", 3);
    Add_Head("gnaa", 4);
    Print_Nodes();
    cout << "=====================================" << endl;
    Add_Tail("essam", 12);
    Add_Tail("eseeeem", 1355);
    Print_Nodes();
    Erase_Tail();
    Erase_Head();
    cout << "=====================================" << endl;
    Print_Nodes();
}