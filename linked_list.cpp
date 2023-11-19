#include <bits/stdc++.h>

using namespace std;
//
//   A linked list is a linear data structure,
//   in which the elements are not stored at contiguous memory locations.
//   The elements in a linked list are linked using pointers
//
//- types of linked list
//  1- Single-linked list
//    - Each node has data and a reference to the next node.
//    - It's unidirectional.

// set structure of linked list

struct Node
{
    string name; // set data
    int number;  // set data
    Node *next;  // set pointer to linke nodes
};

Node *H = nullptr; // set main pointer  Head
Node *T = nullptr; // set main pointer  Tail
Node *C = nullptr; // set main pointer  Current

// +-------+    +-------+    +-------+    +-------+
// | data  | -> | data  | -> | data  | -> | data  |
// +-------+    +-------+    +-------+    +-------+
// | next  |    | next  |    | next  |    | NULL  |
// +-------+    +-------+    +-------+    +-------+

// 2 - Double linked list

// 3 - Circular linked list

int main()
{
}