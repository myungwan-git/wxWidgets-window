#include "app.h"
#include "main-frame.h"
#include "static-event.h"
#include "dynamic-event.h"
#include "mouse-event.h"
#include <wx/wx.h>

// Start
wxIMPLEMENT_APP(App);

bool App::OnInit() {
	// 여기에서 MainFrame 인스턴스 생성
	MainFrame *mainFrame = new MainFrame("Fuck GUI. Success setting the wxWidgets");
	// frame size. 실제 알맹이 부분의 크기를 설정한다. 무슨말이냐면 title bar는 제외하고 크기 지정함. 
	// 따라서 실제로는 더 크겠지.
	mainFrame->SetClientSize(400,700);
	// frame center 배치.
	mainFrame->Center();


	mainFrame->Show();

	return true;
}