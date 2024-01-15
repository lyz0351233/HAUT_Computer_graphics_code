//播放音乐代码必须要加上的包
#include <mmsystem.h> // 加上，不然PlaySound函数无法使用
#pragma comment(lib, "WINMM.LIB") // 加上，不然PlaySound函数无法使用

//音乐播放代码
	PlaySound(MAKEINTRESOURCE(IDR_WAVE1),AfxGetResourceHandle(),
	SND_ASYNC|SND_RESOURCE|SND_NODEFAULT);//单次播放// TODO: Add your command handler code here
//音乐暂停代码
PlaySound(NULL, NULL, SND_FILENAME); // TODO: Add your command handler code here
	

//清空画板代码
	CDC *pDC = GetDC();
    CRect rc;
    GetClientRect(&rc);
    pDC->FillSolidRect(&rc, RGB(255, 255, 255));
    ReleaseDC(pDC);
