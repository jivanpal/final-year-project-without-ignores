#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

int init_module(void) {
  printk(KERN_ALERT "Hello, world!\n");
  return 0;
}

void cleanup_module(void) {
  printk(KERN_ALERT "Goodbye, world :-(\n");
}
