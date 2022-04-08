#ifndef ARINC653_CONNECTIONTABLE_H_
#define ARINC653_CONNECTIONTABLE_H_

#include <ezxml/ezxml.h>

namespace arinc653
{
class ConnectionTable
{
public:
	ConnectionTable();
	~ConnectionTable();

	bool load(ezxml_t);
};
}//namespace arinc653


#endif //ARINC653_CONNECTIONTABLE_H_
