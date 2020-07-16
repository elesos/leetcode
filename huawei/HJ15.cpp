/*
题目描述
输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。

输入描述:
 输入一个整数（int类型）

输出描述:
 这个数转换成2进制后，输出1的个数

示例1
输入
5
输出
2


思路：
通过与1进行与运算，如果为1，则个数加1
然后右移一位，继续。

*/
#include<iostream>
using namespace std;

int main(){
    int num, count=0;
    
    cin>>num;
    while(num > 0){
        if(num&1){
            count++;
        }
        num >>= 1;
    }
    cout<<count<<endl;
    return 0;
}