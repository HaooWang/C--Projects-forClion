#include <iostream>
using namespace std;
//声明并定义了一个Point类
class Point{
private:
  //私有成员
    int x,y;
public:
  //公有成员函数
    Point(int x,int y):x(x),y(y){};  // 自定义构造函数，用于初始化对象操作
    ~Point();    // 默认析构函数
    //成员函数 getX（）， getY（）
    int getx(){return x;};
    int gety(){return y;};
};
// main函数
int main(int argc, char ** argv){
    Point a(4,5);  //声明一个Point类对象，并调用构造函数初始化对象
    Point *ptr;       //定义一个Point类型的指针，它指向Point类的某个对象
    ptr = &a;         // 赋值，初始化类指针变量
    cout<<ptr->getx()<<endl;     // 使用指针成员运算符号 ->   来调用类的公有成员函数访问并处理私有成员
    cout<<(*ptr).gety()<<endl;    //（*ptr）等价于类的对象a， 因此成员操作符号变成了 . 而不是 ->
    return 0;
}
