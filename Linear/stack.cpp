// Stack
#include <bits/stdc++.h>
using namespace std;
struct Stack
{
    string name; // set data
    int number;  // set data
    Stack *next; // set pointer to linke Stacks
};

Stack *T = NULL;

Stack *C = NULL;

//=============================================================================================

bool Check()
{

    if (T == NULL)
        return true;

    return false;
}

void Push(int num, string nam)
{

    C = new Stack;
    C->name = nam;
    C->number = num;

    C->next = T;
    T = C;
}

int main()
{
}