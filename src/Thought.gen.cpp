/************************************************************************************************
** File created by QxEntityEditor 1.1.9 (2016/07/23 21:31) : please, do NOT modify this file ! **
************************************************************************************************/

#include "../include/BigMindCli_precompiled_header.gen.h"

#include "../include/Thought.gen.h"

#include <QxMemLeak.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_BIGMINDCLI(Thought, Thought)

namespace qx {

template <>
void register_class(QxClass<Thought> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Thought");

   pData = t.id(& Thought::m_Thought_id, "Thought_id", 0);

   pData = t.data(& Thought::m_content, "content", 0, true, true);

   qx::QxValidatorX<Thought> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Thought::Thought() : m_Thought_id(0) { ; }

Thought::Thought(const long & id) : m_Thought_id(id) { ; }

Thought::~Thought() { ; }

long Thought::getThought_id() const { return m_Thought_id; }

QString Thought::getcontent() const { return m_content; }

void Thought::setThought_id(const long & val) { m_Thought_id = val; }

void Thought::setcontent(const QString & val) { m_content = val; }

