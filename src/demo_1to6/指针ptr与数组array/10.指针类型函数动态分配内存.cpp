#include <iostream>
using namespace std;

int main(){
    int* newintvar();
    int* intptr = newintvar();  //指针函数，返回类型为指针类型
    *intptr = 5;
    cout<<*intptr<<endl;
    delete intptr;
    return 0;
}

int *newintvar(){
  // 指针函数，返回动态内存分配的结果
    int* p=new int();
    return p;
}

/*
 * 运行结果：

Step One:

Default Constructor called.

Destructor called.

Step Two:

Constructor called.

Destructor called.
 */