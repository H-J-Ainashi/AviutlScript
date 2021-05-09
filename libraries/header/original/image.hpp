/*
    image.hpp
    Copyright (C) 2021 …FGH_JKL… / Ainashi

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#pragma once
#include <cstdint>
#include "vec.hpp"

PixelRule(Px, Num)
class Image {
private:
    /* Variables */
    
    Px* pointer;
    int w, h, l;
    static Px DefaultVal;

public:
    
    /* Properties */
    int width() const { return w; }
    int height() const { return h; }
    int length() const { return l; }
    
    /* Iterators */
    Px* begin() { return pointer; }
    Px* end() { return pointer + l; }
    Px* cbegin() const { return pointer; }
    Px* cend() const { return pointer + l; }

    /* Pixel Access */
    void Set(const int& x, const int& y, const Px& val) { *(pointer + (y * w + x)) = val; }
    Px Get(const int& x, const int& y) const { return *(pointer + (y * w + x)); }

    /* Set Pixel under Secure */
    void SetSecure(const int& x, const int& y, const Px& val) {
        if (x < 0 || w <= x || y < 0 || h <= y);
        else return *(pointer + (y * w + x))
    }

    /* Get Pixel under Segure */
    Px GetSecure(const int& x, const int& y) const {
        if (x < 0 || w <= x || y < 0 || h <= y) return Px();
        else return *(pointer + (y * w + x));
    }

    /* Default Constractor with Vector */
    Image(const int& width, const int& height, Px* pointer) : 
        w(width), h(height), l(width * height), pointer(pointer) {}

    /* Initialize Constractor with Vector */
    Image(const int& width, const int& height, vector<Px> vector) :
        Image(width, height, vector.data()) {}
    
};
