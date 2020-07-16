/*
题目描述
写个程序，接受一个 正浮点 数值，输出该数值的  近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。

输入描述:
输入一个正浮点数值

输出描述:
输出该数值的近似整数值

示例1
输入
5.5
输出
6


思路：强制类型转换运算是一种严格取整运算，它不四舍五入，对于小数，最后的返回都是整数部分
，减法的结果不能用int保存，判断时要用大于等于而不只是大于
*/


#include<iostream>
using namespace std;

int main(){
    float num;
    while(cin>>num){
        int sum = (int)num;   
        if(num - sum >= 0.5){
            sum +=1;
        }
        cout<<sum<<endl;
    }    
    
    return 0;
}
