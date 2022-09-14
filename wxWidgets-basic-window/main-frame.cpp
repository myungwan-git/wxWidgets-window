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
	// �ֻ��� widgets�̹Ƿ� �θ� ����. ���� �θ�� nullptr. 
	// pos, size�� �⺻������� ��ϵǰ� ������2���� ���������ϴ�.
	: wxFrame(nullptr, wxID_ANY, title)
{

}