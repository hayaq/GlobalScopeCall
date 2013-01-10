GlobalScopeCall
===============

jquery風にグローバルスコープでの処理の実行を行うマクロ  
function()はただのかざり

```cpp
#include <stdio.h>
#include "jquery.h"

$(function(){
        printf("global scope\n");
});

int main(void){
        printf("main scope\n");
        return 0;
}
```
