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
// �ֻ��� widgets�̹Ƿ� �θ� ����. ���� �θ�� nullptr. 
// pos, size�� �⺻������� ��ϵǰ� ������2���� ���������ϴ�.
	: wxFrame(nullptr, wxID_ANY, title) {
	wxPanel *panel = new wxPanel(this);
	// Button ����
	// MainFrame�� �θ�� ��� ����  wxWindow���ڿ� MainFrame�� �����Ѵ�.
	// label������ ��� ��ư �޽��� ��Ÿ�� �ؽ�Ʈ�� �����Ѵ�.
	wxButton *button = new wxButton(panel, wxID_ANY, "ButtonName", wxPoint(150, 50), wxSize(100, 35));
	wxObject *obj = nullptr;
	button->Bind(wxEVT_BUTTON, &MainFrame::printExamm, -1, -1, nullptr);


	// CheckBox ����
	wxCheckBox *checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBoxName", wxPoint(150, 100), wxSize(100, 35));

	// StaticText ���� ( �׳� label ����Ѱ� ���⵵... )
	wxStaticText *staticText = new wxStaticText(panel, wxID_ANY, "StaticTextName", wxPoint(150, 150), wxSize(100, 35));

	// ����� �Է� TextBox ����
	// wxSize���� -1 �� �����ϸ� �⺻ ũ��� ���� �ȴ�.
	wxTextCtrl *textCtrl = new wxTextCtrl(panel, wxID_ANY, "TextControl basicddddddd!", wxPoint(150, 200), wxSize(100, -1));

	// Slider ����
	wxSlider *slider = new wxSlider(panel, wxID_ANY, 30, 10, 100, wxPoint(150, 250), wxSize(200, -1));

	// Guage ����
	wxGauge *gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(150, 300), wxSize(200, -1));
	gauge->SetValue(slider->GetValue());

	// ComboBox�� �� ArrayString ����
	wxArrayString arrayString;
	arrayString.Add("Item A");
	arrayString.Add("Item B");
	arrayString.Add("Item C");
	// ComboBox ���� ( drop down )
	wxChoice *choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 350), wxSize(200, -1), arrayString);
	// �⺻���� 0��°(Item A) ����.
	choice->Select(0);

	// Spin Control ���� ( �̰� ���� ���� ����..? )
	wxSpinCtrl *spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(150, 400), wxSize(100, -1), wxSP_ARROW_KEYS, 0, 500, 100, "HI");

	// ��ϻ��� ���� ( Text List box ���� )
	wxListBox *listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 450), wxSize(100, -1), arrayString);

	// Radio Box ����. ������ ���ڴ� ���ٿ� ��� ������ ���ΰ�. 0�̸� ������ �� ���� �ִ� ��.
	wxRadioBox *radioBox = new wxRadioBox(panel, wxID_ANY, "Radio Box", wxPoint(150, 500), wxSize(100, -1), arrayString, 1);
	radioBox->Select(2);
}