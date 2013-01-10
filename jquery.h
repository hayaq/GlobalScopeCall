#ifndef $
#define function()
#define __cls(a,b) a##b
#define _cls(a,b) __cls(a,b)
#define cls(x) _cls(x,__LINE__)
#define $(proc) static struct cls(_){ cls(_)(){ proc } }cls(__)
#endif
