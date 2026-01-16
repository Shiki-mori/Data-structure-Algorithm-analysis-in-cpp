// for (i = 0; i < n; i++)
//   for (j = 0; j < n; j++)
//     k++;

// // fib
// int fib(int n) {
//   if (n <= 1)
//     return 1;
//   else
//     return fib(n - 1) + fib(n - 2);
// }

#include <iostream>
#include <vector>
using namespace std;
// 2.5 Algorithm 1
int maxSubSum1(const vector<int> &a) {
  int maxSum = 0;
  for (int i = 0; i < a.size(); i++) {
    for (int j = i; j < a.size(); j++) {
      int thisSum = 0;
      for (int k = i; k <= j; k++)
        thisSum += a[k];

      if (thisSum > maxSum)
        maxSum = thisSum;
    }
  }
  return maxSum;
}

// 2.6 Algorithm 2
int maxSubSum2(const vector<int> &a) {
  int maxSum = 0;
  for (int i = 0; i < a.size(); i++) {
    int thisSum = 0;
    for (int j = i; j < a.size(); j++) {
      thisSum += a[j];
      if (thisSum > maxSum)
        maxSum = thisSum;
    }
  }
  return maxSum;
}

int main() {
  vector<int> nums = {4, -3, 5, -2, -1, 2, 6, -2};
  cout << maxSubSum1(nums) << endl;
  cout << maxSubSum2(nums) << endl;
}