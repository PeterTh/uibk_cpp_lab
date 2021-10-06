#include "catch.hpp"

#include "mylib/foo.hpp"

TEST_CASE("Foo Test", "[foo]")
{
	REQUIRE(mylib::foo() == 42);
}
