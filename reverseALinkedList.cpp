#include <iostream>

using namespace std;

int main() {
  struct Node {
    int data;
    Node *next;

    Node(int val) {
      data = val;
      next = nullptr;
    }
  };

  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);

  // Reverse an array using three pointers
  Node *prev = NULL;
  Node *curr = head;
  Node *next;
  while (curr != nullptr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;

  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
