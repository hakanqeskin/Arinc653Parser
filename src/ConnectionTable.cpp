#include "include/arinc653/ConnectionTable.h"
#include "ezxml/ezxml.h"

namespace arinc653 {
ConnectionTable::ConnectionTable()
{
}


ConnectionTable::~ConnectionTable()
{
}

bool ConnectionTable::load(ezxml_t)
{
	return false;
}
}//namespace arinc653


