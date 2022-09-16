/*
#include "static-event.h"

// Button ID�� 0 or 1�� �� �� ����.
enum IDs {
	BUTTON_ID = 2,
	SLIDER_ID = 3,
	TEXT_ID = 4
};

// Event Table ���� ������ �������� ����.
wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
	EVT_BUTTON(BUTTON_ID, MainFrame::OnButtonClicked)
	EVT_SLIDER(SLIDER_ID, MainFrame::OnSliderChanged)
	EVT_TEXT(TEXT_ID, MainFrame::OnTextCtrlChanged)
wxEND_EVENT_TABLE(MainFrame, wxFrame);

MainFrame::MainFrame(const wxString &title)
: wxFrame(nullptr, wxID_ANY, title) {

	wxPanel *panel = new wxPanel(this);

	wxButton *button = new wxButton(panel, BUTTON_ID, "Button", wxPoint(100, 100), wxSize(200, 50));
	wxSlider *slider = new wxSlider(panel, SLIDER_ID, 10, 0, 100, wxPoint(100,150), wxSize(200, -1));
	wxTextCtrl *textCtrl = new wxTextCtrl(panel, TEXT_ID, "", wxPoint(100, 200), wxSize(200, -1));
	
	CreateStatusBar();		// �ϴܿ� StatusBar�� ������ �ش�.
	
}


void MainFrame::OnButtonClicked(wxCommandEvent &event) {
	// CreateStatusBar�� Text�� ����Ѵ�.
	wxLogStatus(" >>> Button Clicked");
}

void MainFrame::OnSliderChanged(wxCommandEvent &event) {
	wxString str = wxString::Format("Slider Changed value = %d", event.GetInt());
	wxLogStatus(str);
}

void MainFrame::OnTextCtrlChanged(wxCommandEvent &event) {
	wxString str = wxString::Format("TextCtrl Changed value = %s", event.GetString());
	wxLogStatus(str);
}
*/