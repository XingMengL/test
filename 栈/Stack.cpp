#include "Stack.h"

void CheckCapacity(Stack * ps)
{
	int newCatacity = ps->capacity*3;

	if(ps->size>=ps->capacity)
	{
		DataType * newarray = (DataType*)malloc(sizeof(DataType)*newCatacity);
		if(newarray)
		{
			//拷贝元素
			memcpy(newarray,ps->array,sizeof(DataType)*newCatacity);

			free(ps->array);
			ps->array = newarray;
		}
	}
	
}
//栈的初始化
void StackInit(Stack * ps)
{
	assert(ps);
	ps->array = (DataType*)malloc(sizeof(DataType)*10);
	ps->capacity = 10;
	ps->size = 0;
}
//入栈
void StackPush( Stack * ps,DataType data)
{
	assert(ps);
	CheckCapacity(ps);
	
	//插入元素
	ps->array[ps->size] = data;
	ps->size++;
}
//出栈
void StackPop( Stack * ps)
{
	if(StackEmpty(ps))
	{
		return;
	}
	ps->size--;
}
//获取栈顶元素
DataType StackTop (Stack * ps,DataType data)
{
	assert(ps);
	return ps->array[ps->size - 1];

}
//检测栈是否为空
int StackEmpty( Stack * ps)
{
	if(ps->size>0)
		return 1;
	else return -1;
}
//获取栈的有效元素个数
int StackPush( Stack * ps)
{
	assert(ps);
	return ps->size;
}
//栈的销毁
void StackdDestory( Stack * ps)
{
		assert(ps);
		free(ps->array);
		ps->capacity = 0;
		ps->size = 0;
		ps->array = NULL;

}

