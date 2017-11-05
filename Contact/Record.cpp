    #include "Record.h"

    // /* 构造函数 */
    Record::Record(string aName, string aPhone, string aAddress)
        :m_strName(aName),m_strPhone(aPhone),m_strAddress(aAddress)
    {

    }

    /* 设置记录-姓名属性 */
	void Record::setName(string aName)
	{
	   aName=m_strName;
	}
    /* 设置记录-电话号码属性 */
	void Record::setPhone(string aPhone)
	{
	    aPhone=m_strPhone;
	}
    /* 设置记录-家庭地址属性 */
	void Record::setAddress(string aAddress)
	{
	    aAddress=m_strAddress;
	}

    /* 获取记录-姓名属性 */
	string Record::getName()
	{
	    return m_strName;
	}
    /* 获取记录-电话号码属性 */
	string Record::getPhone()
	{
	    return m_strPhone;
	}
    /* 获取记录-家庭地址属性 */
	string Record::getAddress()
	{
	    return m_strAddress;
	}
