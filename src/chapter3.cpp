// for (int i = 0; i != v.size(); i++)
//   cout << v[i] << endl;

// for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
//   cout << *itr << endl;

// vector<int>::iterator itr = v.begin();
// while (itr != v.end())
//   cout << *itr++ << endl;

// iterator insert(iterator pos, const Object &x);

// iterator erase(iterator pos);

// iterator erase(iterator start, iterater end);

// #include <iostream>
// #include <list>
// #include <vector>
// using namespace std;
// // 3.5 使用迭代器隔项删除表中的项
// template <typename Container> void removeEveryOtherItem(Container &lst) {
//   auto itr = lst.begin();

//   while (itr != lst.end()) {
//     itr = lst.erase(itr);
//     if (itr != lst.end())
//       ++itr;
//   }
// }

// template <typename Container, typename Object>
// void change(Container &c, const Object &newValue) {
//   // Container::iterator itr = c.begin();
//   typename Container::iterator itr = c.begin();
//   // auto itr = c.begin();
//   while (itr != c.end()) {
//     *itr++ = newValue;
//   }
// }

// // 3.6打印任意容器
// template <typename Container>
// void print(const Container &c, ostream &out = cout) {
//   if (c.empty())
//     out << "(empty)";
//   else {
//     auto itr = begin(c);
//     out << "[" << *itr++;

//     while (itr != end(c))
//       out << "," << *itr++;

//     out << "]" << endl;
//   }
// }

// int main() {
//   list<int> List = {0, 1, 2, 3, 4};
//   print(List);
//   removeEveryOtherItem(List);
//   print(List);
//   change(List, 100);
//   auto listpos = List.begin();
//   print(List);

//   return 0;
// }