//
// Created by hhaow on 2020/3/22.
//
#include <iostream>

using namespace std;

const int N = 6;
void print(const int *p, int n);
// 常指针不允许指针Ptr修改被指内存区域的数据
// 即便内存区域上定义的变量不是常量类型，如char、int、 float等，也不能修改
// 这是常指针的特性，即去除了指针的修改权限
int main() {
  int array[N];
  for (int i = 0; i < N; i++)
    cin>>array[i];
  print(array, N);
  return 0;
}
void print(const int *p, int n) {
  cout << "{ " << *p;
  for (int i = 1; i < n; i++)
    cout << ", " << *(p+i);
  cout << " }" << endl;
}