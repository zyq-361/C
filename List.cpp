    #include "List.h"
    /* 构造函数-完成链表的初始化工作 */
	List::List()
	{
        m_pHead=new Node;
        m_pHead->setNext(NULL);
        m_pTail=m_pHead;
        m_iLen=0;
	}
    /* 析构函数-完成链表的释放工作(节点释放) */
	List::~List()
	{
	    Node * p=NULL;
        while(m_pHead)
        {
            p=m_pHead->getNext();
            delete m_pHead;
            m_pHead=p;
        }
	}

    /* 链表中插入数据 */
	void List::push(Record r)
	{
        Node*p= new Node;
        p->setRecord(r);
        p->setNext(NULL);
        m_pTail->setNext(p);
        m_pTail=p;
        m_iLen++;
	}
    /* 根据下标移除链表中相应数据节点，下标超出范围返回false，否则返回true */
	bool List::remove(int i)
	{
	    Node *p=m_pHead;
	    Node *q=NULL;
	    Node *h=m_pHead->getNext();
	    int j=0;
        if(i>m_iLen||i<0)
            return false;
        else
        {
            while(p->getNext()&&j<i-1)
            {
                p=p->getNext();
                ++j;
            }
            q=p->getNext();
            p->setNext(q->getNext());
            delete q;
            m_iLen--;
            while(h->getNext())
            {
                h=h->getNext();
            }
            m_pTail=h;
            return true;
        }

	}
    /* 根据小标返回链表中相应节点数据 */
	Record List::at(int i)
	{
        int j=0;
        Node *p=m_pHead;
        while(p->getNext()&&j<i-1)
        {
            p=p->getNext();
            ++j;
        }
        p=p->getNext();
        return p->getRecord();
	}
    /* 返回链表长度 */
	int List::length()
	{
        return m_iLen;
	}

    /* 链表-头结点指针 */
	Node * m_pHead;
    /* 链表-尾节点指针 */
    Node * m_pTail;
    /* 链表-长度属性 */
    int m_iLen;
