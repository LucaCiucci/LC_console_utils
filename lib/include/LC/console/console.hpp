
#pragma once

#include <string>

namespace lc
{
	void prepareConsole();

	class TerminalColor
	{
	public:
		uint8_t r = 128;
		uint8_t g = 128;
		uint8_t b = 128;

		TerminalColor() = default;
		TerminalColor(uint8_t r, uint8_t g, uint8_t b) : r(r), g(g), b(b) {}

		static TerminalColor BLACK;
		static TerminalColor GRAY;
		static TerminalColor WHITE;
		static TerminalColor RED;
		static TerminalColor GREEN;
		static TerminalColor BLUE;
		static TerminalColor YELLOW;
		static TerminalColor MAGENTA;
		static TerminalColor CYAN;

	private:
	};

	std::string colorize(const std::string& str, const TerminalColor& color, bool enable = true);
}