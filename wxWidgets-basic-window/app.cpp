#include "app.h"
#include "main-frame.h"
#include <wx/wx.h>

// Start
wxIMPLEMENT_APP(App);

bool App::OnInit() {
	// ���⿡�� MainFrame �ν��Ͻ� ����
	MainFrame *mainFrame = new MainFrame("Fuck GUI. Success setting the wxWidgets");
	// frame size. ���� �˸��� �κ��� ũ�⸦ �����Ѵ�. �������̳ĸ� title bar�� �����ϰ� ũ�� ������. 
	// ���� �����δ� �� ũ����.
	mainFrame->SetClientSize(400,500);
	// frame center ��ġ.
	mainFrame->Center();

	mainFrame->Show();

	return true;
}