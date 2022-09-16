#include "dynamic-event.h"

// Button ID는 0 or 1이 될 수 없다.
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

	// panel 말고 MainFrame(this)을 지정해도 가능하다.
	// 여기서 우선순위는 button1처럼 직접 지정한 개체가 이벤트를 실시하고 panel까지 가지 않고 종료한다.
	// 따라서 이벤트가 더 있다는것을 알려주기 위해서는 이벤트함수에 event.Skip() 함수를 실행해 줘야 한다.
	panel->Bind(wxEVT_BUTTON, &MainFrame::OnAllButtonClicked, this);
	button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);
	button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);

	slider->Bind(wxEVT_SLIDER, &MainFrame::OnSliderChanged, this);
	textCtrl->Bind(wxEVT_TEXT, &MainFrame::OnTextCtrlChanged, this);

	// Bind 해제
	//button->Unbind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);

	CreateStatusBar();		// 하단에 StatusBar를 생성해 준다.

}


void MainFrame::OnAllButtonClicked(wxCommandEvent &event) {
	// CreateStatusBar에 Text로 출력한다.
	//wxLogStatus(" >>> Button Clicked");

	// Message 창 Open
	wxLogMessage(" >>> Clicked !!");
}

void MainFrame::OnButton1Clicked(wxCommandEvent &event) {
	wxLogStatus(" >>> Button 1 Clicked");
	// 이벤트가 아직 남아있다는 것을 알려주는 Skip method
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