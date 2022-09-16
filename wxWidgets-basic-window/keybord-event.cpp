#include "keybord-event.h"

MainFrame::MainFrame(const wxString &title)
	: wxFrame(nullptr, wxID_ANY, title) {

	wxPanel *panel = new wxPanel(this);
	
	panel->Bind(wxEVT_KEY_DOWN, &MainFrame::OnKeyEvent, this);
	
	CreateStatusBar();
}

void MainFrame::OnKeyEvent(wxKeyEvent &event) {
	wxChar ch = event.GetUnicodeKey();
	
	// UnicodeKey를 가져오는 경우 영문자 밖에 가져오지를 못한다.
	// 따라서 다른 어떤걸 구분해야 한다면 정수형으로 가져와 비교한다.
	if (ch == WXK_NONE) {
		int nonKey = event.GetKeyCode();
		wxLogStatus(" Detected %d !", nonKey);
	} else {
		wxLogStatus(" Detected %c !", ch);
	}
	
}
