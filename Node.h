/* Ԥ����꣬��ֹͷ�ļ��ظ�����*/
#ifndef NODE_H
#define NODE_H

#include "Record.h"

/***
 *  class Node : ����ڵ���
 */
class Node
{
public:
    /* ���캯�� */
	Node();

    /* ��������ڵ�-���ݳ�Ա */
	void setRecord(Record aR);
    /* ��������ڵ�-nextָ�� */
	void setNext(Node *aN);

    /* ��ȡ����ڵ�-���ݳ�Ա */
	Record getRecord();
    /* ��ȡ����ڵ�-nextָ�� */
	Node * getNext();

private:
    /* ����ڵ�-���ݳ�Ա */
	Record m_RecData;
    /* ����ڵ�-nextָ�� */
	Node * m_Next;
};

#endif
