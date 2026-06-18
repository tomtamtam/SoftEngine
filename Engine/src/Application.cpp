#include <iostream>
#include "Application.h"
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;

namespace SoftEngine
{
	void Application::Init(const std::string &configPath)
	{
		std::ifstream file(configPath);	
		json j;
		file >> j;
	}
};
