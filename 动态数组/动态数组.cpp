#include <iostream>
#include"array_new.h"
using namespace std;
int main()               //动态数组
{
    int n,a,b,c;
    cout << "输入总容量" << endl;
    cin >> n;
    array_new array(n);
    cout << "输入数据"<<endl;
    array.in();  
    cout << "当前为";
    array.out();

    cout << "输入在哪里插入 插入的数据是多少" << endl; 

    //清空输入缓冲区
    cin.clear();
    cin.ignore();  

    cin >> a>>b;
    array.insert(a,b);
    cout << "当前为";
    array.out();

    cout << "输入删除哪项" << endl;

    //清空输入缓冲区
    cin.clear();
    cin.ignore();

    cin >> c;
    array.dele(c);
    cout << "当前为";
    array.out();

  
}
