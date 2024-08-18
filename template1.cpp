#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main()
{

	std::string str = "Hello world!!";

	size_t length_str = str.length();

	std::map<char, int> M_map;

	for (auto& temp : str)
	{
		M_map[temp]++;
	}

	std::vector <std::pair<char,int>> V_vector;

	for (auto& temp : M_map)
	{
		V_vector.push_back(temp);

	}

	std::sort(V_vector.begin(), V_vector.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
		return a.second > b.second;
		});

	for (auto& temp : V_vector) 
	{
		std::cout << temp.first << " " << temp.second << std::endl;
	}

	

	

	



}