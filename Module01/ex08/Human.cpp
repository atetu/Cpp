#include "Human.hpp"

void Human::meleeAttack(std::string const &target)
{
	std::cout << "Melee attack against " << target << "!!!!" << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "Ranged attack against " << target << "!!!!" << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "Intimidating shout against " << target << "!!!!" << std::endl;
}

void Human::action(std::string const &action_name, std::string const & target)
{
	try
	{
		int name;
	name = "meleeAttack" == action_name? 0 :
		"rangedAttack" == action_name? 1:
		"intimidatingShout" == action_name? 2:
		throw "Invalid action";
	void (Human::* const func[3])(std::string const &target) = 
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	(this->*func[name])(target);
	}
	catch(char const *e)
	{
		std::cout << e << "\n";
	}
}
