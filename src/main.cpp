#include "script.h"

#include <dylib.hpp>

int main() {

	dylib scriptLib{ "C:/dev/engine/loading_test/out/build/x64-Debug/script_lib" };
	auto createScript = scriptLib.get_function<Script*()>("createScript");
	auto destroyScript = scriptLib.get_function<void(Script*)>("destroyScript");

	Script *script = createScript();

	script->init();
	script->ready();
	script->update();

	destroyScript(script);

	return 0;
}
