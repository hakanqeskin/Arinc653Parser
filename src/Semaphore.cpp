#include "include/arinc653\Semaphore.h"
#include "ezxml/ezxml.h"

namespace arinc653
{
Semaphore::Semaphore()
{
}

Semaphore::~Semaphore()
{
}

bool Semaphore::load(ezxml_t)
{
	return false;
}

const std::string& Semaphore::name()const
{
	return this->m_name;
}

int Semaphore::maxValue()const
{
	return this->m_max;
}

QUEUING_DISCIPLINE_TYPE Semaphore::type()const
{
	return this->m_type;
}
}//namespace arinc653

