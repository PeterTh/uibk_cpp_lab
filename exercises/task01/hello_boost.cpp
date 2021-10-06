#include <iostream>

#include <boost/algorithm/string/replace.hpp>

int main()
{
	std::string s = "foo bar";
	boost::replace_all(s, "foo", "Hello");
	boost::replace_all(s, "bar", "World");
	std::cout << s << std::endl;
}
