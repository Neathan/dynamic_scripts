#include "script.h"

#include <windows.h>

typedef Script *(*CreateScriptFn)();
typedef void(*DestroyScriptFn)(Script*);

int main() {

	HINSTANCE hGetProcIDDLL = LoadLibrary("C:/dev/engine/loading_test/out/build/x64-Debug/script_lib.dll");

	CreateScriptFn createScript = (CreateScriptFn)GetProcAddress(hGetProcIDDLL, "createScript");
	DestroyScriptFn destroyScript = (DestroyScriptFn)GetProcAddress(hGetProcIDDLL, "destroyScript");

	Script *script = createScript();

	script->init();
	script->ready();
	script->update();

	destroyScript(script);

	return 0;
}
