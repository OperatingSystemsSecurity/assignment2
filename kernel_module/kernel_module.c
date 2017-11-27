#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("MIT");
MODULE_AUTHOR("Hendrik Werner, Aniek Den Teuling");
MODULE_DESCRIPTION("Access register CR4.");

static int __init hello_init(void) {
	unsigned long long result;
	__asm__("movq %%cr4, %%rax\n" : "=a"(result));
	printk(KERN_INFO "Value of CR4 = %llx\n", result);
	return 0;
}

static void __exit hello_cleanup(void) {
	printk(KERN_INFO "Cleaning up module.\n");
}

module_init(hello_init);
module_exit(hello_cleanup);