#include <Pmkyn.h>

class Game : public pmk::Application {
public:
	Game(){

	}

	~Game() {

	}
};

pmk::Application* pmk::CreateApplication() {
	return new Game();
}