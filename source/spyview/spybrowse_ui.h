// generated by Fast Light User Interface Designer (fluid) version 1.0107

#ifndef spybrowse_ui_h
#define spybrowse_ui_h
#include <FL/Fl.H>
#include "Fl_Listbox.H"
#include "spybrowse.h"
#include <Fl/Fl_File_Chooser.H>
#include <stdlib.h>
#include <unistd.h>
#include <FL/Fl_Double_Window.H>
extern Fl_Double_Window *win;
#include <FL/Fl_Group.H>
#include <FL/Fl_Output.H>
extern Fl_Output *directory;
#include <FL/Fl_Button.H>
extern void fb_cb(Fl_Listbox*, void*);
extern Fl_Listbox *fb;
#include <FL/Fl_Input.H>
extern void refreshb_cb(Fl_Input*, void*);
extern Fl_Input *patternbox;
extern void viewb_cb(Fl_Button*, void*);
extern Fl_Button *viewb;
extern void view2b_cb(Fl_Button*, void*);
extern Fl_Button *view2b;
extern void refreshb_cb(Fl_Button*, void*);
extern Fl_Button *refreshb;
extern Fl_Button *exitb;
#include <FL/Fl_Light_Button.H>
extern Fl_Light_Button *mtx;
extern Fl_Light_Button *pgm;
extern Fl_Light_Button *dat;
extern Fl_Light_Button *other;
Fl_Double_Window* make_window();
#endif
