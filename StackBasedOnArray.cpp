#include <iostream>
#include "StackBasedOnArray.h"

using namespace std;

void MakeNull(Stack &S) {
	S.top = -1;
}

bool Empty(Stack S) {
	if(S.top < 0)
		return true;
	else
		return false;
}

ElemType Top(Stack S) {
	if(Empty(S))
		return NULL;
	else
		return S.elements[S.top];
}

void Pop(Stack &S) {
	if(Empty(S))
		cout<< "栈空";
	else
		S.top = S.top - 1;
}

void Push(ElemType x, Stack &S) {
	if(S.top == max - 1)
		cout<< "栈满";
	else {
		S.top = S.top - 1;
		S.elements[S.top] = x;
	}
}
