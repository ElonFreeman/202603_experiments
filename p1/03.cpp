#include <iostream>
#include <vector>
using namespace std;

int josephusProblem() {
    int n = 17;  // 总人数
    int m = 3;   // 报数到3的倍数淘汰
    
    vector<bool> people(n, true);  // true表示还在圈中
    int remaining = n;             // 剩余人数
    int count = 0;                 // 报数计数器
    int index = 0;                 // 当前索引
    
    while (remaining > 1) {
        // 如果这个人还在圈中，就报数
        if (people[index]) {
            count++;
            
            // 如果报数是3的倍数，淘汰此人
            if (count % m == 0) {
                people[index] = false;
                remaining--;
            }
        }
        
        // 移动到下一个人
        index = (index + 1) % n;
    }
    
    // 找出最后剩下的人
    for (int i = 0; i < n; i++) {
        if (people[i]) {
            return i;
        }
    }
    
    return -1;  // 不应该执行到这里
}

int main() {
    int result = josephusProblem();
    cout << "最后剩下的人的原始编号是: " << result << endl;
    
    // 验证过程输出
    cout << "\n模拟过程：" << endl;
    vector<bool> people(17, true);
    int remaining = 17;
    int count = 0;
    int index = 0;
    int round = 1;
    
    while (remaining > 1) {
        if (people[index]) {
            count++;
            if (count % 3 == 0) {
                cout << "第" << round++ << "轮淘汰: " << index 
                     << "号 (报数到" << count << ")" << endl;
                people[index] = false;
                remaining--;
            }
        }
        index = (index + 1) % 17;
    }
    
    for (int i = 0; i < 17; i++) {
        if (people[i]) {
            cout << "最后幸存者: " << i << "号" << endl;
        }
    }
    
    return 0;
}

/*
=============
joseph cycle
=============

#include <iostream>
using namespace std;

int josephusMath(int n, int m) {
    int survivor = 0;
    for (int i = 2; i <= n; i++) {
        survivor = (survivor + m) % i;
    }
    return survivor;
}

int main() {
    int result = josephusMath(17, 3);
    cout << "最后剩下的人的原始编号是: " << result << endl;
    return 0;
}
*/