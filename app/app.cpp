#include "app.h"
#include <algorithm>

namespace vsite::oop::v2
{
/*
* class member function implementations
*/
	double color::get_red() const {
		return red;
	}
	double color::get_green() const {
		return green;
	}
	double color::get_blue() const {
		return blue;
	}

	//postavljanje vrijednosti sa ograni?enjem na [0,1], koristi se std::clamp iz <algorithm>
	// ako je 255 stavljen max, onda se treba promjeniti get_color_ref
	void color::set_red(double r) {
		red = std::clamp(r, 0.0, 1.0);
	}
	void color::set_green(double g) {
		green = std::clamp(g, 0.0, 1.0);
	}
	void color::set_blue(double b) {
		blue = std::clamp(b, 0.0, 1.0);
	}


	uint32_t color::get_color_ref() {
		int r = static_cast<int>(red * 255);
		int g = static_cast<int>(green * 255);
		int b = static_cast<int>(blue * 255);

		return RGB(r, g, b);
	}
	double color::get_luminance() {
		return 0.2126 * red + 0.7152 * green + 0.0722 * blue; //vrijednosti iz test.cpp
	}

} // namespace