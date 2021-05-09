/*
    mixture.hpp
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
#include <utility>
#include <algorithm>
#include "pixel.hpp"


class Mixture {
public:
    static ByteArgb Coler(initializer_list<pair<ByteArgb, byte>> mixtures) {
        int sum = 0;
        int argb_buf[4] = { 0 };
        vector<Argb<int>> buf = vector<Argb<int>>();
        ByteArgb ans = ByteArgb();

        for_each(mixtures.begin(), mixtures.end(), [&](pair<ByteArgb, byte> mix) {
            for (int i = 0; i < 4; ++i) 
                argb_buf[i] += static_cast<int>(mix.first[i]) * static_cast<int>(mix.second);
            sum += static_cast<int>(mix.second);
        });
        for (int i = 0; i < 4; ++i) 
            argb_buf[i] += (sum >> 1);
        for (int i = 0; i < 4; ++i) 
            ans[i] = static_cast<byte>(argb_buf[i] / sum);
        return ans;
    }
};