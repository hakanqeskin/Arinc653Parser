#ifndef ARINC653_EVENT_H_
#define ARINC653_EVENT_H_

#include <string>

struct ezxml;

namespace arinc653
{
class Event
{
public:
	Event();
	~Event();

	bool load(struct ezxml*);

	const std::string& name()const;

private:
	std::string m_name;

};
}//namespace arinc653


#endif //ARINC653_EVENT_H_