#ifndef ARINC653_SYSTEM_HM_TABLE_H_
#define ARINC653_SYSTEM_HM_TABLE_H_

struct ezxml;

namespace arinc653
{
class SystemHMTable
{
public:
	SystemHMTable();
	~SystemHMTable();

	bool load(struct ezxml*);
};
}//namespace arinc653

#endif //ARINC653_SYSTEM_HM_TABLE_H_