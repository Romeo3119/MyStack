/*********************
//���������˳��ջ��ʵ��
*********************/


#include <iostream>
using namespace std;

#define MAX_SIZE 1024
typedef struct MyStack{
	int data[MAX_SIZE];
	int topIdx; //ջ��ָ��
	int size; //��ЧԪ�صĸ���
}MyStack;

//��ʼ��ջ
void initStack(MyStack* stack)
{
	//ջ��ָ��Ϊ0�����ʾջ��
	stack->size = 0;
	stack->topIdx = 0;
	cout << "ջ��ʼ���ɹ�!" << endl;
}

//Ԫ��ѹջ
void pushElem(MyStack* stack, int elem)
{
	if (stack->topIdx == MAX_SIZE)
	{
		cout << "ջ������ѹջʧ��!" << endl;
		return;
	}
	stack->data[stack->topIdx] = elem;
	stack->topIdx++;
	stack->size++;
}

//Ԫ�س�ջ
void popElem(MyStack* stack)
{
	if (stack->topIdx == 0)
	{
		cout << "ջΪ�գ��޷���ջ!" << endl;
		return;
	}
	stack->topIdx--;
	stack->size--;
}

//��ȡջ��Ԫ�صĸ���
int getNum(MyStack* stack)
{
	return stack->size;
}
//��ӡԪ��
void printElem(MyStack* stack)
{
	if (stack->topIdx == 0)
	{
		cout << "ջΪ��!" << endl;
		return;
	}
	for (int i = 0; i < stack->topIdx; ++i)
	{
		cout << stack->data[i] << " ";
	}
	cout << endl;
}
