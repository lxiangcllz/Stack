#include <iostream>
#include <cstdlib>
#include "StackBasedOnLinked.h"

Stack MakeNull() {
	Stack s;
	s = new node; //s = (node *)malloc(sizeof(node));
	s->next = NULL;
	return s;
};

bool Empty(Stack stk) {
	if(stk->next)
		return false;
	else
		return true;
}

void Push(ElemType elm, Stack stk) {
	Stack s;
	s = new node;
	s->data = elm;
	s->next = stk->next;
	stk->next = s;
}

void Pop(Stack stk) {
	Stack s;
	if(stk->next) {
		s = stk->next;
		stk->next = s->next;
		delete s; //free(s);
	}
}

ElemType Top(Stack stk) {
	if(stk->next)
		return stk->next->data;
	else
		return NULL;
}
