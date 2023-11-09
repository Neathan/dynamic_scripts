#pragma once

#define SCRIPT_API __declspec(dllexport)

class Script {
public:
	virtual ~Script() {};
	virtual void init() {};
	virtual void ready() {};
	virtual void update() {};
};
