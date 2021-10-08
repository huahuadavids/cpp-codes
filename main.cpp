#include <iostream>
#include<cmath>
using namespace std;

bool flag = true;

namespace box1 {
    int num = 10;
}

namespace box2 {
    int num = 20;
}


int main(){
    int a = 10;
    int b = 3;
    double result = static_cast<double>(a) / static_cast<double>(b);
    cout<<result<<endl;
    return 0;
}


