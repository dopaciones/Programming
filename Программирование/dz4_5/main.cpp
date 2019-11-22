#include <Windows.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    HWND hWnd = GetConsoleWindow();
    HDC hDC = GetDC(hWnd);
    HPEN pen = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
    SelectObject(hDC, pen);
    MoveToEx(hDC, 50, 350, NULL);
    LineTo(hDC, 950, 350);
    MoveToEx(hDC, 500, 150, NULL);
    LineTo(hDC, 500, 1000);
    MoveToEx(hDC, 500, 150, NULL);
    LineTo(hDC, 490, 170);
    MoveToEx(hDC, 500, 150, NULL);
    LineTo(hDC, 510, 170);
    MoveToEx(hDC, 950, 350, NULL);
    LineTo(hDC, 930, 340);
    MoveToEx(hDC, 950, 350, NULL);
    LineTo(hDC, 930, 360);
    MoveToEx(hDC, 500, 350, 0);
    for (double x = -8.5; x < 8.5; x += 0.001) {
        SetPixel(hDC, 50 * x + 500, -50 * sin(x) + 350, RGB(255, 255, 255));
    }
    ReleaseDC(hWnd, hDC);

    return 0;
}

