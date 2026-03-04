#include<iostream>
using namespace std;

long fac(int k) {
    static long result = 1;  // 静态变量，保存上一次的计算结果
    
    if (k == 1) {
        result = 1;  // 重置为1，准备新一轮的计算
        return 1;
    }
    
    result *= k;  // 累乘当前的k
    return result;
}

int main() {
    int n;
    
    cout << "请输入n的值：";
    cin >> n;
    
    cout << "\n连续调用fac函数的结果：" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "fac(" << i << ") = " << fac(i) << endl;
    }
    
    cout << "\n最后返回的 n! = " << fac(n) << endl;
    
    return 0;
}
/*long fac(int k)
{
    long factorial_k=1;
    for(int i=1;i<=k;i++)
    {
        factorial_k*=i;
    }

    return factorial_k;
}

int main(void)
{
    int k=10,factorial_k=0;
    factorial_k=fac(k);
    
    cout << factorial_k;

    return 0;
}*/