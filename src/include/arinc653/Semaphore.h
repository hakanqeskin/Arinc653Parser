#ifndef ARINC653_SEMAPHORE_H_
#define ARINC653_SEMAPHORE_H_

#include <apex/types.h>

#include <string>

struct ezxml;

namespace arinc653
{
class Semaphore
{
public:
	Semaphore();
	~Semaphore();

	bool load(struct ezxml*);

	const std::string& name()const;
	int maxValue()const;
	QUEUING_DISCIPLINE_TYPE type()const;

private:
	std::string m_name;
	int m_max;
	QUEUING_DISCIPLINE_TYPE m_type;
};
}//namespace arinc653

#endif //ARINC653_SEMAPHORE_H_
