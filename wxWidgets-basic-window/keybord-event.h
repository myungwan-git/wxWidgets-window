#pragma once

#include <wx/wx.h>
#include <wx/frame.h>

class MainFrame : public wxFrame {
	private:
		void OnKeyEvent(wxKeyEvent &event);
	public:
		MainFrame(const wxString &title);
};