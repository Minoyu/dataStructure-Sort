#include "main.h"
#include <ctime>

//�����������
void printTestData()
{
	cout << "\n\n��ǰ��������:" << endl;
	for (int i = 0; i < testDataCount; i++)
	{
		cout << testData[i] << " ";
	}
};

//�����������
void inputTestData()
{
	cout << "������" << testDataCount << "���������ڲ��ԣ�ÿ�������Իس�������" << endl;
	for (int i = 0; i < testDataCount; i++)
	{
		cin >> testData[i];
	}
	printTestData();
}

//����˵�
void printMenu()
{
	cout << "\n\n****�˵�\n1.��ӡ��ǰ��������\n2.�޸Ĳ�������\n3.ֱ�Ӳ�������\n4.�۰��������\n5.ð������\n6.��ѡ������\n7.��������\n8.������\n9.�鲢����\n0.�˳�" << endl;
};

//�л�����
void switchFun()
{
	clock_t start, end;
	for (;;)
	{
		printMenu();
		int funId;
		cout << "\n�����빦�����:";
		cin >> funId;
		system("cls");

		start = clock(); //����ʼ��ʱ
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

		end = clock(); //����ʼ��ʱ
		if (funId > 2)
		{
			double endtime = (double)(end - start) / CLOCKS_PER_SEC;
			cout << "\n����ʹ��ʱ��:" << endtime * 1000 << "ms" << endl; //sΪ��λ
		}

		cout << "\n\n�Ƿ����˵���(y/n):";
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

//��ӡ��ǰ�εĽ�� nΪ���� n=-1Ϊ���ս��
void printCurrentResult(int data[], int n)
{
	if (n >= 0)
	{
		cout << "��" << n << "������Ľ��Ϊ��";
	}
	else
	{
		cout << "���յ�����Ľ��Ϊ��";
	}

	for (int i = 0; i < testDataCount; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}

//�ӵ�m��Ԫ�ؿ�ʼ��n��Ԫ�ؽ�����������ƶ�1��
void moveBack(int data[], int m, int n)
{
	for (int i = n; i > m; i--)
	{
		data[i] = data[i - 1];
	}
}