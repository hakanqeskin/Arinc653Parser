#ifndef ARINC653_PROCESS_H_
#define ARINC653_PROCESS_H_

#include <apex/types.h>

#include <string>

struct ezxml;

namespace arinc653
{
class Process
{
public:

	Process();
	~Process();

	bool load(struct ezxml*);

	const std::string& name()const;
	unsigned stackSize()const;
	int basePriority()const;
	float period()const;
	float timeCapacity()const;
	DEADLINE_TYPE deadLine()const;

private:
	std::string m_name;
	unsigned m_stackSize;
	int m_basePriority;
	float m_period;
	float m_timeCapacity;
	DEADLINE_TYPE m_deadLine;
};

}//namespace arinc653

#endif //ARINC653_PROCESS_H_

