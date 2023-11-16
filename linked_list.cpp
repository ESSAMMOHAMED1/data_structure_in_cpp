#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *H = NULL;
node *C = NULL;
node *T = NULL;
/*
+-------+    +-------+    +-------+    +-------+
| data  | -> | data  | -> | data  | -> | data  |
+-------+    +-------+    +-------+    +-------+
| next  |    | next  |    | next  |    | NULL  |
+-------+    +-------+    +-------+    +-------+

*/

// add new node

void addNewNode(int data)
{

    node *NewNode = new node;
    NewNode->data = data;
    NewNode->next = nullptr;
}

int main()
{
}