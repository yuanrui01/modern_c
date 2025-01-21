#include <stdio.h>
#include "linefile.h"  // 包含宏定义

int main() {
    const char *str = LINE_FILE;
    printf("%s\n", str);  // 输出当前行号和文件名
    return 0;
}
