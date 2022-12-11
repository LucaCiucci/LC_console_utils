
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

		constexpr TerminalColor() = default;
		constexpr TerminalColor(uint8_t r, uint8_t g, uint8_t b) : r(r), g(g), b(b) {}

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

	namespace terminal_themes
	{
		namespace dark
		{
			// see https://github.com/OpenPhysicsNotes/openphysicsnotes-content/blob/main/css/code.css
			static inline constexpr TerminalColor pvar   = TerminalColor(150, 150, 150);
			static inline constexpr TerminalColor number = TerminalColor(181, 206, 168);
			static inline constexpr TerminalColor string = TerminalColor(214, 157, 122);
			static inline constexpr TerminalColor attribute = TerminalColor(156, 220, 254);
			static inline constexpr TerminalColor keyword = TerminalColor(86, 156, 214);
			static inline constexpr TerminalColor tag = TerminalColor(86, 156, 214);
		}
	}

	std::string colorize(const std::string& str, const TerminalColor& color, bool enable = true);
}