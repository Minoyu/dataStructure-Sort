#include <iostream>

//默认测试数据个数
#define testDataCount 20

using namespace std;
//全局变量
extern int testData[testDataCount];
extern int sortCount;

//排序的具体实现
void insertSort(int testData[]);//直接插入排序
void binInsertSort(int testData[]);//折半插入排序
void bubbleSort(int testData[]);//冒泡排序法的具体实现
void selectSort(int testData[]);//简单选择排序法的具体实现
void quickSort(int testData[]);//快速排序法的具体实现
void heapSort(int testData[]);//堆排序的具体实现
void mergeSort(int testData[]);//二路归并排序的具体实现

//工具函数
void printTestData(); //输出当前测试数据
void inputTestData(); //输入测试数据 
void printMenu(); //输出菜单
void switchFun();//切换功能 
void printCurrentResult(int data[],int n); //输出当前次的结果
void moveBack(int data[], int m, int n);//数组从m到n向后平移一格


