/* Ԥ����꣬��ֹͷ�ļ��ظ�����*/
#ifndef ADDRESSMANAGER_H
#define ADDRESSMANAGER_H

#include "List.h"

/***
 *  class AddressManager : ͨѶ¼��������
 */
class AddressManager
{
public:
    /* ��̬����������ͨѶ¼������
     * ����������������ͨѶ¼��ҵ���߼���ѭ������
     * �ñ�������ͨѶ¼��ʼ���С�
     */
	static void start();

private:
    /* ��̬�Ӷ��󣺱����¼�������Ա
     * ��ʾ����̬������Ҫ�����ⶨ�壬��������Ҫ��
     * AddressManager.cppԴ�ļ��н��ж��壬����
     * ������ȫ���� List AddressManager::m_Reclist;
     */
	static List m_Reclist;
};

#endif
