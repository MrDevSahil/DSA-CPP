#include <iostream>

using namespace std;

/**
 * You already know arrays well. Arrays are great but they have one big problem
 * — fixed size and contiguous memory. When you create an array, the system
 * allocates a fixed block of memory. You can't easily insert or delete in the
 * middle without shifting everything. A Linked List solves this. Instead of
 * storing elements in one contiguous block, each element lives anywhere in
 * memory and simply holds the address of the next element. That's it.
 **/

int main() {
  struct Node {
    int data;
    Node *next;

    Node(int val) {
      data = val;
      next = nullptr;
    }
  };

  // Build linked list
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);

  // Traversing a Linked List
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }

  /**
   * Note: head is just a pointer to the first node. If you lose head, you lose
   * the entire list.
   * Note: Always traverse with a temp pointer, never move head itself —
   * otherwise you lose access to the beginning of the list.
   **/

  /**
   *                        Array        Liniked List
   * ArrayLinked            O(1)         O(n)
   * Insert at beginning    O(n)         O(1)
   * Insert at end          O(1)         O(n)
   * Memory                 Contiguous   Scattered
   * Size                   Fixed        Dynamic
   **/
}
