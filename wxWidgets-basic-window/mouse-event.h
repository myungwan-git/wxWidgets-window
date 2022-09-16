#pragma once
// Since main-frame.h

#include <wx/wx.h>
#include <wx/frame.h>

class MainFrame : public wxFrame {
	private:
		void OnMouseEvent(wxMouseEvent &event);
	public:
		MainFrame(const wxString &title);
};