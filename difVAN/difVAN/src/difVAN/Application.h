#pragma once

#include "Core.h"

namespace difVAN {

	class DIFVAN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	Application* CreateApplication();
}

