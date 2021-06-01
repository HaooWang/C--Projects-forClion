//
// Created by hhaow on 2020/2/11
//
#include "iostream"
#include "vector"   // 容器模板类vector
#include "string"
#include "random"

using namespace std;
class MyClass{
public:
private:
protected:
};

int main(int argc, char ** argv)
{
    double sum = 0;
    vector<double>randVar;   // 声明但一个vector对象，ranVar
    default_random_engine engine;
    uniform_real_distribution<double> u(0, 2);   // 生成正太分布随机数
    for (int i = 0; i < 10; ++i) { //生成范围为0.0-1.0的随机数序列
        cout << "Uniform : " << u(engine) << "\t" << endl;
        randVar.push_back(u(engine));
    }

    for (vector<double>::iterator iter = randVar.begin(); iter != randVar.end(); ++iter){
      sum += *iter;
    }
    /*
     * C++ 11 标准中新引进的auto关键字和相关操作，替代上一个for循环
     */
    for (auto it : randVar) {
        sum += it;
    }
    cout<<sum<<endl;
    cout << randVar.size() << endl;

    string str = {"string "};
    string str_hello = {"hello world"};
    string strPlus = str + str_hello;
    int len = strPlus.length();
    std::cout << "tring:" << str << '\t'
        <<"str_hello:"<< str_hello << "\t"
        <<"Plus:"<< strPlus << strPlus.length() <<endl;
    /*
     * string 字符串标准库类提供了大量的成员函数，如判空、迭代、查找、插入、添加、替换、拼接、计数等
     */
    for (auto j = strPlus.begin(); j != strPlus.end() ; ++j) {

      if(strPlus.empty()){
        cout<< "strPlus.empty() TRUE" <<endl;
        return -1;
      }
        cout << *j <<endl;
    }
    
    return 0;
}
