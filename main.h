#include <iostream>

//Ĭ�ϲ������ݸ���
#define testDataCount 20

using namespace std;
//ȫ�ֱ���
extern int testData[testDataCount];
extern int sortCount;

//����ľ���ʵ��
void insertSort(int testData[]);//ֱ�Ӳ�������
void binInsertSort(int testData[]);//�۰��������
void bubbleSort(int testData[]);//ð�����򷨵ľ���ʵ��
void selectSort(int testData[]);//��ѡ�����򷨵ľ���ʵ��
void quickSort(int testData[]);//�������򷨵ľ���ʵ��
void heapSort(int testData[]);//������ľ���ʵ��
void mergeSort(int testData[]);//��·�鲢����ľ���ʵ��

//���ߺ���
void printTestData(); //�����ǰ��������
void inputTestData(); //����������� 
void printMenu(); //����˵�
void switchFun();//�л����� 
void printCurrentResult(int data[],int n); //�����ǰ�εĽ��
void moveBack(int data[], int m, int n);//�����m��n���ƽ��һ��


