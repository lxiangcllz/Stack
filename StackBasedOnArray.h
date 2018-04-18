//栈的顺序存储实现方式(数组实现)
#ifndef STACKBASEDONARRAY_H_
#define STACKBASEDONARRAY_H_

typedef double ElemType; // 元素类型暂定为double

#define max 100

//栈的顺序存储结构定义
struct STACK{
	ElemType elements[max];
	int top;
};
typedef STACK Stack;
//Stack S;
//栈的容量： max - 1
//栈顶指针：S.top
//栈顶元素：S.elelments[S.top]
//栈空：S.top = -1
//栈满：S.top = max - 1

//操作
void MakeNull(Stack &S);
bool Empty(Stack S);
ElemType Top(Stack S);
void Pop(Stack &S);
void Push(ElemType x, Stack &S);

#endif /* STACKBASEDONARRAY_H_ */
