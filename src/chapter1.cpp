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

// // 一个IntCell类的完整声明（模拟整数内存单元）
// class IntCell {
// public:
//   IntCell() { storedValue = 0; }
//   IntCell(int initialValue) { storedValue = initialValue; }
//   int read() { return storedValue; }
//   void write(int x) { storedValue = x; }

// private:
//   int storedValue;
// };

// // 经过修订的IntCell类
// class IntCell {
// public:
//   explicit IntCell(int initialValue = 0) : storedValue{initialValue} {}
//   int read() const { return storedValue; }
//   void write(int x) { storedValue = x; }

// private:
//   int storedValue;
// };

// //1.7 头文件IntCell.h中的IntCell类接口
// #ifndef IntCell_H
// #define IntCell_H
// class IntCell {
// public:
//   explicit IntCell(int initialValue = 0);
//   int read() const;
//   void write(int x);

// private:
//   int storedValue;
// };
// #endif
// //1.8 文件IntCell.cpp中的IntCell类实现
// #include "IntCell.h"
// IntCell::IntCell(int initialValue) : storedValue{initialValue} {}
// int IntCell::read() const { return storedValue; }
// void IntCell::write(int x) { storedValue = x; }
// // 1.9 文件TestIntCell，使用了IntCell类
// #include "IntCell.h"
// #include <iostream>

// using namespace std;

// int main() {
//   IntCell m;
//   m.write(5);
//   cout << "Cell contents: " << m.read() << endl;

//   return 0;
// }

// // 1.10 使用vector类：存储100个平方数并输出
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   vector<int> squares(100);

//   for (int i = 0; i < squares.size(); ++i)
//     squares[i] = i * i;

//   for (int i = 0; i < squares.size(); ++i)
//     cout << i << " " << squares[i] << endl;

//   int sum = 0;
//   for (int x : squares)
//     sum += x;

//   cout << sum;

//   return 0;
// }

// //1.11 使用指向IntCell的指针
// #include <iostream>
// using namespace std;
// class IntCell {
// public:
//   explicit IntCell(int initialValue = 0) : storedValue{initialValue} {};
//   int read() const { return storedValue; }
//   void write(int x) { storedValue = x; }

// private:
//   int storedValue;
// };
// int main() {
//   IntCell *m = nullptr;

//   m = new IntCell{0};
//   m->write(5);
//   cout << "Cell contents: " << m->read();

//   delete m;
//   return 0;
// }

// int y;
// int z = x + y;
// string str = "foo";
// vector<string> *ptr = &arr;

