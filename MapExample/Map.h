#pragma once
#include <stack>
#include "Location.h"
#include <unordered_map>
#include <vector>
#include <iostream> 
class Map
{
private:
	std::vector <std::string> _wayHome;
	std::stack<Location *> _locationsVisited;
	std::unordered_map<std::string, Location *> _mapLookup;
public:
	void addedDirections(std::string theWay) {
		_wayHome.push_back(theWay);
	}
	void displayWayHome() {
		std::cout << "You got here by taking this path" << std::endl;
		for (auto x = 0; x < _wayHome.size(); x++) {
			std::cout << _wayHome[x] << std::endl;
		
		}
	}
	Map(std::string startLocationName);
	~Map();

	Location * CurrentLocation = nullptr;
	std::string GetPathBackToHome() {
		displayWayHome();
		return "Have a good journey back!";
	}

	void Move(Location *newLocation);
	Location * LookupLocationOnMap(int x, int y);
};

