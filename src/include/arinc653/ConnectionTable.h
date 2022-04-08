#ifndef ARINC653_CONNECTIONTABLE_H_
#define ARINC653_CONNECTIONTABLE_H_

struct ezxml;

namespace arinc653
{
class ConnectionTable
{
public:
	ConnectionTable();
	~ConnectionTable();

	bool load(struct ezxml*);
};
}//namespace arinc653


#endif //ARINC653_CONNECTIONTABLE_H_
