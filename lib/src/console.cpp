
#include <LC/console/console.hpp>

// for system()
#include <cstdlib>

#include <format>

//#ifdef WIN32
//#include <windows.h>
//#endif


namespace lc
{
	void prepareConsole()
	{
#ifdef WIN32
	// Allow usage of ANSI escape sequences on Windows 10
	// and UTF-8 console output
	std::system("chcp 65001 > NUL");
#endif
	}

	TerminalColor TerminalColor::BLACK   = TerminalColor(  0,   0,   0);
	TerminalColor TerminalColor::GRAY    = TerminalColor(128, 128, 128);
	TerminalColor TerminalColor::WHITE   = TerminalColor(255, 255, 255);
	TerminalColor TerminalColor::RED     = TerminalColor(255,   0,   0);
	TerminalColor TerminalColor::GREEN   = TerminalColor(  0, 255,   0);
	TerminalColor TerminalColor::BLUE    = TerminalColor(  0,   0, 255);
	TerminalColor TerminalColor::YELLOW  = TerminalColor(255, 255,   0);
	TerminalColor TerminalColor::MAGENTA = TerminalColor(255,   0, 255);
	TerminalColor TerminalColor::CYAN    = TerminalColor(  0, 255, 255);

	std::string colorize(const std::string& str, const TerminalColor& color, bool enable)
	{
		if (!enable)
			return str;

		return std::format("\x1b[38;2;{1};{2};{3}m{0}\x1b[0m", str, color.r, color.g, color.b);
	}
}