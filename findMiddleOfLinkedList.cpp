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

int main() {
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);
  head->next->next->next->next->next = new Node(6);

  // Find the middle of the Linked List
  Node *sptr = head;
  Node *fptr = head;

  while (fptr != NULL && fptr->next != NULL) {
    sptr = sptr->next;
    fptr = fptr->next->next;
  }
  cout << sptr->data;
}
