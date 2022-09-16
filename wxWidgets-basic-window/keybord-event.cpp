#include "keybord-event.h"

MainFrame::MainFrame(const wxString &title)
	: wxFrame(nullptr, wxID_ANY, title) {

	wxPanel *panel = new wxPanel(this);
	
	panel->Bind(wxEVT_KEY_DOWN, &MainFrame::OnKeyEvent, this);
	
	CreateStatusBar();
}

void MainFrame::OnKeyEvent(wxKeyEvent &event) {
	wxChar ch = event.GetUnicodeKey();
	
	// UnicodeKey�� �������� ��� ������ �ۿ� ���������� ���Ѵ�.
	// ���� �ٸ� ��� �����ؾ� �Ѵٸ� ���������� ������ ���Ѵ�.
	if (ch == WXK_NONE) {
		int nonKey = event.GetKeyCode();
		wxLogStatus(" Detected %d !", nonKey);
	} else {
		wxLogStatus(" Detected %c !", ch);
	}
	
}
