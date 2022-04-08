#ifndef ARINC653_MODULE_H_
#define ARINC653_MODULE_H_

#include "ConnectionTable.h"
#include "ModuleSchedule.h"
#include "SystemHMTable.h"
#include "ModuleHMTable.h"
#include "PartitionHMTable.h"
#include "PartitionMemory.h"
#include "Partition.h"

#include <string>

#include <list>

namespace arinc653
{
class Module
{
public:
	Module();
	~Module();

	bool load(const char* xml_file);

	const std::string& name()const;
	const std::string& version()const;

private:
	std::string m_name;
	std::string m_version;

	ConnectionTable m_connectionTable;
	ModuleSchedule m_moduleSchedule;
	SystemHMTable m_systemHMTable;
	ModuleHMTable m_moduleHMTable;

	std::list<Partition> m_partitions;
	std::list<PartitionHMTable> m_partitionHMTables;
	std::list<PartitionMemory> m_partitionMemories;
};

}//namespace arinc653

#endif //ARINC653_MODULE_H_


