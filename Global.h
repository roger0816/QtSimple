#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>
#include <QDebug>
//外部要呼叫統一使用define的，design patten : singleton
#define GLOBAL Global::Instance

class Global : public QObject
{
public:

    static Global& Instance()
    {
        if(m_pInstance==0)
            m_pInstance=new Global();
        return *m_pInstance;
    }

private:
    Global();
    static Global* m_pInstance;
};

#endif // GLOBAL_H
