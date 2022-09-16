//#include "mouse-event.h"
//
//MainFrame::MainFrame(const wxString &title)
//	: wxFrame(nullptr, wxID_ANY, title) {
//
//	wxPanel *panel = new wxPanel(this);
//	wxButton *button = new wxButton(panel, wxID_ANY, "Button", wxPoint(100,100), wxSize(200,100));
//
//	//panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::OnMouseEvent, this);
//	// 이렇게 움직임(MOTION)을 하나하나 추적해 상태바에 띄울때 살짝씩 깜빡거린다.
//	// 그럴땐 CreateStatusBar() 로 상태바를 생성하지 말고 하단의 2줄을 이용하자.
//	// 이벤트가 발생할때마다 띄우느냐, 무조건 띄워놓느냐의 차이인듯 하다.
//	// 또한 MOTION 이벤트를 panel에 지정해주면 다른 객체(EX button)위에 올라갔을때는 추적하지 않는다.
//	// 단, event.GetPosition일때만 그렇다. wxGetMousePosition으로 설정하면 모니터 상에 위치를 뱉어낸다.
//	panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
//	//CreateStatusBar();
//	wxStatusBar *statusBar = CreateStatusBar();
//	statusBar->SetDoubleBuffered(true);
//
//	button->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
//
//	
//}
//
//
//void MainFrame::OnMouseEvent(wxMouseEvent &event) {
//	//wxPoint point = event.GetPosition();
//	// 위와 다르게 모니터 상의 마우스 위치를 고대로 뱉어낸다. 다시 말해, 창을 왼쪽으로 옮기면 그만큼 x값도 감소한다.
//	wxPoint point = wxGetMousePosition();
//	// 고대로 뱉어내는게 싫다면 Client입장에서 스크린상의 위치만 뱉어내게끔 할 수 있다.
//	point = this->ScreenToClient(point);
//
//	wxString str = wxString::Format("Mouse Left Click Position x = %d , y = %d", point.x, point.y);
//	wxLogStatus(str);
//}
