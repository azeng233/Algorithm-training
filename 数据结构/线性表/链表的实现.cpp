#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stdlib.h>

using namespace std;

typedef struct LNode{
	int data;
	struct LNode *next;
}LNode, *LinkList;

LNode *GetElem(LinkList L, int i){					//按位查找，返回第 i个元素（带头结点）
	if(i < 0) return NULL;
	int j = 0;
	LNode *p;
	p = L;											//使p指向头节点
	while(p != NULL && j < i){
		p = p->next;
		j++;
	}
	return p;
}

bool InsertNextNode(LNode *p, int e){				//后插操作：在p节点之后插入元素 e
	if(p == NULL) return false;
	LNode *s = (LNode *)malloc(sizeof(LNode));
	if(s == NULL) return false;						//内存分配失败
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

bool ListInsert(LinkList &L, int i, int e){			//在第 i个位置插入元素 e（带头结点）
	if(i < 1) return false;
	LNode *p = GetElem(L, i - 1)					//找到第 i-1个元素，进行后插操作
	if(p == NULL) return false;
	return InsertNextNode(p, e);
}

int main(){

	return 0;
}
