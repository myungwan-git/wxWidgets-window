#pragma once
/*
* Application 진입점이 될 OnInit function.
*/
#include <wx/wx.h>

class App : public wxApp {
	private:

	public:
		bool OnInit();
};