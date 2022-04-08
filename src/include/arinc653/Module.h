#ifndef ARINC653_MODULE_H_
#define ARINC653_MODULE_H_

#include <string>

namespace arinc653
{
class Module
{
public:
	Module();
	~Module();

	bool load(const char* xml_file);

	const std::string& name()const;
	const std::string& version()const;

private:
	std::string m_name;
	std::string m_version;

};

}//namespace arinc653

#endif //ARINC653_MODULE_H_


