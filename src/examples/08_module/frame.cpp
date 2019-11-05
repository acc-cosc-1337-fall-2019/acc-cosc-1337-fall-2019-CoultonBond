#include "frame.h"
#include "panel.h"
//frame.cpp
Frame::Frame()

	: wxFrame(NULL, wxID_ANY, "Hello World",
		wxDefaultPosition, wxSize(1280, 760))

{
	auto panel = new Panel(this);
}