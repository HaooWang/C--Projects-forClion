//
// Created by hhaow on 2020/3/23.
//
// 使用移动构造函数

  //  将要返回的局部对象转移到主调函数，省去了构造和删除临时对象的过程。

#include<iostream>

using namespace std;

class IntNum {

public:

  IntNum(int x = 0) : xptr(new int(x)){ //构造函数

    cout << "Calling constructor..." << endl;

  }

  IntNum(const IntNum & n) : xptr(new int(*n.xptr)){//复制构造函数

    cout << "Calling copy constructor..." << endl;
  }

  IntNum(IntNum && n): xptr( n.xptr){ //移动构造函数

    n.xptr = nullptr;

    cout << "Calling move constructor..." << endl;

  }

  ~IntNum(){ //析构函数

    delete xptr;

    cout << "Destructing..." << endl;

  }

private:

  int *xptr;

};

//返回值为IntNum类对象

IntNum getNum() {

  IntNum a;

  return a;

}

int main() {

  cout << getNum().getInt() << endl; return 0;

}