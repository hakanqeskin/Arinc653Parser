#ifndef ARINC653_BLACK_BOARD_H_
#define ARINC653_BLACK_BOARD_H_

#include <ezxml/ezxml.h>
#include <string>

namespace arinc653
{
class BlackBoard
{
public:
	BlackBoard();
	~BlackBoard();

	bool load(ezxml_t);

	const std::string& name()const;
	unsigned maxMessageSize()const;

private:
	std::string m_name;
	unsigned m_maxMessageSize;
};
}//namespace arinc653


#endif //ARINC653_BLACK_BOARD_H_
