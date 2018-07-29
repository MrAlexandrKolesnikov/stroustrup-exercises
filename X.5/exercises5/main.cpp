#include <iostream>
#include <algorithm>
#include <string>

struct person
{
	std::string name;
	size_t age;
};


int main()
{
	person some_person;
	std::cout<<"Person name:"<<std::endl;
	std::cin>>some_person.name;
	
	while(!std::none_of(some_person.name.begin(), some_person.name.end(), ::isdigit))
	{
		std::cout<<"Wrong input"<<std::endl;
		std::cout<<"Person name:"<<std::endl;
		std::cin>>some_person.name;
	}

	std::string number_string;
	std::string::size_type sz;
	std::cout<<"Person age:"<<std::endl;
    std::cin>>number_string;

    while(!std::all_of(number_string.begin(), number_string.end(), ::isdigit))
	{
		std::cout<<"Wrong input"<<std::endl;
		std::cout<<"Person age:"<<std::endl;
		std::cin>>number_string;
	}

	some_person.age = std::stoi(number_string, &sz);
    std::cout<<"Name:"<<some_person.name<<" age:"<<some_person.age<<std::endl;
    return 0;
}