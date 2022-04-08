#ifndef ARINC653_PARTITION_HM_TABLE_H_
#define ARINC653_PARTITION_HM_TABLE_H_

struct ezxml;

namespace arinc653
{
class PartitionHMTable
{
public:
	PartitionHMTable();
	~PartitionHMTable();

	bool load(struct ezxml*);

	unsigned identifier()const;

private:
	unsigned m_id;
};
}//namespace arinc653


#endif //ARINC653_PARTITION_HM_TABLE_H_