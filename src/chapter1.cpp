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

// string str = "hell";
// string &rstr = str;
// rstr += '0';
// bool cond = (&str == &rstr);
// string &bad1 = "hello";         // invalid
// string &bad2 = str + " ";       // invalid:str+" " isn't lvalue
// string &sub = str.substr(0, 4); // invalid:str.substr(0, 4) isn't lvalue

// string str = "hell";
// string &&bad1 = "hello";
// string &&bad2 = str + " ";
// string &&sub = str.substr(0, 4);

// auto &whichList = theLists[myhash(x, theLists.size())];
// if (find(begin(whichList), end(whichList), x) != end(whichList))
//   return false;
// whichList.push_back(x);

// for (auto &x : arr)
//   ++x;

// #include <string>
// #include <vector>
// double average(double a, double b);
// void swap(double a, double b);
// string randomItem(vector<string> arr);

// string randomItem(const vector<string> &arr); // 返回左值arr的随机项
// string randomItem(vector<string> &&arr);      // 返回右值arr中的随机项

// vector<string> v{"hello", "world"};
// cout << randomItem(v) << endl;                  // 调用左值的方法
// cout << randomItem({"hello", "world"}) << endl; // 调用右值的方法

// class LargeType {};
// double average(double a, double b);
// LargeType randomItem(const vector<LargeType> &arr);
// vector<int> partialSum(const vector<int> &arr);

// //1.12 获得数组中的一个随机项的两种版本
// //第2种版本避免了临时LargeType对象的创建，但仅当调用者用一个常量引用访问它时可行
// LargeType randomItem1(const vector<LargeType> &arr) {
//   return arr[randomInt(0, arr.size() - 1)];
// }

// const LargeType &randomItem2(const vector<LargeType> &arr) {
//   return arr[randomInt(0, arr.size() - 1)];
// }

// vector<LargeType> vec;
// ···
// LargeType item1 = randomItem1(vec);    // 复制
// LargeType item2 = randomItem2(vec);        // 复制
// const LargeType &item3 = randomItem2(vec); // 不复制

// // 1.13 在C++11中返回栈分配的右值
// vector<int> partialSum(const vector<int> &arr) {
//   vector<int> result(arr.size());

//   result[0] = arr[0];
//   for (int i = 1; i < arr.size(); i++)
//     result[i] = result[i - 1] + arr[i];

//   return result;
// }
// vector<int> vec;
// ...
// vector<int> sums = partialSum(vec); // 在传统C++中是复制，在C++11中是移动

// //1.14 通过3次复制的交换
// void swap(double &x, double &y) {
//   double temp = x;
//   x = y;
//   y = temp;
// }

// void swap(vector<string> &x, vector<string> &y) {
//   vector<string> temp = x;
//   x = y;
//   y = temp;
// }

// //1.15 通过3次移动的两种交换
// //第一种通过强制类型转换实现
// //第二种使用std::move
// using namespace std;
// void swap(vector<string> &x, vector<string> &y) {
//   vector<string> temp = static_cast<vector<string> &&>(x);
//   x = static_cast<vector<string> &&>(y);
//   y = static_cast<vector<string> &&>(temp);
// }

// void swap(vector<string> &x, vector<string> &y) {
//   vector<string> temp = std::move(x);
//   x = std::move(y);
//   y = move(temp);
// }

// class IntCell {
//   IntCell(const IntCell &rhs) = delete;            // 无拷贝构造函数
//   IntCell(IntCell &&rhs) = delete;                 // 无移动构造函数
//   IntCell &operator=(const IntCell &rhs) = delete; // 无拷贝赋值
//   IntCell &operator=(IntCell &&rhs) = delete;      // 无移动赋值
// };

// // 1.16 数据成员为指针，默认操作不起作用
// class IntCell {
//   int *storedValue;

// public:
//   explicit IntCell(int initialValue = 0) {
//     storedValue = new int{initialValue};
//   }
//   int read() const { return *storedValue; }
//   void write(int x) { *storedValue = x; }
// };

// // 1.17 揭示1.16中的问题
// int f() {
//   IntCell a{2};
//   IntCell b = a;
//   IntCell c;

