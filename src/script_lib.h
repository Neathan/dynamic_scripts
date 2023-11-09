#pragma once

#include "script.h"

extern "C" {

	SCRIPT_API Script *createScript();
	SCRIPT_API void destroyScript(Script *script);

}