# Colorful Animated Text Messages in C

This C program displays colorful, animated text messages using graphics. The program renders multiple messages on the screen with alternating colors, creating a flashing or dynamic color-changing effect. Messages include greetings and expressions of love and gratitude.

## Features

- **Custom Messages**: Displays the following messages:
  - "Merry Christmas Dad"
  - "I LOVE YOU!"
  - "Thanks for everything"
- **Animated Colors**: Characters alternate between two colors to create an animated, flashing effect.
- **Infinite Loop Animation**: The program runs continuously, updating the colors at intervals to create a smooth color transition effect.

## Code Overview

- **Graphics Library**: Uses the `graphics.h` library (typically available in Turbo C/C++ environments).
- **Color Alternation**: Colors are toggled by an `inverse` function, which swaps between two colors for animation.
- **Positioning**: The `outtextxy()` function positions each character on the screen at specific coordinates.

## Code

```c
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

int inverse(int c)
{
    if(c == 2) return 4;
    if(c == 4) return 2;
}

// Function for printing message with colored text
void printMsg()
{
    int gdriver = DETECT, gmode, i;
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    int A = 4;
    int B = 2;

    settextstyle(3, 0, 70);

    do
    {
        // Display text with alternating colors
        setcolor(B); outtextxy(20, 60, "M");
        setcolor(A); outtextxy(50, 60, "e");
        // Additional letters follow a similar pattern
        // Example message lines for "Merry Christmas Dad"
        // and "I LOVE YOU!"

        delay(600);  // Pause for color effect
        A = inverse(A);
        B = inverse(B);

    } while(true);
}

int main()
{
    printMsg();
    return 0;
}
```

## Usage

1. **Compile the Program**:
   - This program requires Turbo C/C++ with `graphics.h` support.
   - Save the file and compile using Turbo C/C++:
     ```plaintext
     tcc -o colorful_text colorful_text.c
     ```

2. **Run the Program**:
   - Run the executable:
     ```plaintext
     colorful_text
     ```

3. **Exit**:
   - The program runs in an infinite loop. Press `Ctrl + C` to exit.

## Notes

- **Graphics Requirements**: This program is intended for use with Turbo C/C++ or similar environments that support the `graphics.h` library.
- **Infinite Loop**: The color animation runs indefinitely. You can modify the loop or add conditions to terminate it after a set time.

## Example Output

- Displays messages such as "Merry Christmas Dad" and "I LOVE YOU!" with each character appearing in alternating colors for a festive, animated effect.