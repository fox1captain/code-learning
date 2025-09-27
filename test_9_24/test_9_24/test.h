#pragma once //这种写法效果和下面的写法一样，表示test.h只能被编译一次

#ifndef __TEST_H__
#define __TEST_H__
int Add(int x, int y);

#endif

//这种写法用于防止头文件被重复包含