#include "mystack.h"

int main()
{
	MyStack myStack;
	initStack(&myStack);
	//Ԫ��ѹջ
	cout << "ѹջ��" << endl;
	pushElem(&myStack, 1);
	pushElem(&myStack, 2);
	pushElem(&myStack, 3);
	pushElem(&myStack, 4);
	pushElem(&myStack, 5);
	printElem(&myStack);

	//Ԫ�س�ջ
	cout << "��ջ��" << endl;
	popElem(&myStack);
	popElem(&myStack);
	printElem(&myStack);

	//��ȡԪ�ظ���
	cout << "Ԫ�ظ���:";
	cout << getNum(&myStack) << endl;

	system("pause");
	return 0;
}