// #include <iostream>
// using namespace std;
// int f(int x);
// int bad(int n);
// int main() {
//   int n;
//   cin >> n;
//   cout << f(n) << endl;
//   cout << f(n) << endl;
//   cout << bad(n) << endl;
// }
// // a recursion function
// int f(int x) {
//   if (x == 0)
//     return 0;
//   else
//     return 2 * f(x - 1) + x * x;
// }
// int bad(int n) {
//   if (n == 0)
//     return 0;
//   else
//     return bad(n / 3 + 1) + n - 1;
// }

// // 打印输出整数
// void printDigit(int num);
// void printOut(int n) {
//   if (n >= 10)
//     printOut(n / 10);
//   else
//     printDigit(n % 10);
// }

// 一个IntCell类的完整声明（模拟整数内存单元）
class IntCell {
public:
  IntCell() { storedValue = 0; }
  IntCell(int initialValue) { storedValue = initialValue; }
  int read() { return storedValue; }
  void write(int x) { storedValue = x; }

private:
  int storedValue;
};
