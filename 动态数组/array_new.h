#pragma once

class array_new
{private:
	int size;             //������
	int* data;
	int number;           //����������
 public:
	 array_new(int n);
	 ~array_new();
	 int& operator[](int n);
	 void in();
	 void out();
	 bool dele(int n);    //nΪҪɾ�����ڵڼ���
	 bool insert(int n, int a);  //nΪ���뵽�ڼ��aΪ����
};

