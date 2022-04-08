#include "include\arinc653\SystemStateEntry.h"

namespace arinc653
{
	SystemStateEntry::SystemStateEntry()
	{
	}


	SystemStateEntry::~SystemStateEntry()
	{
	}

	bool SystemStateEntry::load(ezxml_t) {
		return false;
	}

	SYSTEM_STATE SystemStateEntry::state()const {
		return this->m_state;
	}

	const char* SystemStateEntry::description()const
	{
		static const char* SystemStateDescriptions[] = {
			"Module Initialization",
			"Module Execution",
			"Partition Initialization",
			"Partition Execution"
		};

		return SystemStateDescriptions[this->m_state];
	}
}//namespace arinc653

