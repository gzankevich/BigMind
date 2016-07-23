/************************************************************************************************
** File created by QxEntityEditor 1.1.9 (2016/07/23 21:31) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _BIGMINDCLI_THOUGHT_H_
#define _BIGMINDCLI_THOUGHT_H_

class BIGMINDCLI_EXPORT Thought
{

   QX_REGISTER_FRIEND_CLASS(Thought)

protected:

   long m_Thought_id;
   QString m_content;

public:

   Thought();
   Thought(const long & id);
   virtual ~Thought();

   long getThought_id() const;
   QString getcontent() const;

   void setThought_id(const long & val);
   void setcontent(const QString & val);

public:

   static QString column_Thought_id() { return "Thought_id"; }
   static QString column_content() { return "content"; }

public:

   static QString table_name() { return "t_Thought"; }

};

typedef qx_shared_ptr<Thought> Thought_ptr;
typedef qx::QxCollection<long, Thought_ptr> list_of_Thought;
typedef qx_shared_ptr<list_of_Thought> list_of_Thought_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_BIGMINDCLI(Thought, qx::trait::no_base_class_defined, 0, Thought)

#include "../custom/include/Thought.h"

#endif // _BIGMINDCLI_THOUGHT_H_
