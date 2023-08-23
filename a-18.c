#include <stdio.h>    

void main() {
    int i = 1, j = 1;//initializing a local variable  

    for (i = 1;i <= 3;i++) {
        for (j = 1;j <= 3;j++) {
            if (i == 2 && j == 2) {
                continue;//will continue loop of j only  
            }
            printf("%d %d\n", i, j);
        }
    }//end of for loop  

}


//如上面输出结果中所看到的，2 2这一行数据并没有打印在控制台上，这是因为在内部循环在i == 2和j == 2执行continue语句，跳过并进入下一个迭代。


