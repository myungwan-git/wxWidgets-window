//#include "mouse-event.h"
//
//MainFrame::MainFrame(const wxString &title)
//	: wxFrame(nullptr, wxID_ANY, title) {
//
//	wxPanel *panel = new wxPanel(this);
//	wxButton *button = new wxButton(panel, wxID_ANY, "Button", wxPoint(100,100), wxSize(200,100));
//
//	//panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::OnMouseEvent, this);
//	// �̷��� ������(MOTION)�� �ϳ��ϳ� ������ ���¹ٿ� ��ﶧ ��¦�� �����Ÿ���.
//	// �׷��� CreateStatusBar() �� ���¹ٸ� �������� ���� �ϴ��� 2���� �̿�����.
//	// �̺�Ʈ�� �߻��Ҷ����� ������, ������ ����������� �����ε� �ϴ�.
//	// ���� MOTION �̺�Ʈ�� panel�� �������ָ� �ٸ� ��ü(EX button)���� �ö������� �������� �ʴ´�.
//	// ��, event.GetPosition�϶��� �׷���. wxGetMousePosition���� �����ϸ� ����� �� ��ġ�� ����.
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
//	// ���� �ٸ��� ����� ���� ���콺 ��ġ�� ���� ����. �ٽ� ����, â�� �������� �ű�� �׸�ŭ x���� �����Ѵ�.
//	wxPoint point = wxGetMousePosition();
//	// ���� ���°� �ȴٸ� Client���忡�� ��ũ������ ��ġ�� ���Բ� �� �� �ִ�.
//	point = this->ScreenToClient(point);
//
//	wxString str = wxString::Format("Mouse Left Click Position x = %d , y = %d", point.x, point.y);
//	wxLogStatus(str);
//}
