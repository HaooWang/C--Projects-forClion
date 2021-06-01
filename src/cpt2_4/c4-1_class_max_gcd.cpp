/*
 *C4-1 最大公约数 (100 满分)
题目描述
求两个正整数a 和 b的最大公约数。

要求使用c++ class编写程序。可以创建如下class
 *
 */

#include <iostream>
using namespace std;

class Integer {
private:
    int _num;
public:
//构造函数
    Integer(int num):_num(num){}; //初始化类对象
    int get_num(){ return _num;}
//计算当前Integer 和 b之间的最大公约数
    int gcd(Integer b) {
        return gcd(_num,b.get_num());
    }
    int gcd(int a , int b);//函数重载，形参数量与类型不同
    ~Integer(); //析构函数
};
int Integer::gcd(int a, int b) {
  // 算法思想：用这两个数相除取模，模不为0则交换二者继续取模操作，直至结束
    int c=a%b;
    while(c!=0)
    {
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}
Integer::~Integer() {}; //析构函数
int main(){
    int a, b;
    cin >> a >> b;
    Integer A(a); //调用构造函数，初始化Integer类对象A
    Integer B(b); // 调用构造函数，初始化Integer类对象B
    cout << A.gcd(B) << endl;
    return 0;
}

/*
 *您的程序运行结果为：评测通过，得分为：100.0，以下为详细信息：

编号	运行结果	运行时间(ms)	使用空间(KB)	得分
0	评测通过	2ms	12568KB	10.0
1	评测通过	0ms	12568KB	10.0
2	评测通过	3ms	12568KB	10.0
3	评测通过	0ms	12568KB	10.0
4	评测通过	0ms	12568KB	10.0
5	评测通过	3ms	12568KB	10.0
6	评测通过	3ms	12568KB	10.0
7	评测通过	2ms	12568KB	10.0
8	评测通过	2ms	12568KB	10.0
9	评测通过	2ms	12568KB	10.0
 *
 *
 */