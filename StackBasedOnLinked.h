//栈的链式存储实现

#ifndef STACKBASEDONLINKED_H_
#define STACKBASEDONLINKED_H_

#include <iostream>
#include <cstdlib>

using namespace std;

typedef double ElemType; // 元素类型暂定为double

//栈的链式存储结构定义
struct node { //节点类型
	ElemType data;
	node *next;
};
typedef node *Stack; //栈的类型

//操作
Stack MakeNull();
bool Empty(Stack stk);
void Push(ElemType elm, Stack stk);
void Pop(Stack stk);
ElemType Top(Stack stk);

#endif /* STACKBASEDONLINKED_H_ */
