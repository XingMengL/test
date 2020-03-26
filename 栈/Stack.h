#pragma once 
#include <stdio.h>
#include <windows.h>
#include <assert.h>
#include <stdlib.h>

typedef int DataType;

typedef struct Stack
{
	DataType *array;
	int capacity;//栈的容量
	int size;//栈的有效个数
}Stack;
//栈的初始化
void StackInit(Stack * ps);
//入栈
void StackPush( Stack * ps,DataType data);
//出栈
void StackPop( Stack * ps);
//获取栈顶元素
DataType StackTop (Stack * ps,DataType data);
//检测栈是否为空
int StackEmpty( Stack * ps);
//获取栈的有效元素个数
int StackPush( Stack * ps);
//栈的销毁
void StackdDestory( Stack * ps);
