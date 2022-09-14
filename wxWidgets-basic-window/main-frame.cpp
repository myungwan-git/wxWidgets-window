#include "main-frame.h"
#include <wx/wx.h>
/*
//--------------------------- wxFrame Class argument constructor.
wxFrame(wxWindow *parent,
			wxWindowID id,
			const wxString& title,
			const wxPoint& pos = wxDefaultPosition,
			const wxSize& size = wxDefaultSize,
			long style = wxDEFAULT_FRAME_STYLE,
			const wxString& name = wxASCII_STR(wxFrameNameStr))
*/

MainFrame::MainFrame(const wxString &title) 
	// 최상위 widgets이므로 부모가 없다. 따라서 부모는 nullptr. 
	// pos, size는 기본사이즈로 등록되고 나머지2개는 생략가능하다.
	: wxFrame(nullptr, wxID_ANY, title)
{

}