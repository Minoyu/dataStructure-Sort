#include "main.h"
//��·�鲢����ľ���ʵ��

void merge(int *tempData, int low, int mid, int high)
{
    int i = low, j, k, temp;
    for (j = mid + 1; i < j && j <= high;)
    {                                   /*����������������ǰ��Σ�����Ҫ��i<j,
     ��Ȼi�ķ�Χ�޷����ƣ����������������ؼ�����Ӱ��*/
        if (tempData[i] <= tempData[j]) //�ҵ�tempData[j]Ҫ�����λ��
            ++i;
        else
        {
            temp = tempData[j]; //�Ȱ�tempData[j]����������ΪtempData[j-1]Ҫ����tempData[j]
            for (k = j - 1; k >= i; --k)
            { //��i��j-1�������
                tempData[k + 1] = tempData[k];
            }
            tempData[i] = temp; //��tempData[j]����
            ++i;                //i����
            ++j;                //j����
        }
    }
}
void sortAction(int *tempData, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        sortAction(tempData, low, mid); //�ݹ����
        sortAction(tempData, mid + 1, high);
        merge(tempData, low, mid, high);
        printCurrentResult(tempData, sortCount++);
    }
}

void mergeSort(int testData[])
{
    sortCount = 0;
    int tempData[testDataCount];
    for (int i = 0; i < testDataCount; i++)
    {
        tempData[i] = testData[i];
    }
    sortAction(tempData, 0, testDataCount - 1);
    printCurrentResult(tempData, -1);
}
