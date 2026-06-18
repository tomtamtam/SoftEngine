#pragma once

#include <memory>
#include <string>
#include <vector>
#include "defines.h"

namespace SoftEngine
{
	class Application
	{
	public:
		void Init(const std::string &configPath);
		std::vector<uint32_t> Buffer;
	};

	std::shared_ptr<Application> GetApp()
	{
		return std::make_shared<Application>();
	}
};
