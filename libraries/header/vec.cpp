/*
    vec.anm
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

#define ColVal(Type, Name, idx) \
    Type& Name() { return base[idx]; } \
    Type  Name() const { return base[idx]; }

#include <cstddef>

/* Type Definites */
template<typename Ty, size_t Sz>
struct Vec {
private:
    Ty val[Sz];
public:
    size_t Size() { return Sz; };
    Ty At(const size_t& idx) const {
        return ((idx < 0 || Sz <= idx) ? 0 : val[idx]);
    }
    Ty& operator[](size_t idx) {
        return val[idx];
    }
    Ty operator[](size_t idx) const {
        return val[idx];
    }
};

template<typename Ty>
struct Argb : Vec<Ty, 4> {
public:
    ColVal(Ty, Blue, 0);
    ColVal(Ty, Green, 1);
    ColVal(Ty, Red, 2);
    ColVal(Ty, Alpha, 3);
};
