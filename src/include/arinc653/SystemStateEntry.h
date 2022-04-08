#ifndef ARINC653_SYSTEM_STATE_ENTRY_H_
#define ARINC653_SYSTEM_STATE_ENTRY_H_

#include "SystemState.h"

struct ezxml;

namespace arinc653
{
	class SystemStateEntry
	{
	public:
		SystemStateEntry();
		~SystemStateEntry();

		bool load(struct ezxml*);

		SYSTEM_STATE state()const;
		const char* description()const;

	private:
		SYSTEM_STATE m_state;
	};
}//namespace arinc653


#endif //ARINC653_SYSTEM_STATE_ENTRY_H_