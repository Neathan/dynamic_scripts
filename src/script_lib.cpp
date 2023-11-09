#include "script_lib.h"

#include <iostream>

class CustomScript : public Script {
public:

	~CustomScript() {
		std::cout << "[Script] CustomScript::~CustomScript()" << std::endl;
	}

	void init() override {
		std::cout << "[Script] CustomScript::init()" << std::endl;
	}

	void ready() override {
		std::cout << "[Script] CustomScript::ready()" << std::endl;
	}

	void update() override {
		std::cout << "[Script] CustomScript::update()" << std::endl;
	}
};

SCRIPT_API Script *createScript() {
	std::cout << "[API] Creating CustomScript" << std::endl;
	return new CustomScript{};
}

SCRIPT_API void destroyScript(Script *script) {
	std::cout << "[API] Destroying CustomScript" << std::endl;
	delete script;
}
