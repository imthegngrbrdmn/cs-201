#include<iostream>
#include<vector>
#include<string>
void FifoPush(std::vector<std::string>& container, const std::string& item)
{
	container.insert(container.begin(),item);
}
void FifoPop(std::vector<std::string>& container, const std::string& item)
{
	//item.assign(container[0]);
	container.erase(container.begin());
}
void LifoPush(std::vector<std::string>& container, const std::string& item);
void LifoPop(std::vector<std::string>& container, const std::string& item);
bool IsContainerEmpty(const std::vector<std::string>& container);
void PrintContainer(std::vector<std::string>& container);
bool TestFifo();
bool TestLifo();
