#include "Stack.h"

void CheckCapacity(Stack * ps)
{
	int newCatacity = ps->capacity*3;

	if(ps->size>=ps->capacity)
	{
		DataType * newarray = (DataType*)malloc(sizeof(DataType)*newCatacity);
		if(newarray)
		{
			//����Ԫ��
			memcpy(newarray,ps->array,sizeof(DataType)*newCatacity);

			free(ps->array);
			ps->array = newarray;
		}
	}
	
}
//ջ�ĳ�ʼ��
void StackInit(Stack * ps)
{
	assert(ps);
	ps->array = (DataType*)malloc(sizeof(DataType)*10);
	ps->capacity = 10;
	ps->size = 0;
}
//��ջ
void StackPush( Stack * ps,DataType data)
{
	assert(ps);
	CheckCapacity(ps);
	
	//����Ԫ��
	ps->array[ps->size] = data;
	ps->size++;
}
//��ջ
void StackPop( Stack * ps)
{
	if(StackEmpty(ps))
	{
		return;
	}
	ps->size--;
}
//��ȡջ��Ԫ��
DataType StackTop (Stack * ps,DataType data)
{
	assert(ps);
	return ps->array[ps->size - 1];

}
//���ջ�Ƿ�Ϊ��
int StackEmpty( Stack * ps)
{
	if(ps->size>0)
		return 1;
	else return -1;
}
//��ȡջ����ЧԪ�ظ���
int StackPush( Stack * ps)
{
	assert(ps);
	return ps->size;
}
//ջ������
void StackdDestory( Stack * ps)
{
		assert(ps);
		free(ps->array);
		ps->capacity = 0;
		ps->size = 0;
		ps->array = NULL;

}

