#include <linux/init.h>     	//这个头文件包含了你的模块初始化与清除的函数
#include <linux/module.h>  	 //这个头文件包含了许多符号与函数的定义，这些符号与函数多与加载模块有关
MODULE_LICENSE("GPL");            // "GPL" 是指明了 这是GNU General Public License的任意版本

static int __init init_modules(void)
{
	printk("hello world\n");
	return 0;
}

static void __exit exit_modules(void)
{
	printk("goodbye\n");
}

module_init(init_modules);
module_exit(exit_modules);
