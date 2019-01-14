#include "main.h"
#include <ctime>

//输出测试数据
void printTestData()
{
	cout << "\n\n当前测试数据:" << endl;
	for (int i = 0; i < testDataCount; i++)
	{
		cout << testData[i] << " ";
	}
};

//输入测试数据
void inputTestData()
{
	cout << "请输入" << testDataCount << "个数字用于测试，每个数字以回车结束。" << endl;
	for (int i = 0; i < testDataCount; i++)
	{
		cin >> testData[i];
	}
	printTestData();
}

//输出菜单
void printMenu()
{
	cout << "\n\n****菜单\n1.打印当前测试数据\n2.修改测试数据\n3.直接插入排序\n4.折半插入排序\n5.冒泡排序\n6.简单选择排序\n7.快速排序\n8.堆排序\n9.归并排序\n0.退出" << endl;
};

//切换功能
void switchFun()
{
	clock_t start, end;
	for (;;)
	{
		printMenu();
		int funId;
		cout << "\n请输入功能序号:";
		cin >> funId;
		system("cls");

		start = clock(); //程序开始计时
		switch (funId)
		{
		case 1:
			printTestData();
			break;
		case 2:
			inputTestData();
			break;
		case 3:
			insertSort(testData);
			break;
		case 4:
			binInsertSort(testData);
			break;
		case 5:
			bubbleSort(testData);
			break;
		case 6:
			selectSort(testData);
			break;
		case 7:
			quickSort(testData);
			break;
		case 8:
			heapSort(testData);
			break;
		case 9:
			mergeSort(testData);
			break;
		case 0:
			cout << "GoodBye~";
			return;
		default:
			printMenu();
			switchFun();
			break;
		}

		end = clock(); //程序开始计时
		if (funId > 2)
		{
			double endtime = (double)(end - start) / CLOCKS_PER_SEC;
			cout << "\n排序使用时间:" << endtime * 1000 << "ms" << endl; //s为单位
		}

		cout << "\n\n是否进入菜单？(y/n):";
		char isContinue;
		cin >> isContinue;
		switch (isContinue)
		{
		case 'n':
		case 'N':
			cout << "\nGoodBye~";
			return;
		default:
			system("cls");
			break;
		}
	}
}

//打印当前次的结果 n为次数 n=-1为最终结果
void printCurrentResult(int data[], int n)
{
	if (n >= 0)
	{
		cout << "第" << n << "轮排序的结果为：";
	}
	else
	{
		cout << "最终的排序的结果为：";
	}

	for (int i = 0; i < testDataCount; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}

//从第m个元素开始到n个元素结束整体向后移动1格
void moveBack(int data[], int m, int n)
{
	for (int i = n; i > m; i--)
	{
		data[i] = data[i - 1];
	}
}