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

// NOTE
// This file is auto-generated by using 'make_css_properties.py'.
// Please take care when you modify this file mannually.

#include "css/cssinitial.h"

namespace hfcl {

CssInitial* CssInitial::s_singleton = NULL;

CssInitial::CssInitial ()
{
    memset(&m_data, 0, sizeof(m_data));
    memset(&m_arraysize, 0, sizeof(m_arraysize));

    // Initial values
    m_values[PID_BACKGROUND_ATTACHMENT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_SCROLL);

    m_values[PID_BACKGROUND_COLOR] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_TRANSPARENT);

    m_values[PID_BACKGROUND_IMAGE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_BACKGROUND_POSITION_X] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_PERCENTAGE, PVK_USER_DATA);
    m_data[PID_BACKGROUND_POSITION_X].r = 0;

    m_values[PID_BACKGROUND_POSITION_Y] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_PERCENTAGE, PVK_USER_DATA);
    m_data[PID_BACKGROUND_POSITION_Y].r = 0;

    m_values[PID_BACKGROUND_REPEAT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_REPEAT);

    m_values[PID_BORDER_BOTTOM_COLOR] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_RGB, PVK_USER_DATA);
    m_data[PID_BORDER_BOTTOM_COLOR].u = 0;

    m_values[PID_BORDER_BOTTOM_LEFT_RADIUS] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_BORDER_BOTTOM_LEFT_RADIUS].r = 0;
    m_arraysize[PID_BORDER_BOTTOM_LEFT_RADIUS] = 2;

    m_values[PID_BORDER_BOTTOM_RIGHT_RADIUS] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_BORDER_BOTTOM_RIGHT_RADIUS].r = 0;
    m_arraysize[PID_BORDER_BOTTOM_RIGHT_RADIUS] = 2;

    m_values[PID_BORDER_BOTTOM_STYLE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_BORDER_BOTTOM_WIDTH] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_MEDIUM);

    m_values[PID_BORDER_LEFT_COLOR] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_RGB, PVK_USER_DATA);
    m_data[PID_BORDER_LEFT_COLOR].u = 0;

    m_values[PID_BORDER_LEFT_STYLE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_BORDER_LEFT_WIDTH] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_MEDIUM);

    m_values[PID_BORDER_RIGHT_COLOR] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_RGB, PVK_USER_DATA);
    m_data[PID_BORDER_RIGHT_COLOR].u = 0;

    m_values[PID_BORDER_RIGHT_STYLE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_BORDER_RIGHT_WIDTH] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_MEDIUM);

    m_values[PID_BORDER_TOP_COLOR] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_RGB, PVK_USER_DATA);
    m_data[PID_BORDER_TOP_COLOR].u = 0;

    m_values[PID_BORDER_TOP_LEFT_RADIUS] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_BORDER_TOP_LEFT_RADIUS].r = 0;
    m_arraysize[PID_BORDER_TOP_LEFT_RADIUS] = 2;

    m_values[PID_BORDER_TOP_RIGHT_RADIUS] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_BORDER_TOP_RIGHT_RADIUS].r = 0;
    m_arraysize[PID_BORDER_TOP_RIGHT_RADIUS] = 2;

    m_values[PID_BORDER_TOP_STYLE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_BORDER_TOP_WIDTH] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_MEDIUM);

    m_values[PID_BOTTOM] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_CLEAR] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_CLIP] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_COLOR] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_RGB, PVK_USER_DATA);
    m_data[PID_COLOR].u = 0;

    m_values[PID_CONTENT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_COUNTER_INCREMENT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_COUNTER_RESET] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_CURSOR] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_DIRECTION] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_LTR);

    m_values[PID_DISPLAY] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_INLINE);

    m_values[PID_FLOAT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_FONT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_USE_OTHERS);

    m_values[PID_FONT_FAMILY] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_SERIF);

    m_values[PID_FONT_SIZE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_FONT_SIZE].r = 14;

    m_values[PID_FONT_STYLE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_FONT_VARIANT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_FONT_WEIGHT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_HANGING_PUNCTUATION] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_HEIGHT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_HVML_PSEUDO] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_JUSTIFY_ALL);

    m_values[PID_HYPHENS] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_MANUAL);

    m_values[PID_LEFT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_LETTER_SPACING] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_LINE_BREAK] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_LINE_HEIGHT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_LIST_STYLE_IMAGE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_LIST_STYLE_POSITION] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_OUTSIDE);

    m_values[PID_LIST_STYLE_TYPE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_DISC);

    m_values[PID_MARGIN_BOTTOM] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_MARGIN_BOTTOM].r = 0;

    m_values[PID_MARGIN_LEFT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_MARGIN_LEFT].r = 0;

    m_values[PID_MARGIN_RIGHT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_MARGIN_RIGHT].r = 0;

    m_values[PID_MARGIN_TOP] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_MARGIN_TOP].r = 0;

    m_values[PID_MAX_HEIGHT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_MAX_WIDTH] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_MIN_HEIGHT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_MIN_HEIGHT].r = 0;

    m_values[PID_MIN_WIDTH] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_MIN_WIDTH].r = 0;

    m_values[PID_OPACITY] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_ALPHAVALUE, PVK_USER_DATA);
    m_data[PID_OPACITY].r = 1;

    m_values[PID_ORPHANS] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_INTEGER, PVK_USER_DATA);
    m_data[PID_ORPHANS].i = 2;

    m_values[PID_OUTLINE_COLOR] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_INVERT);

    m_values[PID_OUTLINE_STYLE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_INVERT);

    m_values[PID_OUTLINE_WIDTH] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_MEDIUM);

    m_values[PID_OVERFLOW] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_VISIBLE);

    m_values[PID_OVERFLOW_WRAP] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_PADDING_BOTTOM] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_PADDING_BOTTOM].r = 0;

    m_values[PID_PADDING_LEFT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_PADDING_LEFT].r = 0;

    m_values[PID_PADDING_RIGHT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_PADDING_RIGHT].r = 0;

    m_values[PID_PADDING_TOP] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_PADDING_TOP].r = 0;

    m_values[PID_PAGE_BREAK_AFTER] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_PAGE_BREAK_BEFORE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_PAGE_BREAK_INSIDE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_POSITION] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_STATIC);

    m_values[PID_QUOTES] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_RIGHT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_TAB_SIZE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_NUMBER, PVK_USER_DATA);
    m_data[PID_TAB_SIZE].r = 8;

    m_values[PID_TEXT_ALIGN_ALL] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_START);

    m_values[PID_TEXT_ALIGN_LAST] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_TEXT_COMBINE_UPRIGHT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_TEXT_DECORATION] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_TEXT_INDENT] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_LENGTH_PX, PVK_USER_DATA);
    m_data[PID_TEXT_INDENT].r = 0;

    m_values[PID_TEXT_JUSTIFY] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_TEXT_ORIENTATION] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_MIXED);

    m_values[PID_TEXT_TRANSFORM] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NONE);

    m_values[PID_TOP] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_UNICODE_BIDI] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_VERTICAL_ALIGN] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_BASELINE);

    m_values[PID_VISIBILITY] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_VISIBLE);

    m_values[PID_WHITE_SPACE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_WIDOWS] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_INTEGER, PVK_USER_DATA);
    m_data[PID_WIDOWS].i = 2;

    m_values[PID_WIDTH] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

    m_values[PID_WORD_BREAK] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_WORD_SPACING] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_NORMAL);

    m_values[PID_WRITING_MODE] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_INHERITED, PVT_KEYWORD, PVK_HORIZONTAL_TB);

    m_values[PID_Z_INDEX] = MAKE_CSS_PPT_INITIAL_VALUE(CSS_PPT_VALUE_MARK_NOT_INHERITED, PVT_KEYWORD, PVK_AUTO);

}

} // namespace hfcl
