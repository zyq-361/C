/* Ԥ����꣬��ֹͷ�ļ��ظ�����*/
#ifndef LIST_H
#define LIST_H

#include "Node.h"

/***
 *  class List : ������
 */
class List
{
public:
    /* ���캯��-�������ĳ�ʼ������ */
	List();
    /* ��������-���������ͷŹ���(�ڵ��ͷ�) */
	~List();

    /* �����в������� */
	void push(Record r);
    /* �����±��Ƴ���������Ӧ���ݽڵ㣬�±곬����Χ����false�����򷵻�true */
	bool remove(int i);
    /* ����С�귵����������Ӧ�ڵ����� */
	Record at(int i);
    /* ���������� */
	int length();

private:
    /* ����-ͷ���ָ�� */
	Node * m_pHead;
    /* ����-β�ڵ�ָ�� */
    Node * m_pTail;
    /* ����-�������� */
    int m_iLen;
};

#endif
