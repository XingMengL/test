#pragma once 
#include <stdio.h>
#include <windows.h>
#include <assert.h>
#include <stdlib.h>

typedef int DataType;

typedef struct Stack
{
	DataType *array;
	int capacity;//ջ������
	int size;//ջ����Ч����
}Stack;
//ջ�ĳ�ʼ��
void StackInit(Stack * ps);
//��ջ
void StackPush( Stack * ps,DataType data);
//��ջ
void StackPop( Stack * ps);
//��ȡջ��Ԫ��
DataType StackTop (Stack * ps,DataType data);
//���ջ�Ƿ�Ϊ��
int StackEmpty( Stack * ps);
//��ȡջ����ЧԪ�ظ���
int StackPush( Stack * ps);
//ջ������
void StackdDestory( Stack * ps);
