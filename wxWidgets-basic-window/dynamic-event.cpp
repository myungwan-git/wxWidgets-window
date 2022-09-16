#include "dynamic-event.h"

// Button ID�� 0 or 1�� �� �� ����.
//enum IDs {
//	BUTTON_ID = 2,
//	SLIDER_ID = 3,
//	TEXT_ID = 4
//};

MainFrame::MainFrame(const wxString &title)
	: wxFrame(nullptr, wxID_ANY, title) {

	wxPanel *panel = new wxPanel(this);

	wxButton *button1 = new wxButton(panel, wxID_ANY, "Button1", wxPoint(100, 50), wxSize(200, 50));
	wxButton *button2 = new wxButton(panel, wxID_ANY, "Button2", wxPoint(100, 100), wxSize(200, 50));
	wxSlider *slider = new wxSlider(panel, wxID_ANY, 10, 0, 100, wxPoint(100, 150), wxSize(200, -1));
	wxTextCtrl *textCtrl = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(100, 200), wxSize(200, -1));

	// panel ���� MainFrame(this)�� �����ص� �����ϴ�.
	// ���⼭ �켱������ button1ó�� ���� ������ ��ü�� �̺�Ʈ�� �ǽ��ϰ� panel���� ���� �ʰ� �����Ѵ�.
	// ���� �̺�Ʈ�� �� �ִٴ°��� �˷��ֱ� ���ؼ��� �̺�Ʈ�Լ��� event.Skip() �Լ��� ������ ��� �Ѵ�.
	panel->Bind(wxEVT_BUTTON, &MainFrame::OnAllButtonClicked, this);
	button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);
	button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);

	slider->Bind(wxEVT_SLIDER, &MainFrame::OnSliderChanged, this);
	textCtrl->Bind(wxEVT_TEXT, &MainFrame::OnTextCtrlChanged, this);

	// Bind ����
	//button->Unbind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);

	CreateStatusBar();		// �ϴܿ� StatusBar�� ������ �ش�.

}


void MainFrame::OnAllButtonClicked(wxCommandEvent &event) {
	// CreateStatusBar�� Text�� ����Ѵ�.
	//wxLogStatus(" >>> Button Clicked");

	// Message â Open
	wxLogMessage(" >>> Clicked !!");
}

void MainFrame::OnButton1Clicked(wxCommandEvent &event) {
	wxLogStatus(" >>> Button 1 Clicked");
	// �̺�Ʈ�� ���� �����ִٴ� ���� �˷��ִ� Skip method
	event.Skip();
}
void MainFrame::OnButton2Clicked(wxCommandEvent &event) {
	wxLogStatus(" >>> Button 2 Clicked");
}



void MainFrame::OnSliderChanged(wxCommandEvent &event) {
	wxString str = wxString::Format("Slider Changed value = %d", event.GetInt());
	wxLogStatus(str);
}

void MainFrame::OnTextCtrlChanged(wxCommandEvent &event) {
	wxString str = wxString::Format("TextCtrl Changed value = %s", event.GetString());
	wxLogStatus(str);
}