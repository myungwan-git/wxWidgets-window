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
wxBU_LEFT : 왼쪽 정렬
*/

/*
MainFrame::MainFrame(const wxString &title) 
	// 최상위 widgets이므로 부모가 없다. 따라서 부모는 nullptr. 
	// pos, size는 기본사이즈로 등록되고 나머지2개는 생략가능하다.
	: wxFrame(nullptr, wxID_ANY, title)
{
	// 패널 없이 버튼을 바로 Window에 지정하면 모든 프레임크기를 다 먹어버린다.
	// 따라서 패널을 Window에 지정하고 지정된 패널을 버튼의 부모Window로 삼는다.
	wxPanel *panel = new wxPanel(this);

	// Button 생성
	// MainFrame을 부모로 삼기 위해  wxWindow인자에 MainFrame을 주입한다.
	// label인자의 경우 버튼 펄스에 나타날 텍스트를 지정한다.
	wxButton *button = new wxButton(panel, wxID_ANY, "ButtonName", wxPoint(150,50), wxSize(100,35), wxBU_LEFT);
	
	// CheckBox 생성
	wxCheckBox *checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBoxName", wxPoint(150, 100), wxSize(100,35),
										  wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);
	
	// StaticText 생성 ( 그냥 label 비슷한거 같기도... )
	// StaticText의 경우 대부분 기본크기를 사용하는게 좋다. 대부분이다 대부분. Style부분에는 정렬이 들어간다. 그리고 또?
	wxStaticText *staticText = new wxStaticText(panel, wxID_ANY, "StaticTextName", wxPoint(150, 150), wxSize(150,-1),
												wxALIGN_CENTER_HORIZONTAL);
	staticText->SetBackgroundColour(*wxLIGHT_GREY);

	// 사용자 입력 TextBox 생성
	// wxSize에서 -1 로 설정하면 기본 크기로 설정 된다. 또한, 패스워드 입력창 처럼 Style을 줄 수도 있다.
	wxTextCtrl *textCtrl = new wxTextCtrl(panel, wxID_ANY, "TextControl basicddddddd!", wxPoint(150,200), 
										  wxSize(100,-1), wxTE_PASSWORD);

	// Slider 생성 ( LABELS는 좀 지져분한 감이 있다. 굳이 숫자를 알아야 할 필요가? VALUE_LABEL은 괜찮네.
	wxSlider *slider = new wxSlider(panel, wxID_ANY, 30, 10, 100, wxPoint(150,250), wxSize(200, -1), wxSL_VALUE_LABEL);
	

	// Guage 생성 ( Gauge에 대한건 스타일이 많지 않다 )
	// 수직 Guage Style. ( 스타일은 wxGA_ 로 )
	wxGauge *gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(150,300), wxSize(200,-1));
	gauge->SetValue(slider->GetValue());

	// ComboBox에 들어갈 ArrayString 생성
	wxArrayString arrayString;
	arrayString.Add("Item C");
	arrayString.Add("Item B");
	arrayString.Add("Item A");
	// ComboBox 생성 ( drop down )
	// wxCB_로 Style 조정 
	wxChoice *choice = new wxChoice(panel, wxID_ANY, wxPoint(150,350), wxSize(200,-1), arrayString, wxCB_SORT);
	// 기본으로 0번째(Item C) 세팅. But show Item A because wxCB_SORT
	choice->Select(0);

	// Spin Control 생성 ( 이걸 보통 뭐라 하지..? )
	// wxSP_ Style ( wxSP_WRAP : Max/Min 초과시 Min/Max로 value wrapping )
	wxSpinCtrl *spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(150, 400), wxSize(100,-1), 
										  wxSP_WRAP, 0, 500, 100, "HI");

	// 목록상자 생성 ( Text List box 랄까 )
	// wxLB_ Style ( SORT 하면서 Select MULTIPLE 기능 )
	wxListBox *listBox = new wxListBox(panel, wxID_ANY, wxPoint(150,450), wxSize(100,-1), arrayString, 
									   wxLB_SORT | wxLB_MULTIPLE);
	
	// Radio Box 생성. 마지막 인자는 한줄에 몇개를 나열할 것인가. 0이면 무조건 다 집어 넣는 듯.
	wxRadioBox *radioBox = new wxRadioBox(panel, wxID_ANY, "Radio Box", wxPoint(150,500), wxSize(100,-1), 
										  arrayString,1, wxRB_GROUP);
	radioBox->Select(2);
}
*/