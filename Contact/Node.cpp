    #include "Node.h"

    /* ���캯�� */
	Node::Node()
	{
        m_Next=NULL;
	}
    /* ��������ڵ�-���ݳ�Ա */
	void Node::setRecord(Record aR)
	{
	    m_RecData=aR;
	}
    /* ��������ڵ�-nextָ�� */
	void Node::setNext(Node *aN)
	{
	    m_Next=aN;
	}

    /* ��ȡ����ڵ�-���ݳ�Ա */
	Record Node::getRecord()
	{
	    return m_RecData;
	}
    /* ��ȡ����ڵ�-nextָ�� */
	Node * Node::getNext()
	{
	    return m_Next;
	}
