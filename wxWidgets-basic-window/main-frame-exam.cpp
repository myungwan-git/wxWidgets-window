#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "main-frame.h"
#include <wx/wx.h>

#include <wx/spinctrl.h>
/*
//--------------------------- wxFrame Class argument constructor.
wxFrame(wxWindow *parent,
			wxWindowID id,
			const wxString& title,
			const wxPoint& pos = wxDefaultPosition,
			const wxSize& size = wxDefaultSize,
			long style = wxDEFAULT_FRAME_STYLE,
			const wxString& name = wxASCII_STR(wxFrameNameStr))

//--------------------------- wxButton Class argument constructor.
wxButton(wxWindow *parent,
			 wxWindowID id,
			 const wxString& label = wxEmptyString,
			 const wxPoint& pos = wxDefaultPosition,
			 const wxSize& size = wxDefaultSize,
			 long style = 0,
			 const wxValidator& validator = wxDefaultValidator,
			 const wxString& name = wxASCII_STR(wxButtonNameStr))

//--------------------------- wxCheckBox Class argument constructor.
wxCheckBox(wxWindow *parent,
			wxWindowID id,
			const wxString& label,
			const wxPoint& pos = wxDefaultPosition,
			const wxSize& size = wxDefaultSize,
			long style = 0,
			const wxValidator& validator = wxDefaultValidator,
			const wxString& name = wxASCII_STR(wxCheckBoxNameStr))
*/

void MainFrame::printExamm() {
	std::cout << "Hello !!!!\n";
}
MainFrame::MainFrame(const wxString &title)
// 최상위 widgets이므로 부모가 없다. 따라서 부모는 nullptr. 
// pos, size는 기본사이즈로 등록되고 나머지2개는 생략가능하다.
	: wxFrame(nullptr, wxID_ANY, title) {
	wxPanel *panel = new wxPanel(this);
	// Button 생성
	// MainFrame을 부모로 삼기 위해  wxWindow인자에 MainFrame을 주입한다.
	// label인자의 경우 버튼 펄스에 나타날 텍스트를 지정한다.
	wxButton *button = new wxButton(panel, wxID_ANY, "ButtonName", wxPoint(150, 50), wxSize(100, 35));
	wxObject *obj = nullptr;
	button->Bind(wxEVT_BUTTON, &MainFrame::printExamm, -1, -1, nullptr);


	// CheckBox 생성
	wxCheckBox *checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBoxName", wxPoint(150, 100), wxSize(100, 35));

	// StaticText 생성 ( 그냥 label 비슷한거 같기도... )
	wxStaticText *staticText = new wxStaticText(panel, wxID_ANY, "StaticTextName", wxPoint(150, 150), wxSize(100, 35));

	// 사용자 입력 TextBox 생성
	// wxSize에서 -1 로 설정하면 기본 크기로 설정 된다.
	wxTextCtrl *textCtrl = new wxTextCtrl(panel, wxID_ANY, "TextControl basicddddddd!", wxPoint(150, 200), wxSize(100, -1));

	// Slider 생성
	wxSlider *slider = new wxSlider(panel, wxID_ANY, 30, 10, 100, wxPoint(150, 250), wxSize(200, -1));

	// Guage 생성
	wxGauge *gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(150, 300), wxSize(200, -1));
	gauge->SetValue(slider->GetValue());

	// ComboBox에 들어갈 ArrayString 생성
	wxArrayString arrayString;
	arrayString.Add("Item A");
	arrayString.Add("Item B");
	arrayString.Add("Item C");
	// ComboBox 생성 ( drop down )
	wxChoice *choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 350), wxSize(200, -1), arrayString);
	// 기본으로 0번째(Item A) 세팅.
	choice->Select(0);

	// Spin Control 생성 ( 이걸 보통 뭐라 하지..? )
	wxSpinCtrl *spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(150, 400), wxSize(100, -1), wxSP_ARROW_KEYS, 0, 500, 100, "HI");

	// 목록상자 생성 ( Text List box 랄까 )
	wxListBox *listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 450), wxSize(100, -1), arrayString);

	// Radio Box 생성. 마지막 인자는 한줄에 몇개를 나열할 것인가. 0이면 무조건 다 집어 넣는 듯.
	wxRadioBox *radioBox = new wxRadioBox(panel, wxID_ANY, "Radio Box", wxPoint(150, 500), wxSize(100, -1), arrayString, 1);
	radioBox->Select(2);
}