    #include "AddressManager.h"
    List AddressManager::m_Reclist;
    /* ��̬����������ͨѶ¼������
     * ����������������ͨѶ¼��ҵ���߼���ѭ������
     * �ñ�������ͨѶ¼��ʼ���С�
     */
	 void AddressManager::start()
	{
//	    List L;
//	    m_Reclist=L;
        while(1)
        {
             cout <<"===== ͨѶ¼ =====" << endl
             << "1 [��Ӽ�¼]" << endl
             << "2 [ɾ����¼]" << endl
             << "3 [�����¼]" << endl
             << "4 [���Ҽ�¼]" << endl
             << "5 [�˳�ϵͳ]" << endl
             <<"==================" << endl
             << "[��ѡ����Ҫִ�еĲ���]��" ;

            int i;
            string name,phone,address;
            cin >> i;
            switch(i)
            {
                case 1:
                {
                    cout << "[����������ϵ�˵�����]:";
                    cin >> name;
                    cout << endl << "[����������ϵ�˵ĵ绰]:";
                    cin >> phone;
                    cout << endl << "[����������ϵ�˵ĵ�ַ]:";
                    cin >> address;
                    cout << endl;
                    Record r(name,phone,address);
                    m_Reclist.push(r);
                    cout << "��ϵ�˴����ɹ���" << endl;
                    system("pause");
                    system("cls");
                    break;
                }
                case 2:
                {   string name;
                    int j;
                    cout << "[������Ҫɾ����ϵ�˵�����]:";
                    cin >> name;
                    for(j=1;j<=m_Reclist.length();j++)
                    {
                        if(name.compare(m_Reclist.at(j).getName())==0)
                        {
                            cout << "[��ϵ��" << m_Reclist.at(j).getName()
                                 << "��ɾ����]" << endl;
                            if(!m_Reclist.remove(j))
                            {
                                 cout << "[ɾ��������������!]" << endl;
                                 break;
                            }
                            break;
                        }
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 3:
                {
                    cout << "����\t" << "�绰\t" << "��ַ" << endl;
                    int i;
                    for(i=1;i<=m_Reclist.length();i++)
                    {
                        cout << m_Reclist.at(i).getName()   << "\t"
                             << m_Reclist.at(i).getPhone()  << "\t"
                             << m_Reclist.at(i).getAddress()<< endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }
                case 4:
                {
                    string name;
                    int j;
                    cout << "[������Ҫ���ҵ���ϵ�˵�����]:";
                    cin >> name;
                    cout << endl;
                    for(j=1;j<=m_Reclist.length();j++)
                    {
                        if(name.compare(m_Reclist.at(j).getName())==0)
                        {
                            cout << "[����]��" << m_Reclist.at(j).getName() << endl;
                            cout << "[�绰]��" << m_Reclist.at(j).getPhone() << endl;
                            cout << "[��ַ]��" << m_Reclist.at(j).getAddress() << endl;
                            break;
                        }
                    }
                    if(j>m_Reclist.length())
                    {
                        cout << "[��ϵ��" << name << "������!]" << endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 5:
                {
                    exit(1);
                }
                default:
                cout << "����Ƿ�������������" << endl;
                system("pause");
                system("cls");
                break;
            }

        }

	}
