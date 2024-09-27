#include "imgui.h"

namespace font
{
	inline ImFont* icomoon = nullptr;
	inline ImFont* lexend_bold = nullptr;
	inline ImFont* lexend_regular = nullptr;
	inline ImFont* lexend_general_bold = nullptr;

	inline ImFont* icomoon_widget = nullptr;
	inline ImFont* icomoon_widget2 = nullptr;

}

namespace c
{
	namespace other
	{
		static int notify_select = 0;
	}

	namespace tab
	{
		static float tab_alpha = 0.f;
		static float tab_add;
		static int active_tab = 0;
	}

	inline ImVec4 accent = ImColor(114, 149, 255);

	namespace background
	{

		inline ImVec4 filling = ImColor(21, 25, 24);
		inline ImVec4 stroke = ImColor(26, 30, 29);
		inline ImVec2 size = ImVec2(650, 450);

		inline float rounding = 6;

	}

	namespace elements
	{
		inline ImVec4 mark = ImColor(255, 255, 255);

		inline ImVec4 stroke = ImColor(21, 25, 24);
		inline ImVec4 background = ImColor(21, 25, 24);
		inline ImVec4 background_widget = ImColor(26, 30, 29);
		inline ImVec4 background_rect = ImColor(29, 33, 32);

		inline ImVec4 text_active = ImColor(255, 255, 255);
		inline ImVec4 text_hov = ImColor(114, 149, 255);
		inline ImVec4 text = ImColor(81, 85, 84);

		inline float rounding = 4;
	}

	namespace child
	{

	}

	namespace tab
	{
		inline ImVec4 tab_active = ImColor(26, 30, 29);
		inline ImVec4 tab_active_rect = ImColor(29, 33, 32);

		inline ImVec4 border = ImColor(26, 30, 29);
	}

}