#include "include/arinc653/Channel.h"
#include "ezxml/ezxml.h"

namespace arinc653
{
Channel::Channel()
{
}


Channel::~Channel()
{
}

bool Channel::load(ezxml_t) {
	return false;
}

unsigned Channel::identifier()const
{
	return this->m_id;
}

const std::string& Channel::name()const
{
	return this->m_name;
}

}//namespace arinc653
