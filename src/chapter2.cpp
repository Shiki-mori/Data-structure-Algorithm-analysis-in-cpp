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

// #include <iostream>
// #include <vector>
// using namespace std;
// // 2.5 Algorithm 1
// int maxSubSum1(const vector<int> &a) {
//   int maxSum = 0;
//   for (int i = 0; i < a.size(); i++) {
//     for (int j = i; j < a.size(); j++) {
//       int thisSum = 0;
//       for (int k = i; k <= j; k++)
//         thisSum += a[k];

//       if (thisSum > maxSum)
//         maxSum = thisSum;
//     }
//   }
//   return maxSum;
// }

// // 2.6 Algorithm 2
// int maxSubSum2(const vector<int> &a) {
//   int maxSum = 0;
//   for (int i = 0; i < a.size(); i++) {
//     int thisSum = 0;
//     for (int j = i; j < a.size(); j++) {
//       thisSum += a[j];
//       if (thisSum > maxSum)
//         maxSum = thisSum;
//     }
//   }
//   return maxSum;
// }

// // 2.7 Algorithm 3
// int max3(int num1, int num2, int num3) {
//   int temp = num1 > num2 ? num1 : num2;
//   return temp > num3 ? temp : num3;
// }
// int maxSubRec(const vector<int> &a, int left, int right) {
//   // 基准情形
//   if (left == right) {
//     if (a[left] > 0)
//       return a[left];
//     else
//       return 0;
//   }

//   int center = (left + right) / 2;
//   int leftMaxSum = maxSubRec(a, left, center);
//   int rightMaxSum = maxSubRec(a, center + 1, right);
//   // cout << "center = " << center << endl;
//   int leftMaxSumBoard = 0; // 左半部分带最后一个元素的最大子序列和
//   int leftSum = 0;         // 左半部分子序列和
//   for (int i = center; i >= left; i--) {
//     leftSum += a[i];
//     // cout << "i = " << i << ' ' << "leftMaxSumBoard = " <<
//     leftMaxSumBoard<<
//     // endl;
//     if (leftMaxSumBoard < leftSum)
//       leftMaxSumBoard = leftSum;
//   }
//   int rightMaxSumBoard = 0; // 右半部分带最后一个元素的最大子序列和
//   int rightSum = 0;         // 右半部分子序列和
//   for (int j = center + 1; j <= right; j++) {
//     rightSum += a[j];
//     if (rightMaxSumBoard < rightSum)
//       rightMaxSumBoard = rightSum;
//   }
//   // cout << leftMaxSumBoard << ' ' << rightMaxSumBoard << endl;
//   // return 0;
//   return max3(leftMaxSum, rightMaxSum, leftMaxSumBoard + rightMaxSumBoard);
// }

// int maxSubSum3(const vector<int> &a) { return maxSubRec(a, 0, a.size() - 1);
// }

// // 2.8 Algorithm 4
// int maxSubSum4(const vector<int> &a) {
//   int sum = 0;
//   int maxSum = 0;
//   int first = 0, last = 0; // 存储序列下标
//   int thisFirst = 0, thisLast = 0;
//   for (int i = 0; i < a.size(); i++) {
//     sum += a[i];
//     thisLast = i;
//     if (sum < 0) {
//       sum = 0;
//       if (i + 1 <= a.size())
//         thisFirst = i + 1;
//     }
//     if (maxSum < sum) {
//       maxSum = sum;
//       first = thisFirst;
//       last = thisLast;
//     }
//   }
//   cout << "from " << first << " to " << last << endl;
//   return maxSum;
// }

// int main() {
//   vector<int> nums = {4, -3, 5, -2, -1, 2, 6, -2};
//   // cout << maxSubSum1(nums) << endl;
//   // cout << maxSubSum2(nums) << endl;
//   // cout << maxSubSum3(nums) << endl;
//   cout << maxSubSum4(nums) << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// // 2.9 binary search
// template <typename Comparable>
// int binarySearch(const vector<Comparable> &a, const Comparable &x) {
//   size_t left = 0;
//   size_t right = a.size() - 1;

//   while (left <= right) {
//     size_t mid = (left + right) / 2;
//     if (x == a[mid]) {
//       // cout << "x==a[mid]" << endl;
//       return mid;
//     } else if (x < a[mid])
//       right = mid - 1;
//     else
//       left = mid + 1;
//   }
//   return -1;
// }

// int main() {
//   vector<int> nums1 = {0, 1, 2, 3, 4, 5};
//   cout << binarySearch(nums1, 0) << endl;
//   cout << binarySearch(nums1, 1) << endl;
//   cout << binarySearch(nums1, 2) << endl;
//   cout << binarySearch(nums1, 3) << endl;
//   cout << binarySearch(nums1, 4) << endl;
//   cout << binarySearch(nums1, 5) << endl;
//   cout << binarySearch(nums1, 6) << endl;
// }

// #include <iostream>
// using namespace std;
// long long gcd(long long m, long long n) {
//   while (n != 0) {
//     long long rem = m % n;
//     m = n;
//     n = rem;
//   }
//   return m;
// }
// int main() {
//   cout << gcd(1989, 1590) << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// // 2.11 高效率的幂运算
// long long pow(long long x, int n) {
//   if (n < 0)
//     return 0;
//   if (n == 0)
//     return 1;

//   if (n % 2)
//     return pow(x * x, n / 2) * x;
//   else
//     return pow(x * x, n / 2);
// }
// int main() {
//   cout << pow(3, 10) << endl;
//   return 0;
// }