/*
** HFCL - HybridOS Foundation Class Library
**
** Copyright (C) 2018 Beijing FMSoft Technologies Co., Ltd.
**
** This file is part of HFCL.
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "css/csscomputed.h"

namespace hfcl {

CssComputed::~CssComputed ()
{
    memset(&m_values, 0, sizeof(m_values));
    memset(&m_data, 0, sizeof(m_data));
}

bool CssComputed::getProperty (CssPropertyIds pid, DWORD32 *value,
        HTData *data)
{
    if (value) {
        *value = m_values[pid];
    }
    if (data) {
        *data = m_data[pid];
    }
    return true;
}

bool CssComputed::setProperty (CssPropertyIds pid, DWORD32 value,
    HTData data)
{
    m_values[pid] = value;
    m_data[pid] = data;
    return true;
}

} // namespace hfcl
