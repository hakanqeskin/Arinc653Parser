#ifndef ARINC653_EVENT_H_
#define ARINC653_EVENT_H_

#include <ezxml/ezxml.h>
#include <string>

namespace arinc653
{
class Event
{
public:
	Event();
	~Event();

	bool load(ezxml_t);

	const std::string& name()const;

private:
	std::string m_name;

};
}//namespace arinc653


#endif //ARINC653_EVENT_H_