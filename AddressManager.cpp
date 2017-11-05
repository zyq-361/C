    #include "AddressManager.h"
    List AddressManager::m_Reclist;
    /* 静态方法：运行通讯录管理器
     * 本程序负责运行整个通讯录的业务逻辑主循环，调
     * 用本方法后通讯录开始运行。
     */
	 void AddressManager::start()
	{
//	    List L;
//	    m_Reclist=L;
        while(1)
        {
             cout <<"===== 通讯录 =====" << endl
             << "1 [添加记录]" << endl
             << "2 [删除记录]" << endl
             << "3 [浏览记录]" << endl
             << "4 [查找记录]" << endl
             << "5 [退出系统]" << endl
             <<"==================" << endl
             << "[请选择您要执行的操作]：" ;

            int i;
            string name,phone,address;
            cin >> i;
            switch(i)
            {
                case 1:
                {
                    cout << "[请输入新联系人的姓名]:";
                    cin >> name;
                    cout << endl << "[请输入新联系人的电话]:";
                    cin >> phone;
                    cout << endl << "[请输入新联系人的地址]:";
                    cin >> address;
                    cout << endl;
                    Record r(name,phone,address);
                    m_Reclist.push(r);
                    cout << "联系人创建成功！" << endl;
                    system("pause");
                    system("cls");
                    break;
                }
                case 2:
                {   string name;
                    int j;
                    cout << "[请输入要删除联系人的姓名]:";
                    cin >> name;
                    for(j=1;j<=m_Reclist.length();j++)
                    {
                        if(name.compare(m_Reclist.at(j).getName())==0)
                        {
                            cout << "[联系人" << m_Reclist.at(j).getName()
                                 << "已删除！]" << endl;
                            if(!m_Reclist.remove(j))
                            {
                                 cout << "[删除的姓名不存在!]" << endl;
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
                    cout << "姓名\t" << "电话\t" << "地址" << endl;
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
                    cout << "[请输入要查找的联系人的姓名]:";
                    cin >> name;
                    cout << endl;
                    for(j=1;j<=m_Reclist.length();j++)
                    {
                        if(name.compare(m_Reclist.at(j).getName())==0)
                        {
                            cout << "[姓名]：" << m_Reclist.at(j).getName() << endl;
                            cout << "[电话]：" << m_Reclist.at(j).getPhone() << endl;
                            cout << "[地址]：" << m_Reclist.at(j).getAddress() << endl;
                            break;
                        }
                    }
                    if(j>m_Reclist.length())
                    {
                        cout << "[联系人" << name << "不存在!]" << endl;
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
                cout << "输入非法，请重新输入" << endl;
                system("pause");
                system("cls");
                break;
            }

        }

	}
