/*********************
//基于数组的顺序栈的实现
*********************/


#include <iostream>
using namespace std;

#define MAX_SIZE 1024
typedef struct MyStack{
	int data[MAX_SIZE];
	int topIdx; //栈顶指针
	int size; //有效元素的个数
}MyStack;

//初始化栈
void initStack(MyStack* stack)
{
	//栈顶指针为0，则表示栈空
	stack->size = 0;
	stack->topIdx = 0;
	cout << "栈初始化成功!" << endl;
}

//元素压栈
void pushElem(MyStack* stack, int elem)
{
	if (stack->topIdx == MAX_SIZE)
	{
		cout << "栈已满，压栈失败!" << endl;
		return;
	}
	stack->data[stack->topIdx] = elem;
	stack->topIdx++;
	stack->size++;
}

//元素出栈
void popElem(MyStack* stack)
{
	if (stack->topIdx == 0)
	{
		cout << "栈为空，无法出栈!" << endl;
		return;
	}
	stack->topIdx--;
	stack->size--;
}

//获取栈内元素的个数
int getNum(MyStack* stack)
{
	return stack->size;
}
//打印元素
void printElem(MyStack* stack)
{
	if (stack->topIdx == 0)
	{
		cout << "栈为空!" << endl;
		return;
	}
	for (int i = 0; i < stack->topIdx; ++i)
	{
		cout << stack->data[i] << " ";
	}
	cout << endl;
}
