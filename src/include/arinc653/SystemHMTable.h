#ifndef ARINC653_SYSTEM_HM_TABLE_H_
#define ARINC653_SYSTEM_HM_TABLE_H_

#include <ezxml/ezxml.h>

namespace arinc653
{
class SystemHMTable
{
public:
	SystemHMTable();
	~SystemHMTable();

	bool load(ezxml_t);
};
}//namespace arinc653

#endif //ARINC653_SYSTEM_HM_TABLE_H_