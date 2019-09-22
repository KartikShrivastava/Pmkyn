#pragma once

#ifdef PMK_PLATFORM_WINDOWS

extern pmk::Application* pmk::CreateApplication();

int main(int argc, char** argv) {
	pmk::Application* app = pmk::CreateApplication();
	app->Run();
	delete app;
}

#endif