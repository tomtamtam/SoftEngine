#pragma once

#include <vector>
#include "defines.h"

namespace SoftEngine
{
	class Window
	{
	public:
		void Init(uint32_t width, uint32_t height, uint32_t bufferWidth, uint32_t bufferHeight);
		void SwapBuffer(uint32_t width, uint32_t height, std::vector<uint32_t> buffer);
	private:
		uint32_t m_Buffer;
	};
};
