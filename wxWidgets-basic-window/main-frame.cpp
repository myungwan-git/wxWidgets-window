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

//-------------------------------
// Button design
//-------------------------------
/*
wxBU_LEFT : ���� ����
*/

/*
MainFrame::MainFrame(const wxString &title) 
	// �ֻ��� widgets�̹Ƿ� �θ� ����. ���� �θ�� nullptr. 
	// pos, size�� �⺻������� ��ϵǰ� ������2���� ���������ϴ�.
	: wxFrame(nullptr, wxID_ANY, title)
{
	// �г� ���� ��ư�� �ٷ� Window�� �����ϸ� ��� ������ũ�⸦ �� �Ծ������.
	// ���� �г��� Window�� �����ϰ� ������ �г��� ��ư�� �θ�Window�� ��´�.
	wxPanel *panel = new wxPanel(this);

	// Button ����
	// MainFrame�� �θ�� ��� ����  wxWindow���ڿ� MainFrame�� �����Ѵ�.
	// label������ ��� ��ư �޽��� ��Ÿ�� �ؽ�Ʈ�� �����Ѵ�.
	wxButton *button = new wxButton(panel, wxID_ANY, "ButtonName", wxPoint(150,50), wxSize(100,35), wxBU_LEFT);
	
	// CheckBox ����
	wxCheckBox *checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBoxName", wxPoint(150, 100), wxSize(100,35),
										  wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);
	
	// StaticText ���� ( �׳� label ����Ѱ� ���⵵... )
	// StaticText�� ��� ��κ� �⺻ũ�⸦ ����ϴ°� ����. ��κ��̴� ��κ�. Style�κп��� ������ ����. �׸��� ��?
	wxStaticText *staticText = new wxStaticText(panel, wxID_ANY, "StaticTextName", wxPoint(150, 150), wxSize(150,-1),
												wxALIGN_CENTER_HORIZONTAL);
	staticText->SetBackgroundColour(*wxLIGHT_GREY);

	// ����� �Է� TextBox ����
	// wxSize���� -1 �� �����ϸ� �⺻ ũ��� ���� �ȴ�. ����, �н����� �Է�â ó�� Style�� �� ���� �ִ�.
	wxTextCtrl *textCtrl = new wxTextCtrl(panel, wxID_ANY, "TextControl basicddddddd!", wxPoint(150,200), 
										  wxSize(100,-1), wxTE_PASSWORD);

	// Slider ���� ( LABELS�� �� �������� ���� �ִ�. ���� ���ڸ� �˾ƾ� �� �ʿ䰡? VALUE_LABEL�� ������.
	wxSlider *slider = new wxSlider(panel, wxID_ANY, 30, 10, 100, wxPoint(150,250), wxSize(200, -1), wxSL_VALUE_LABEL);
	

	// Guage ���� ( Gauge�� ���Ѱ� ��Ÿ���� ���� �ʴ� )
	// ���� Guage Style. ( ��Ÿ���� wxGA_ �� )
	wxGauge *gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(150,300), wxSize(200,-1));
	gauge->SetValue(slider->GetValue());

	// ComboBox�� �� ArrayString ����
	wxArrayString arrayString;
	arrayString.Add("Item C");
	arrayString.Add("Item B");
	arrayString.Add("Item A");
	// ComboBox ���� ( drop down )
	// wxCB_�� Style ���� 
	wxChoice *choice = new wxChoice(panel, wxID_ANY, wxPoint(150,350), wxSize(200,-1), arrayString, wxCB_SORT);
	// �⺻���� 0��°(Item C) ����. But show Item A because wxCB_SORT
	choice->Select(0);

	// Spin Control ���� ( �̰� ���� ���� ����..? )
	// wxSP_ Style ( wxSP_WRAP : Max/Min �ʰ��� Min/Max�� value wrapping )
	wxSpinCtrl *spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(150, 400), wxSize(100,-1), 
										  wxSP_WRAP, 0, 500, 100, "HI");

	// ��ϻ��� ���� ( Text List box ���� )
	// wxLB_ Style ( SORT �ϸ鼭 Select MULTIPLE ��� )
	wxListBox *listBox = new wxListBox(panel, wxID_ANY, wxPoint(150,450), wxSize(100,-1), arrayString, 
									   wxLB_SORT | wxLB_MULTIPLE);
	
	// Radio Box ����. ������ ���ڴ� ���ٿ� ��� ������ ���ΰ�. 0�̸� ������ �� ���� �ִ� ��.
	wxRadioBox *radioBox = new wxRadioBox(panel, wxID_ANY, "Radio Box", wxPoint(150,500), wxSize(100,-1), 
										  arrayString,1, wxRB_GROUP);
	radioBox->Select(2);
}
*/