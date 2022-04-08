#include "include/arinc653/Event.h"
#include "ezxml/ezxml.h"

namespace arinc653
{
Event::Event()
{
}

Event::~Event()
{
}

bool Event::load(ezxml_t)
{
	return false;
}

const std::string& Event::name()const
{
	return this->m_name;
}
}//namespace arinc653
