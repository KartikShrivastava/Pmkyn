#pragma once
#include "Core.h"

namespace pmk{
	class PMK_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//This method is defined by Client
	Application* CreateApplication();
}