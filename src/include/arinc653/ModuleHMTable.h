#ifndef ARINC653_MODULE_HM_TABLE_H_
#define ARINC653_MODULE_HM_TABLE_H_

#include <ezxml/ezxml.h>

namespace arinc653
{
class ModuleHMTable
{
public:
	ModuleHMTable();
	~ModuleHMTable();

	bool load(ezxml_t);
};
}//namespace arinc653

#endif //ARINC653_MODULE_HM_TABLE_H_