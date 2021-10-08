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


