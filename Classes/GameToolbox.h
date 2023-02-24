#pragma once
#include <axmol.h>
#include <string>
#include <fmt/chrono.h>
#include <iostream>

//general purpose class for helper functions that can be useful with any class at any moment


namespace GameToolbox
{
	
	int randomInt(int min, int max);
	int randomInt(int max);
	float randomFloat(int min, int max);
	float randomFloat(int max);
	ax::Color3B randomColor3B();
	std::string getTextureString(std::string texture);
	void alignItemsInColumnsWithPadding(ax::Menu* menu, const int rows, const int x_padding, const int y_padding);

	void log(const char* simpleStr);
	
	template <typename... Args>
	void log(std::string_view f, Args... args)
	{
		auto formatted = fmt::vformat(f, fmt::make_format_args(args ...));
		fmt::print("[{:%H:%M:%S}] {}\n", fmt::gmtime(std::time(NULL)), formatted);
	}
	
};
