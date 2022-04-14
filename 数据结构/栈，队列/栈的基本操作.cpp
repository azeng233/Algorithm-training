#include <iostream>
#include <cstdio>

#define MaxSize 10

using namespace std;

typedef struct {
	int data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack &S){
	for(int i = 0; i < MaxSize; i++)
		S.data[i] = 0;
	S.top = -1;						//使头指针指向末尾，之后插入数据就指向栈顶的元素（指向元素下标）,栈长top+1
}

bool StackEmpty(SqStack S){
	if(S.top == -1)
		return true;
	else
		return false;
}

bool Push(SqStack &S, int x){						//进栈，若栈S未满，则将x加入使之成为新栈顶
	if(S.top == MaxSize - 1)
		return false;
	S.data[++S.top] = x;
	return true;
}

bool Pop(SqStack &S, int &x){						//出栈，若栈S非空，则弹出栈顶元素
	if(S.top == -1)
		return false;
	x = S.data[S.top--];
	return true;
}

bool GetTop(SqStack S, int &x){
	if(S.top == -1)
		return false;
	x = S.data[S.top];
	return true;
}

void print(SqStack S){
	if(S.top == -1)
		cout << "Empty Stack!";
	for(int i = 0; i <= S.top; i++){
		cout << S.data[i] << " ";
	}
}

int main(){
	SqStack S;
	InitStack(S);
	Push(S, 11);
	print(S);
	return 0;
}
