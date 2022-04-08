#include "include/arinc653/SamplingPort.h"
#include "ezxml/ezxml.h"

namespace arinc653 {
SamplingPort::SamplingPort()
{
}


SamplingPort::~SamplingPort()
{
}

bool SamplingPort::load(ezxml_t)
{
	return false;
}

const std::string& SamplingPort::name()const
{
	return this->m_name;
}

unsigned SamplingPort::maxMessageSize()const
{
	return this->m_maxMessageSize;
}

PORT_DIRECTION_TYPE SamplingPort::direction()const
{
	return this->m_direction;
}

float SamplingPort::refreshRate()const
{
	return this->m_refreshRate;
}

}//namespace arinc653


