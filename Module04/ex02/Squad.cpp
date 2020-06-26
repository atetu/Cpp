#include "Squad.hpp"

Squad::Squad() : count(0), begin_list(0)
{
}

Squad::~Squad()
{
	while (begin_list->next != NULL)
	{
		delete begin_list->unit;
		begin_list = begin_list->next;
	}
	delete begin_list->unit;
}

Squad::Squad(Squad const &to_copy)
{
	Squad obj;
	obj = to_copy;
	ISpaceMarine *copy;	
	count = to_copy.count;
	for (int i = 0; i != count; i++)
	{
		copy = obj.begin_list->unit->clone();
		push(copy);
		obj.begin_list = obj.begin_list->next;
	}

}

Squad &Squad::operator=(Squad const &to_copy)
{
	if (this != &to_copy)
	{
		count = to_copy.count;
		t_container *tmp;
		ISpaceMarine *copy;	
		Squad obj;
		obj = to_copy;
		for (int i = 0; i != count; i++)
		{
			delete begin_list->unit;
			tmp = begin_list->next;
			delete begin_list;
			begin_list = tmp;
		}
		for (int j = 0; j != count; j++)
		{
			copy = obj.begin_list->unit->clone();
			push(copy);
			obj.begin_list = obj.begin_list->next;
		}
	}
	return *this;
}

int Squad::getCount(void) const
{
	return (count);
}

ISpaceMarine *Squad::getUnit(int n) const
{
	t_container *tmp;
	tmp = begin_list;
	for (int i = 0; i < n; i++)
		tmp = tmp->next;
	return(tmp->unit);
}

int Squad::push(ISpaceMarine *unit)
{
	t_container *tmp;
	tmp = begin_list;
	if (begin_list == NULL)
	{
		begin_list = new t_container;
		begin_list->unit = unit;
		begin_list->unit_nb = count + 1;
		begin_list->next = NULL;
	}
	else
	{
		while (tmp->unit != unit && tmp->next != NULL)
			tmp = tmp->next;
		if (tmp->unit == unit)
			return (-1);
		tmp->next = new t_container;
		tmp->next->unit = unit;
		tmp->next->unit_nb = count + 1;
		tmp->next->next = NULL;
	}
	count +=1;
	return (count);
}
