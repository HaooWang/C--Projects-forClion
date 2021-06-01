//
// Created by hhaow on 2020/3/23.
//
#include <iostream>

#include <vector>  // 头文件vector

using namespace std;

//计算数组arr中元素的平均值
double average(const vector<double> &arr)
{
  double sum = 0;

  for (unsigned i = 0; i<arr.size(); i++)

    sum += arr[i];

  return sum / arr.size();

}

int main() {

  unsigned n;

  cout << "n = ";

  cin >> n;

  vector<double> arr(n); //创建数组对象，vector容器，double类型，长度n，vector内部自动动态分配内存并delete删除释放内存空间

  cout << "Please input " << n << " real numbers:" << endl;

  for (unsigned i = 0; i < n; i++)

    cin >> arr[i];

  cout << "Average = " << average(arr) << endl;

  return 0;

}