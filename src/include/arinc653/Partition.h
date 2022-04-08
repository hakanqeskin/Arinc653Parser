#ifndef ARINC653_PARTITION_H_
#define ARINC653_PARTITION_H_

#include <apex/types.h>
#include <ezxml/ezxml.h>

#include <string>

namespace arinc653
{
class Partition
{
public:
	enum CRITICALITY{
		LEVEL_A,
		LEVEL_B,
		LEVEL_C,
		LEVEL_D,
		LEVEL_E
	};

	Partition();
	~Partition();

	bool load(ezxml_t);

	PARTITION_ID_TYPE identifier()const;
	const std::string& name()const;
	CRITICALITY criticality()const;
	bool isSystemPartition()const;

private:
	PARTITION_ID_TYPE m_id;
	std::string m_name;
	CRITICALITY m_criticality;
	bool m_systemPartition;
};

}//namespace arinc653

#endif // ARINC653_PARTITION_H_

