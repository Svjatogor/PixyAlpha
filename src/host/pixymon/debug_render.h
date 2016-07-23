#ifndef DEBUG_RENDER_H
#define DEBUG_RENDER_H
// Singleton.h
#include <QPlainTextEdit>
class DebugRender
{
  private:


    // Конструкторы и оператор присваивания недоступны клиентам
    DebugRender(){}
    DebugRender( QPlainTextEdit* text ) {
        m_text = text;
    }
    DebugRender( const DebugRender& ){}
    DebugRender& operator=( DebugRender& ){}
  public:
    static DebugRender * getInstance( QPlainTextEdit* text ) {
        if(!p_instance)
            p_instance = new DebugRender( text );
        return p_instance;
    }
    QPlainTextEdit* m_text;
    static DebugRender * p_instance;
};


#endif // DEBUG_RENDER_H
