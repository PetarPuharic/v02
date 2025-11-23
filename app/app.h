#pragma once

#include <cstdint>
// from <windows.h>
#define RGB(r,g,b) ((uint32_t)(((uint8_t)(r)|((uint16_t)((uint8_t)(g))<<8))|(((uint32_t)(uint8_t)(b))<<16)))

namespace vsite::oop::v2
{
/*
* class declaration
*/
	class color
	{
	private:
		double red;
		double green;
		double blue;
	public:
		color(double r = 0, double g = 0, double b = 0) {// constructor sa deafault vrijednostima
			set_red(r);
			set_green(g);
			set_blue(b);
		}

		double get_red() const; // const da nemjenja stanje objekta
		double get_green() const;
		double get_blue() const;

		void set_red(double r);
		void set_green(double g);
		void set_blue(double b);

		uint32_t get_color_ref();
		
		double get_luminance();

	};



}
