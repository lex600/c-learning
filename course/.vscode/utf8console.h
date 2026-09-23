/*
 * utf8console.h —— 只在编译时由 gcc -include 自动包含，你不需要在代码里写 #include
 *
 * 【它解决什么问题】
 * VS Code 保存的源文件是 UTF-8 编码，但中文 Windows 的控制台默认按 GBK 解码。
 * 调试时程序会弹出一个独立的黑窗口（externalConsole），中文提示词就会变成乱码。
 * 这个文件在程序启动瞬间把控制台输出编码切成 UTF-8，乱码就没了。
 *
 * 【为什么用 constructor】
 * __attribute__((constructor)) 让这个函数在 main 之前自动执行，
 * 所以你的代码一行都不用改。
 *
 * 【删掉它会怎样】
 * 什么都不会坏，只是调试时黑窗口里的中文可能显示成乱码。
 */

#ifndef UTF8_CONSOLE_H
#define UTF8_CONSOLE_H

#ifdef _WIN32
#include <windows.h>

__attribute__((constructor))
static void enable_utf8_console(void)
{
    SetConsoleOutputCP(65001);   /* 控制台输出改用 UTF-8 */
}

#endif /* _WIN32 */

#endif /* UTF8_CONSOLE_H */
