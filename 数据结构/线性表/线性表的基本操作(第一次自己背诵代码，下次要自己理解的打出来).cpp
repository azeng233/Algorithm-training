#include <iostream>
#include <cstdio>
#include <algorithm>
#define MaxSize 10

using namespace std;

typedef struct {
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList &L){					//对线性表进行初始化
	for(int i = 0; i < MaxSize; i++){
		L.data[i] = i + 1;
	}
	L.length = 0;
}

bool ListInsert(SqList &L, int i, int e){	//对线性表进行元素插入操作
	if(i < 1 || i > L.length + 1)			//这里使用length+1是因为插入可以在最后插入
		return false;
	if(L.length >= MaxSize)
		return false;
	for(int k = L.length; k >= i; k--){		//进行逐一的往后退一格
		L.data[k] = L.data[k - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}

bool ListDelete(SqList &L, int i, int &e){	//对线性表进行元素删除操作
	int temp;
	if(i < 1 || i > L.length)				//这里不用length+1是因为最末尾就是length了，无法继续增大
		return false;
	temp = L.data[i - 1];
	for(int k = i; k < L.length; k++){		//进行逐一的往后退一格
		L.data[k - 1] = L.data[k];
	}
	L.length--;
	return true;
}

int GetElem(SqList L, int i){
	return L.data[i - 1];
}

int main(){
	SqList L;
	int e = -1, n;
	InitList(L);							//初始化线性表
	cin >> n;
	int a = GetElem(L, n);
	printf("第%d个元素为：\n", n);
	printf("%d", a);
	return 0;
}