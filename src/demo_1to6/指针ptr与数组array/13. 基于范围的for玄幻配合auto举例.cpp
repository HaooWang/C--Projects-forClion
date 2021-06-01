//
// Created by hhaow on 2020/3/23.
//
#include <vector>

#include <iostream>

int main()

{

  std::vector<int> vec = {1,2,3};
// 使用vector容器，end（），begin（），size（），empty（）等函数
  for(auto i = vec.begin(); i != vec.end(); ++i)

    std::cout << *i << std::endl;
// C++ 提供的auto自动类型关键字，用于自动识别对象的类型，无需再另外声明
  for(auto elem : vec)
    //auto elem对象自动识别为vec同类型数据，并作为迭代器从begin（）到end（）顺序遍历
    std::cout << elem << std::endl;
}