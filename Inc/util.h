/*
 * Copyright (c) 2022 Ryan Wenger.
 * This file is provided AS-IS with no warranty.
 * Just some usefule macro definitions for the project
 */

#ifndef NUCLEOPONG_UTIL_H
#define NUCLEOPONG_UTIL_H

#ifdef __cplusplus
extern "C" {
#endif

#define __CONCAT(_x, _y)    _x##_y
#define CONCAT(_x, _y)     __CONCAT(_x,_y)

#ifdef __cplusplus
}
#endif
#endif //NUCLEOPONG_UTIL_H