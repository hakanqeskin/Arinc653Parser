#ifndef ARINC653_SAMPLINGPORT_H_
#define ARINC653_SAMPLINGPORT_H_

#include <apex/types.h>

#include <ezxml/ezxml.h>

#include <string>


namespace arinc653
{
class SamplingPort
{
public:
	SamplingPort();
	~SamplingPort();

	bool load(ezxml_t);

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
