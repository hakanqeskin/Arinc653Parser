#include "include/arinc653/Process.h"
#include "ezxml/ezxml.h"

namespace arinc653
{
Process::Process()
{
}

Process::~Process()
{
}

bool Process::load(ezxml_t)
{
	return false;
}

const std::string& Process::name()const
{
	return this->m_name;
}

unsigned Process::stackSize()const
{
	return this->m_stackSize;
}

int Process::basePriority()const
{
	return this->m_basePriority;
}

float Process::period()const
{
	return this->m_period;
}

float Process::timeCapacity()const
{
	return this->m_timeCapacity;
}

DEADLINE_TYPE Process::deadLine()const
{
	return this->m_deadLine;
}

}//namespace arinc653


