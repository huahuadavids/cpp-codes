#  C++
C++是一种混合型语言，它保留了 C语言所有的优点，同时又增添了面向对象的编程机制，我们可以将 C++语言视为 C语言的改进和扩展。
C++以C为基础继承了所有的C函数库，但C++对这些标准库都重新命名了

## 命名空间 namespace
```c++
// http://www.weixueyuan.net/view/6326.html
#include <iostream>
using namespace std;

bool flag = true;

namespace box1 {
    int num = 10;
}

namespace box2 {
    int num = 20;
}

int main(){

    // 域解析操作符
    box2::num = 100;

    // 使用命名空间
    using namespace box1;
    num = 20;

    cout<<"hello world!"<<endl;
    return 0;
}
```

## 输入输出

```c++
int x;
cout<<"Please input an int number:"<<endl;
cin>>x;
cout<<"The int number is x= "<<x<<endl;
```

## 引用
```c++
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    // 引用地址是一样的，同一个指针
    int a = 10;
    // 只读引用，不可修改
    const int &b = a;
    cout<<a<<" "<<b<<endl;
    cout<<&a<<" "<<&b<<endl;
    return 0;
}
```

## 强制类型转换
```c++

```