#include <iostream>
using namespace std;

// 指针数组和二维数组的区别在于其占据的内存空间是否连续。
int main(){
    //定义了三个一维数组，长度len=3
    int line1[]={1,0,2};
    int line2[]={3,1,8};
    int line3[]={4,6,9};

    // 将三个数组的首地址分别存放在指针数组中，
    // 堆叠拼接成一个二维的矩阵
    int *pLine[3]={line1,line2,line3};
    cout <<"Matrix text:"<<endl;

    // 顺序遍历数组元素
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<pLine[i][j]<<"\t";
        cout<<endl;
    }
}