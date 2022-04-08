#ifndef ARINC653_SYSTEM_STATE_ENTRY_H_
#define ARINC653_SYSTEM_STATE_ENTRY_H_

#include "SystemState.h"
#include <ezxml/ezxml.h>

#include <string>

namespace arinc653
{
	class SystemStateEntry
	{
	public:
		SystemStateEntry();
		~SystemStateEntry();

		bool load(ezxml_t);

		SYSTEM_STATE state()const;
		const char* description()const;

	private:
		SYSTEM_STATE m_state;
	};
}//namespace arinc653


#endif //ARINC653_SYSTEM_STATE_ENTRY_H_