
#include <boost/format.hpp>

#include <iostream>

int main()
{
    std::cout << boost::format("Hello %s\n") % "world";
}

