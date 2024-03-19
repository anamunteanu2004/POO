#include "Canvas.h"

int main() {
    Canvas canvas(20, 10);

    canvas.DrawLine(1, 1, 18, 8, '*'); 
    canvas.DrawRect(2, 2, 10, 5, '#'); 
    canvas.FillRect(1, 2, 18, 5, '?'); 
    canvas.DrawCircle(15, 7, 4, '@'); 
    canvas.FillCircle(5, 7, 3, '+'); 
    //o forma oarecare

    canvas.Print();

    return 0;
}
