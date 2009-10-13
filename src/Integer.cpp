/*
 * Integer.cpp
 *
 * Copyright (c) 2009 Jonathan Beck All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA 
 */

#include <stdlib.h>
#include <plist/Integer.h>

namespace PList
{

Integer::Integer() : Node(PLIST_UINT)
{
}

Integer::Integer(uint64_t i) : Node(PLIST_UINT)
{
    plist_set_uint_val(_node, i);
}

Integer::~Integer()
{
}

void Integer::SetValue(uint64_t i)
{
    plist_set_uint_val(_node, i);
}

uint64_t Integer::GetValue()
{
    uint64_t i = 0;
    plist_get_uint_val(_node, &i);
    return i;
}

};