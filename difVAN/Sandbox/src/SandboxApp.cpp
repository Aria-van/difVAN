#include <difVAN.h>

class Sandbox : public difVAN::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

difVAN::Application* difVAN::CreateApplication()
{
	return new Sandbox();
}