#include <iostream>
using namespace std;

// 函数声明和定义。形参  float x,int *intPart,float *fracPart
// 形参为指针，即传内存地址，可以对该地址上的数据进行操作
void splitFloat(float x,int *intPart,float *fracPart){
    *intPart = static_cast<int>(x);  // 类型转换 static_cast<int>(x)
    *fracPart = x-*intPart;    // 对内穿空间上的数据进行读写操作
}

int main(){
    cout<<"Enter 3 float point numbers:"<<endl;
    for(int i=0;i<3;i++){
        float x,f;int n;
        cin>>x;
        splitFloat(x, &n, &f); // 函数调用，传值传地址，或者指针
        cout<<"Integer Part = "<<n<<"  Fraction Part = "<<f<<endl;
    }
    return 0;
}