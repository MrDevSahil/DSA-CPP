#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
  stack<int> inbox;
  stack<int> outbox;

public:
  void push(int x) { inbox.push(x); }
  int pop() {
    if (outbox.empty()) {
      while (!inbox.empty()) {
        outbox.push(inbox.top());
        inbox.pop();
      };
    }
    int val = outbox.top();
    outbox.pop();
    return val;
  }
  int peek() {
    if (outbox.empty()) {
      while (!inbox.empty()) {
        outbox.push(inbox.top());
        inbox.pop();
      }
    }
    return outbox.top();
  }
  bool empty() { return inbox.empty() && outbox.empty(); }
};

int main() {
  MyQueue q;
  q.push(1);
  q.push(2);
  q.push(3);
  cout << q.pop() << endl;
  cout << q.peek() << endl;
  cout << q.empty() << endl;
}
