#ifndef ARINC653_CHANNEL_H_
#define ARINC653_CHANNEL_H_

#include <ezxml/ezxml.h>

#include <string>

namespace arinc653
{
class Channel
{
public:
	Channel();
	~Channel();

	bool load(ezxml_t);

	unsigned identifier()const;
	const std::string& name()const;

private:
	unsigned m_id;
	std::string m_name;
};

}//namespace arinc653

#endif //ARINC653_CHANNEL_H_