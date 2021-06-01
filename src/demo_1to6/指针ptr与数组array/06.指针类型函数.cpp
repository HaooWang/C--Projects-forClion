// 这个例子有bug

int main(){
    //主调函数中定义了一个数组变量
    int array[10];
    // 指针类型函数， 即函数返回值是一个指针类型
    int * search(int *a,int num);

    for (int i=0;i<10;i++)
        cin>>array[i];
    int *zeroptr = search(array,10);
    return 0;
}

int *search(int *a,int num){
  // 子函数中形参为指针，可以传数组的首地址
  //对数组进行操作
    int * tmp = nullptr;
    for(int i=0;i<num;i++){
      if(a[i]==0)
        tmp = &a[i];  // 子函数返回指针，或者内存空间地址
        break;
    }
  return tmp;
}