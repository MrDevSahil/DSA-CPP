#include <iostream>

using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = nullptr;
  }
};

void removeNode(Node *&head, int n) {
  // Two pointers
  Node *bptr = head;
  Node *fptr = head;
  // n distance between pointers
  while (n != 0) {
    fptr = fptr->next;
    n--;
  }
  // Edge case: deleting the head node if n equals to the length of the list
  if (fptr == NULL) {
    head = head->next;
    // print before returning
    Node *temp = head;
    while (temp != nullptr) {
      cout << temp->data;
      temp = temp->next;
    }
    return;
  }
  while (fptr->next != nullptr) {
    bptr = bptr->next;
    fptr = fptr->next;
  }
  // Pointer to delete the removed node
  Node *toDelete = bptr->next;
  // Update pointer and delete the Node
  bptr->next = bptr->next->next;
  delete toDelete;

  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data;
    temp = temp->next;
  }
};

int main() {
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  removeNode(head, 2);
}
