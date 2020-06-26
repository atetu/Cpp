#include "Human.hpp"

int main()
{
	Human human;
	human.action("meleeAttack", "target");
	human.action("rangedAttack", "target");
	human.action("intimidatingShout", "target");
	human.action("other", "target");
}
