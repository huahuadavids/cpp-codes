#  C++
C++语言是一种混合型语言，它保留了 C语言所有的优点，同时又增添了面向对象的编程机制，我们可以将 C++语言视为 C语言的改进和扩展。


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