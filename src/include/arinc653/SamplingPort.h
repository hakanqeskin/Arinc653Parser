#ifndef ARINC653_SAMPLINGPORT_H_
#define ARINC653_SAMPLINGPORT_H_

#include <apex/types.h>

#include <string>

struct ezxml;

namespace arinc653
{
class SamplingPort
{
public:
	SamplingPort();
	~SamplingPort();

	bool load(struct ezxml*);

	const std::string& name()const;
	unsigned maxMessageSize()const;
	PORT_DIRECTION_TYPE direction()const;
	float refreshRate()const;

private:
	std::string m_name;
	unsigned m_maxMessageSize;
	PORT_DIRECTION_TYPE m_direction;
	float m_refreshRate;

};
}//namespace arinc653

#endif //ARINC653_SAMPLINGPORT_H_
