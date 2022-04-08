#include "include/arinc653/BlackBoard.h"
#include "ezxml/ezxml.h"

namespace arinc653
{
BlackBoard::BlackBoard()
{
}

BlackBoard::~BlackBoard()
{
}

bool BlackBoard::load(ezxml_t) {
	return false;
}

const std::string& BlackBoard::name()const
{
	return this->m_name;
}

unsigned BlackBoard::maxMessageSize()const
{
	return this->m_maxMessageSize;
}
}//namespace arinc653
