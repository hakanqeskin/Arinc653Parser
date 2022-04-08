#ifndef ARINC653_BUFFER_H_
#define ARINC653_BUFFER_H_

#include <apex/types.h>

#include <string>

struct ezxml;

namespace arinc653
{
class Buffer
{
public:
	Buffer();
	~Buffer();

	bool load(struct ezxml*);

	const std::string& name()const;
	MESSAGE_RANGE_TYPE maxMessageSize()const;
	MESSAGE_RANGE_TYPE maxNumberOfMessage()const;
	QUEUING_DISCIPLINE_TYPE type()const;

private:
	std::string m_name;
	MESSAGE_RANGE_TYPE m_maxMessageSize;
	MESSAGE_RANGE_TYPE m_maxNumberOfMessage;
	QUEUING_DISCIPLINE_TYPE m_type;
};

}//namespace arinc653

#endif //ARINC653_BUFFER_H_