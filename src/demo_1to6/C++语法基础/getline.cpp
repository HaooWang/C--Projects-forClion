#include <iostream>
#include <string>
using namespace std;

int main(){
    for (int i=0;i<2;i++){
        string city,state;
        /*
         * getline（）函数是由C语言继承而来，
         * 用于在标准输入和输出流中从键盘读取数据，
         * getline-- 即读取一行的字符内容，以回车符号为行终止符
         */
        getline(cin,city,',');
        getline(cin,state);
        cout<<"City: "<<city<<"\tState: "<<state<<endl;
        
    };
    
    return 0;
};