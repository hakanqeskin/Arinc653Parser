#ifndef ARINC653_QUEUINGPORT_H_
#define ARINC653_QUEUINGPORT_H_

#include <apex/types.h>

#include <string>

struct ezxml;

namespace arinc653
{
class QueuingPort
{
public:
	QueuingPort();
	~QueuingPort();

	bool load(struct ezxml*);

	const std::string& name()const;
	unsigned maxMessageSize()const;
	PORT_DIRECTION_TYPE direction()const;
	unsigned maxNumberOfMessage()const;

private:
	std::string m_name;
	unsigned m_maxMessageSize;
	PORT_DIRECTION_TYPE m_direction;
	unsigned m_maxNumberOfMessage;
};

}//namespace arinc653

#endif //ARINC653_QUEUINGPORT_H_
