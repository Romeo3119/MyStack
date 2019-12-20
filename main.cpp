#include "mystack.h"

int main()
{
	MyStack myStack;
	initStack(&myStack);
	//元素压栈
	cout << "压栈：" << endl;
	pushElem(&myStack, 1);
	pushElem(&myStack, 2);
	pushElem(&myStack, 3);
	pushElem(&myStack, 4);
	pushElem(&myStack, 5);
	printElem(&myStack);

	//元素出栈
	cout << "出栈：" << endl;
	popElem(&myStack);
	popElem(&myStack);
	printElem(&myStack);

	//获取元素个数
	cout << "元素个数:";
	cout << getNum(&myStack) << endl;

	system("pause");
	return 0;
}