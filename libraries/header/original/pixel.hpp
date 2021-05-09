/*
    pixel.hpp
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
#include <concepts>
#include <utility>
#include "vec.hpp"
using namespace std;

template<typename Ty>
struct Argb : Vec<Ty, 4> {
public:
    using Val = Ty;
    ColVal(Ty, Blue, 0);
    ColVal(Ty, Green, 1);
    ColVal(Ty, Red, 2);
    ColVal(Ty, Alpha, 3);
};

using ByteArgb = Argb<byte>;
