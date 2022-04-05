#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stdlib.h>

using namespace std;

typedef struct LNode{
	int data;
	struct LNode *next;
}LNode, *LinkList;

bool InitList(LinkList &L){
	L = (LNode *)malloc(sizeof(LNode));				//分配一个头节点
	if(L == NULL) return false;						//内存不足，分配失败
	L->next = NULL;									//头节点指向NULL
	return true;
}

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
	LNode *p = GetElem(L, i - 1);					//找到第 i-1个元素，进行后插操作
	if(p == NULL) return false;
	return InsertNextNode(p, e);
}

bool InsertPriorNode(LNode *p, LNode *s){			//前插操作：在 p节点之前插入节点s
	if(p == NULL || s == NULL) return false;
	s->next = p->next;								//s放在 p的后面
	p->next = s;
	int temp = p->data;
	p->data = s->data;
	s->data = temp;
	return true;
}

bool ListDelete(LinkList L, int i, int &e){			//按位序删除（带头结点）， 删除第 i个元素
	LNode *p = GetElem(L, i-1);						//找到 i-1个元素
	if(p == NULL) return false;						//i的值不合法
	if(p->next == NULL) return false;				//p节点之后是NULL节点
	LNode *q = p->next;
	e = q->data;
	p->next = q->next;
	free(q);
	return true;
}

void print(LinkList L){
	int i = 0;
	LNode *p = L;
	p = p->next;
	while(p != NULL){
		printf("%4d", p->data);
		i++;
		if(i % 5 == 0) cout << "\n";
		p = p->next;
	}
}

LinkList List_TailInsert(LinkList &L){				//尾插法建立单链表
	L = (LNode *)malloc(sizeof(LNode));
	int x;
	LNode *s, *r = L;								//r作为表尾指针
	cin >> x;
	while(x != 9999){
		s = (LNode *)malloc(sizeof(LNode));			//分配内存空间存储x
		s->data = x;
		r->next = s;
		r = s;										//r指向s作为表尾
		cin >> x;
	}
	r->next = NULL;									//表尾节点的末尾置为NULL
	return L;
}

LinkList List_HeadInsert(LinkList &L){				//头插法建立单链表
	L = (LNode *)malloc(sizeof(LNode));
	L->next = NULL;
	int x;
	cin >> x;
	while(x != 9999){
		if(InsertNextNode(L, x)){
			cin >> x;
		}
		else{
			cout << "头插法插入节点失败!";
		}
	}
	return L;
}

int main(){
	LinkList L;
	//尾插法
//	List_TailInsert(L);
	//头插法
	List_HeadInsert(L);
	print(L);
	return 0;
}