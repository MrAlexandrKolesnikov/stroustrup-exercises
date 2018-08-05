#include <thread>
#include <chrono>
#include <iostream>

void thread_one_task()
{
	using namespace std::chrono_literals;
	while(true)
	{
		std::cout<<"Hello ";
		std::this_thread::sleep_for(1s);
	}
}

void thread_two_task()
{
	using namespace std::chrono_literals;
	while(true)
	{
		std::cout<<" World!"<<std::endl;
		std::this_thread::sleep_for(1s);
	}
}

int main()
{

	std::thread thread_one(thread_one_task);
	std::thread thread_two(thread_two_task);

	thread_one.join();
	thread_two.join();

	return 0;
}