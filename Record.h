/* Ԥ����꣬��ֹͷ�ļ��ظ�����*/
#ifndef RECORD_H
#define RECORD_H
#include<iostream>
#include <string>
#include<cstdlib>
#include<cstring>
using namespace std;

/***
 *  class Record : ��¼��
 */
class Record
{
public:
    /* ���캯�� */
	Record(string aName="", string aPhone="", string aAddress="");

    /* ���ü�¼-�������� */
	void setName(string aName);
    /* ���ü�¼-�绰�������� */
	void setPhone(string aPhone);
    /* ���ü�¼-��ͥ��ַ���� */
	void setAddress(string aAddress);

    /* ��ȡ��¼-�������� */
	string getName();
    /* ��ȡ��¼-�绰�������� */
	string getPhone();
    /* ��ȡ��¼-��ͥ��ַ���� */
	string getAddress();

private:
    /* ��¼-�������� */
	string m_strName;
    /* ��¼-�绰�������� */
	string m_strPhone;
    /* ��¼-��ͥ��ַ���� */
	string m_strAddress;
};

#endif
