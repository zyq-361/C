    #include "Record.h"

    // /* ���캯�� */
    Record::Record(string aName, string aPhone, string aAddress)
        :m_strName(aName),m_strPhone(aPhone),m_strAddress(aAddress)
    {

    }

    /* ���ü�¼-�������� */
	void Record::setName(string aName)
	{
	   aName=m_strName;
	}
    /* ���ü�¼-�绰�������� */
	void Record::setPhone(string aPhone)
	{
	    aPhone=m_strPhone;
	}
    /* ���ü�¼-��ͥ��ַ���� */
	void Record::setAddress(string aAddress)
	{
	    aAddress=m_strAddress;
	}

    /* ��ȡ��¼-�������� */
	string Record::getName()
	{
	    return m_strName;
	}
    /* ��ȡ��¼-�绰�������� */
	string Record::getPhone()
	{
	    return m_strPhone;
	}
    /* ��ȡ��¼-��ͥ��ַ���� */
	string Record::getAddress()
	{
	    return m_strAddress;
	}
