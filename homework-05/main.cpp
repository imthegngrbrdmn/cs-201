#include"truncstruct.hpp"
#include<iostream>
#include<FL/Fl.h>
#include<FL/Fl_Window.h>
#include<FL/Fl_Box.h>
#include<FL/Fl_Input.h>
#include<FL/Fl_Output.h>
#include<FL/Fl_Button.h>
#include<FL/Fl_Text_Display.H>
int main(int argc, char** argv)
{
	Fl_Window window(400, 400, "Truncate");

	Fl_Text_Buffer* buff = new Fl_Text_Buffer();
	//Fl_Text_Display* disp = new Fl_Text_Display(10, 10, 640, 480);
	//disp->buffer(buff);                 // attach text buffer to display widget
	//buff->text("Insert text & press button.");   // add some text to buffer
	
	window.show();
	return Fl::run();
}