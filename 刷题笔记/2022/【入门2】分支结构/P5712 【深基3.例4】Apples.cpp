/*
题目描述
八尾勇喜欢吃苹果。她今天吃掉了x(0≤x≤100) 个苹果。英语课上学到了 apple 这个词语，想用它来造句。如果她吃了 1 个苹果，就输出 Today, I ate 1 apple.；如果她没有吃，那么就把 1 换成 0；如果她吃了不止一个苹果，别忘了 apple 这个单词后面要加上代表复数的 s。你能帮她完成这个句子吗？

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
1
输出 #1复制
Today, I ate 1 apple.
输入 #2复制
3
输出 #2复制
Today, I ate 3 apples.
*/
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n == 0) {
		cout << "Today, I ate 0 apple.";
		return 0;
	}
	if(n == 1) cout << "Today, I ate 1 apple.";
	else cout << "Today, I ate " << n << " apples.";
	return 0;
}