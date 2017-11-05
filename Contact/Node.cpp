    #include "Node.h"

    /* 构造函数 */
	Node::Node()
	{
        m_Next=NULL;
	}
    /* 设置链表节点-数据成员 */
	void Node::setRecord(Record aR)
	{
	    m_RecData=aR;
	}
    /* 设置链表节点-next指针 */
	void Node::setNext(Node *aN)
	{
	    m_Next=aN;
	}

    /* 获取链表节点-数据成员 */
	Record Node::getRecord()
	{
	    return m_RecData;
	}
    /* 获取链表节点-next指针 */
	Node * Node::getNext()
	{
	    return m_Next;
	}
