#include "main.h"
//默认测试数据 如修改个数请同时修改 main.h 中的testDataCount
int testData[testDataCount] = {97, 23, 78, 65, 84, 37, 29, 53, 28, 77, 30, 46, 9, 100, 65, 53, 37, 59, 65, 70};

int main()
{
	cout << "\n欢迎使用数据结构排序演示\n余乐韬 软件嵌入1701 4171159035" << endl;
	printTestData();
	//展示目录并切换到对应功能
	switchFun();
	return 0;
}