//   c = b;
//   a.write(4);
//   cout << a.read() << endl << b.read() << endl << c.read() << endl;
//   return 0;
// }

// // 1.18 数据成员为指针，实现五大函数
// class IntCell {
//   int *storedValue;

// public:
//   explicit IntCell(int initialValue = 0) {
//     storedValue = new int{initialValue};
//   }

//   ~IntCell() { delete storedValue; }

//   IntCell(const IntCell &rhs) { storedValue = new int{*rhs.storedValue}; }

//   IntCell(IntCell &&rhs) : storedValue{rhs.storedValue} {
//     rhs.storedValue = nullptr;
//   }

//   IntCell &operator=(const IntCell &rhs) {
//     if (this != &rhs)
//       *storedValue = *rhs.storedValue;
//     return *this;
//   }

//   IntCell &operator=(IntCell &&rhs) {
//     std::swap(storedValue, rhs.storedValue);
//     return *this;
//   }

//   int read() const { return *storedValue; }

//   void write(int x) { *storedValue = x; }
// };

// IntCell &operator=(const IntCell &rhs) {
//   IntCell copy = rhs;
//   std::swap(*this, copy);
//   return *this;
// }

// IntCell(IntCell &&rhs)
//     : storedValue{rhs.storedValue}, items{std::move(rhs.items)} {
//   rhs.storedValue = nullptr;
// }

// delete[] arr2;

#include <iostream>
#include <vector>
using namespace std;
// 1.19 findMax函数模板
// 返回数组a中的最大项
// 假设a.size()>0
// 可比较的对象必须提供operator<和operator=
template <typename Comparable>
const Comparable &findMax(const vector<Comparable> &a) {
  int maxIndex = 0;
  for (int i = 1; i < a.size(); i++)
    if (a[maxIndex] < a[i])
      maxIndex = i;
  return a[maxIndex];
}

// // 1.20 findMax函数模板的使用
// int main() {
//   vector<int> v1(37);
//   vector<double> v2(40);
//   vector<string> v3(80);
//   vector<IntCell> v4(75);

//   cout << findMax(v1) << endl;
//   cout << findMax(v2) << endl;
//   cout << findMax(v3) << endl;
//   cout << findMax(v4) << endl; // invalid: operator< undifined

//   return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// // 1.21 MemoryCell类模板
// // 一个模拟内存单元的类
// template <typename Object> class MemoryCell {
// public:
//   // initialValue =
//   Object{}:默认参数，如果调用时不提供参数，使用Object{}作为默认值
//   // Object{}调用Object的默认构造函数创建一个临时对象
//   explicit MemoryCell(const Object &initialValue = Object{})
//       : storedValue{initialValue} {}
//   const Object &read() const { return storedValue; }
//   void write(const Object &x) { storedValue = x; }

// private:
//   Object storedValue;
// };

// // 1.22 使用MemoryCell类模板
// int main() {
//   MemoryCell<int> m1;
//   MemoryCell<string> m2{"hello"};

//   m1.write(37);
//   m2.write(m2.read() + " world");
//   cout << m1.read() << endl << m2.read() << endl;

//   return 0;
// }

// 1.23 Comparable可以是一个类类型，如Square
class Square {
public:
  explicit Square(double s = 0.0) : side{s} {}
  double getSide() const { return side; }
  double getArea() const { return side * side; }
  double getPerimeter() const { return side * 4; }

  void print(ostream &out = cout) const {
    out << "(square " << getSide() << ")";
  }
  bool operator<(const Square &rhs) const { return getSide() < rhs.getSide(); }

private:
  double side;
};

// 为Square定义一个输出操作符
ostream &operator<<(ostream &out, const Square &rhs) {
  rhs.print(out);
  return out;
}

// int main() {
//   vector<Square> v = {Square{3.0}, Square{2.0}, Square{2.5}};
//   cout << "Largest Square: " << findMax(v) << endl;

//   return 0;
// }

// 1.24 使用函数对象作为findMax的第二个参数的最简单思路
template <typename Object, typename Comparator>
const Object &findMax(const vector <)