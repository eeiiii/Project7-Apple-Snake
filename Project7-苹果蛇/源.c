#include "lib.h"

/// <summary>
/// zhushi
/// </summary>
/// <returns>fanhui</returns>
int isExitgame()
{
	int x;
	x = MessageBox(NULL, TEXT("是否要退出游戏"), TEXT("对话框"), MB_YESNO);
	if (x == IDYES)
	{
		return 1;
	}
	else { return 0; }

}

/// <summary>
/// 演示提交
/// </summary>
void aaaa() {
	printf("%s", "我要狠狠地透百川");
}

int main(void) {
	int r = isExitgame();
    printcf(15, "%d\n", r);
    
}
