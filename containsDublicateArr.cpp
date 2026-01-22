#include <iostream>
#include <unordered_set>
#include <vector>

/**
  * Tip: If you have to solve this problem without extra space → sort first → O(n log n) or use bitset if constraints are tight
  **/

using namespace std;

bool containsDublicate(vector<int> &nums) {
  unordered_set<int> seen;

  for (int num : nums) {
    if (seen.find(num) != seen.end())
      return true;
    seen.insert(num);
  }
  return false;
}

int main() {
  vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

  cout << "Result: " << containsDublicate(nums) << endl;
  return 0;
}
