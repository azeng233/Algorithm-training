#include <iostream>
#include <cstdio>
#include <algorithm>
#define MaxSize 100

using namespace std;

typedef struct {
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList &L){					//对线性表进行初始化
	L.length = 0;
	for(int i = 0; i < MaxSize; i++){
		L.data[i] = i + 1;
		L.length++;
	}

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
	if(i < 1 || i > L.length)				//这里不用length+1是因为最末尾就是length了，无法继续增大
		return false;
	e = L.data[i - 1];
	for(int k = i; k < L.length; k++){		//进行逐一的往前挪一格
		L.data[k - 1] = L.data[k];
	}
	L.length--;
	return true;
}

int GetElem(SqList L, int i){
	return L.data[i - 1];
}

int Length(SqList L){
	return L.length;
}

int LocateElem(SqList L, int e){			//按值查找
	for(int i = 0; i < L.length; i++){
		if(L.data[i] == e) return i + 1;
	}
	return 0;
}

int main(){
	SqList L;
	int e = -1, n, num;
	InitList(L);							//初始化线性表
	printf("Original length is %d\n", L.length);
	cin >> n;
	printf("No.%d data is:%d\n", n, GetElem(L, n));
	printf("***********************************************\n");
	printf("Please input what number do you want to delete:\n");
	cin >> n;
	if(ListDelete(L, n, e)){
		printf("Delete Success No.%d, value is %d\n", n, e);
		printf("Length is %d\n", L.length);
	}else{
		printf("Delete Failed, Please Check Your Array Index!\n");
	}
	int len = L.length;
	printf("***********************************************\n");
	printf("Now I Will Delete All Data!\n");
	for(int i = 1; i <= len; i++){
		ListDelete(L, 1, i);
	}
	printf("Second length is %d\n", L.length);
	printf("***********************************************\n");
	printf("Please input what number and value do you want to insert:\n");
	cin >> n >> num;
	if(ListInsert(L, n, num)){
		printf("No.%d data is:%d\n", n, GetElem(L, n));
		printf("Last length is %d\n", L.length);
	}else{
		printf("Insert Failed, Please Check Your Array Index!\n");
	}
	return 0;
}