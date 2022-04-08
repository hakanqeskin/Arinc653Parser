#include "include\arinc653\Buffer.h"

namespace arinc653
{
Buffer::Buffer()
{
}

Buffer::~Buffer()
{
}

bool Buffer::load(ezxml_t) {
	return false;
}

const std::string& Buffer::name()const
{
	return this->m_name;
}

MESSAGE_RANGE_TYPE Buffer::maxMessageSize()const
{
	return this->m_maxMessageSize;
}

MESSAGE_RANGE_TYPE Buffer::maxNumberOfMessage()const
{
	return this->m_maxNumberOfMessage;
}

QUEUING_DISCIPLINE_TYPE Buffer::type()const
{
	return this->m_type;
}
}//namespace arinc653

