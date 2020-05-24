

#ifndef BUTTON_H
#define BUTTON_H


#include <iostream>
#include <cstring>
#include "SFML/Graphics.hpp"

using namespace std;
using namespace sf;

enum button_states {
    BUTTON_IDLE = 0,
    BUTTON_PRESSED,
    BUTTON_HOVER,
};

class Button {
private:
    RectangleShape shape;
    Text textButton;

    Color idleColorButton;
    Color hoverColorButton;
    Color activeColorButton;

public:

    Button();

    Button(float x, float y, float width, float height, Font &f, const string& text,
           Color idleColor, Color hoverColor, Color activeColor, int initialState, float screenScale);

    void setButtonState(button_states buttonState);

    void render(RenderTexture *app);

    void setTextButton(const string& newString);

};


#endif // BUTTON_H
