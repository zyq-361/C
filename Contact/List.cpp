    #include "List.h"
    /* ���캯��-�������ĳ�ʼ������ */
	List::List()
	{
        m_pHead=new Node;
        m_pHead->setNext(NULL);
        m_pTail=m_pHead;
        m_iLen=0;
	}
    /* ��������-���������ͷŹ���(�ڵ��ͷ�) */
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

    /* �����в������� */
	void List::push(Record r)
	{
        Node*p= new Node;
        p->setRecord(r);
        p->setNext(NULL);
        m_pTail->setNext(p);
        m_pTail=p;
        m_iLen++;
	}
    /* �����±��Ƴ���������Ӧ���ݽڵ㣬�±곬����Χ����false�����򷵻�true */
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
    /* ����С�귵����������Ӧ�ڵ����� */
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
    /* ���������� */
	int List::length()
	{
        return m_iLen;
	}

    /* ����-ͷ���ָ�� */
	Node * m_pHead;
    /* ����-β�ڵ�ָ�� */
    Node * m_pTail;
    /* ����-�������� */
    int m_iLen;
