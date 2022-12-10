

project(LC_console_utils LANGUAGES CXX)

set(LC_CONSOLE_UTILS_MAIN_PROJECT OFF)
if((CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR) AND (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME))
	set(LC_CONSOLE_UTILS_MAIN_PROJECT ON)
endif()

add_library(LC_console_utils)

target_sources(LC_console_utils
	PRIVATE
		"lib/src/console.cpp"
)

target_include_directories(LC_console_utils
	PUBLIC
		"lib/include"
)

# c++20
set_target_properties(
	LC_console_utils
	PROPERTIES
		CXX_STANDARD 20
		CXX_STANDARD_REQUIRED ON
		CXX_EXTENSIONS OFF
)