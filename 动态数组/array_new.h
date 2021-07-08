#pragma once

class array_new
{private:
	int size;             //总容量
	int* data;
	int number;           //已填满个数
 public:
	 array_new(int n);
	 ~array_new();
	 int& operator[](int n);
	 void in();
	 void out();
	 bool dele(int n);    //n为要删除的在第几项
	 bool insert(int n, int a);  //n为插入到第几项，a为内容
};

