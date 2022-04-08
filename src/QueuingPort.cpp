#include "include\arinc653/QueuingPort.h"

namespace arinc653 {
QueuingPort::QueuingPort()
{
}


QueuingPort::~QueuingPort()
{
}

bool QueuingPort::load(ezxml_t)
{
	return false;
}

const std::string& QueuingPort::name()const
{
	return this->m_name;
}

unsigned QueuingPort::maxMessageSize()const
{
	return this->m_maxMessageSize;
}

PORT_DIRECTION_TYPE QueuingPort::direction()const
{
	return this->m_direction;
}

unsigned QueuingPort::maxNumberOfMessage()const
{
	return this->m_maxNumberOfMessage;
}

}//namespace arinc653


