// 
// Copyright (c) 2003-2010, MIST Project, Nagoya University
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and/or other materials provided with the distribution.
// 
// 3. Neither the name of the Nagoya University nor the names of its contributors
// may be used to endorse or promote products derived from this software
// without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
// FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
// IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 

// generated by Fast Light User Interface Designer (fluid) version 1.0106

#ifndef image_test_window_h
#define image_test_window_h
#include <FL/Fl.H>
#include "image_test.h"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_File_Chooser.H>
#include <FL/Fl_Progress.H>

class image_test_window {
public:
  image_test_window();
  Fl_Double_Window *main_window;
  image_draw_area *draw_area;
  static Fl_Menu_Item menu_[];
private:
  inline void cb_Open_i(Fl_Menu_*, void*);
  static void cb_Open(Fl_Menu_*, void*);
  inline void cb_Open1_i(Fl_Menu_*, void*);
  static void cb_Open1(Fl_Menu_*, void*);
  inline void cb_Save_i(Fl_Menu_*, void*);
  static void cb_Save(Fl_Menu_*, void*);
  inline void cb_Save1_i(Fl_Menu_*, void*);
  static void cb_Save1(Fl_Menu_*, void*);
  inline void cb_Exit_i(Fl_Menu_*, void*);
  static void cb_Exit(Fl_Menu_*, void*);
  inline void cb_Euclidean_i(Fl_Menu_*, void*);
  static void cb_Euclidean(Fl_Menu_*, void*);
  inline void cb_Euclidean1_i(Fl_Menu_*, void*);
  static void cb_Euclidean1(Fl_Menu_*, void*);
  inline void cb_Figure_i(Fl_Menu_*, void*);
  static void cb_Figure(Fl_Menu_*, void*);
  inline void cb_Thresholding_i(Fl_Menu_*, void*);
  static void cb_Thresholding(Fl_Menu_*, void*);
  inline void cb_Labeling_i(Fl_Menu_*, void*);
  static void cb_Labeling(Fl_Menu_*, void*);
  inline void cb_Labeling1_i(Fl_Menu_*, void*);
  static void cb_Labeling1(Fl_Menu_*, void*);
  inline void cb_Thinning_i(Fl_Menu_*, void*);
  static void cb_Thinning(Fl_Menu_*, void*);
  inline void cb_Median_i(Fl_Menu_*, void*);
  static void cb_Median(Fl_Menu_*, void*);
  inline void cb_Mode_i(Fl_Menu_*, void*);
  static void cb_Mode(Fl_Menu_*, void*);
  inline void cb_Erosion_i(Fl_Menu_*, void*);
  static void cb_Erosion(Fl_Menu_*, void*);
  inline void cb_Dilation_i(Fl_Menu_*, void*);
  static void cb_Dilation(Fl_Menu_*, void*);
  inline void cb_Opening_i(Fl_Menu_*, void*);
  static void cb_Opening(Fl_Menu_*, void*);
  inline void cb_Closing_i(Fl_Menu_*, void*);
  static void cb_Closing(Fl_Menu_*, void*);
  inline void cb_Erosion1_i(Fl_Menu_*, void*);
  static void cb_Erosion1(Fl_Menu_*, void*);
  inline void cb_Dilation1_i(Fl_Menu_*, void*);
  static void cb_Dilation1(Fl_Menu_*, void*);
  inline void cb_Opening1_i(Fl_Menu_*, void*);
  static void cb_Opening1(Fl_Menu_*, void*);
  inline void cb_Closing1_i(Fl_Menu_*, void*);
  static void cb_Closing1(Fl_Menu_*, void*);
  inline void cb_Reso_i(Fl_Menu_*, void*);
  static void cb_Reso(Fl_Menu_*, void*);
  inline void cb_Reso1_i(Fl_Menu_*, void*);
  static void cb_Reso1(Fl_Menu_*, void*);
  inline void cb_Reso2_i(Fl_Menu_*, void*);
  static void cb_Reso2(Fl_Menu_*, void*);
  inline void cb_Reso3_i(Fl_Menu_*, void*);
  static void cb_Reso3(Fl_Menu_*, void*);
  inline void cb_Reso4_i(Fl_Menu_*, void*);
  static void cb_Reso4(Fl_Menu_*, void*);
  inline void cb_Reso5_i(Fl_Menu_*, void*);
  static void cb_Reso5(Fl_Menu_*, void*);
  inline void cb_Reso6_i(Fl_Menu_*, void*);
  static void cb_Reso6(Fl_Menu_*, void*);
  inline void cb_Reso7_i(Fl_Menu_*, void*);
  static void cb_Reso7(Fl_Menu_*, void*);
  inline void cb_Reso8_i(Fl_Menu_*, void*);
  static void cb_Reso8(Fl_Menu_*, void*);
  inline void cb_Reso9_i(Fl_Menu_*, void*);
  static void cb_Reso9(Fl_Menu_*, void*);
  inline void cb_Resoa_i(Fl_Menu_*, void*);
  static void cb_Resoa(Fl_Menu_*, void*);
  inline void cb_Resob_i(Fl_Menu_*, void*);
  static void cb_Resob(Fl_Menu_*, void*);
  inline void cb_Interlace_i(Fl_Menu_*, void*);
  static void cb_Interlace(Fl_Menu_*, void*);
  inline void cb_Interlace1_i(Fl_Menu_*, void*);
  static void cb_Interlace1(Fl_Menu_*, void*);
  inline void cb_Expand_i(Fl_Menu_*, void*);
  static void cb_Expand(Fl_Menu_*, void*);
  inline void cb_Shrink_i(Fl_Menu_*, void*);
  static void cb_Shrink(Fl_Menu_*, void*);
  inline void cb_Boundary_i(Fl_Menu_*, void*);
  static void cb_Boundary(Fl_Menu_*, void*);
  inline void cb_Boundary1_i(Fl_Menu_*, void*);
  static void cb_Boundary1(Fl_Menu_*, void*);
public:
  Fl_Progress *progress_bar;
  void show( );
};
#endif
