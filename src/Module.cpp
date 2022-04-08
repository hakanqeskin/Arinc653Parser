#include "include/arinc653/Module.h"

#include "ezxml/ezxml.h"

namespace arinc653
{
Module::Module()
{
}

Module::~Module()
{
}

bool Module::load(const char* xml_file)
{
	return false;
}

const std::string& Module::name()const
{
	return this->m_name;
}

const std::string& Module::version()const
{
	return this->m_version;
}

}//namespace arinc653


