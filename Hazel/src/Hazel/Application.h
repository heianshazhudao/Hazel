#pragma once

#include"Core.h"


namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application() {}
		virtual ~Application() {}

		void Run();
	};

	//在客户端中定义
	Hazel::Application* CreateApplication();
}