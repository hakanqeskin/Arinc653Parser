#include "include/arinc653/PartitionHMTable.h"
#include "ezxml/ezxml.h"

namespace arinc653
{
PartitionHMTable::PartitionHMTable()
{
}


PartitionHMTable::~PartitionHMTable()
{
}

bool PartitionHMTable::load(ezxml_t)
{
	return false;
}

unsigned PartitionHMTable::identifier()const
{
	return this->m_id;
}

}//namespace arinc653
