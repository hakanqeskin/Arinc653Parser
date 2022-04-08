#include "include/arinc653/Partition.h"
#include "ezxml/ezxml.h"

namespace arinc653 {
Partition::Partition()
{
}

Partition::~Partition()
{
}

bool Partition::load(ezxml_t)
{
	return false;
}

PARTITION_ID_TYPE Partition::identifier()const
{
	return this->m_id;
}

const std::string& Partition::name()const
{
	return this->m_name;
}

Partition::CRITICALITY Partition::criticality()const
{
	return this->m_criticality;
}

bool Partition::isSystemPartition()const
{
	return this->m_systemPartition;
}

}//namespace arinc653


