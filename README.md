# Advanced-LED-control-system
Develop a C program for a microcontroller that simulates an advanced LED control system. The system should use nested structures to represent detailed control aspects of LEDs, including state, brightness, and color, as well as group settings for multiple LEDs.

<h1>Compilation & Testing</h1>
<h2>To compile this program in a standard C environment:</h2>
<ol>
    <li>Save the code in a file named led_control.c.</li>
    <li>Compile the code using a GCC compiler:<br>
    <strong>2gcc -o led_control led_control.c<strong></li>
    <li>Run the compiled program:<br>
    <strong>./led_control<strong></li>
<ol>
<p>This program will output the initial and updated status of the LED group as per the changes made by the <strong>updateLEDGroupSettings</strong> function.</p>

<h4>For microcontroller environments (e.g., with an embedded IDE like <strong>STM32CubeIDE or Keil):<strong></h4>
<ol>
    <li>Create a new project for your microcontroller.</li>
    <li>Add this C code to the project files.</li>
    <li>Ensure you have a proper setup for input/output functions (UART or other communication interfaces) for the printf statements to work.</li>
    <li>Build and flash the program to the microcontroller.</li>
</ol>

<h1>Explanation:</h1>
<ul>
    <li>LEDSettings Structure: Represents the individual LED’s state (ON/OFF), brightness, and color.</li>
    <li>LEDGroup Structure: Contains both individual LED settings and group-wide settings (groupState and groupBrightness).</li>
    <li>initLEDGroup Function: Initializes the LED group to default values (all OFF, brightness = 0, and no color).</li>
    <li>updateLEDGroupSettings Function: Updates both the individual LED and the group's settings based on the function parameters.</li>
    <li>displayLEDGroupStatus Function: Prints the status of both the individual LED and the group, including brightness and color (RGB encoded).</li>
    <li>Main Function: Initializes an LEDGroup, displays the initial settings, updates the settings, and displays the updated status.</li>
</ul>