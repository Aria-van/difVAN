#pragma once

#ifdef DV_PLATFORM_WINDOWS

extern difVAN::Application* difVAN::CreateApplication();

int main()
{
	auto app = difVAN::CreateApplication();
	app->Run();
	delete app;
}

#endif // DV_PLATFORM_WINDOWS
