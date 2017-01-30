#include <linux/module.h> /* Necesario en todos los modulos */
#include <linux/kernel.h> /* Necesario para alertas e info como KERN_INFO */
#include <linux/init.h>/* Necesario para las macros init y exit */
MODULE LICENSE("GPL");
MODULE_AUTHOR(Jenife Martinez Casares);
MODULE_DESCRIPTION(primer modulito de kernel);

static int __init inicio(void)
{
printk(KERN_INFO "Hello, Mundo \n");
return 0;
}
static void __exit fin(void)
{
printk(KERN_INFO "Adios, Mundo \n");
}
module_init(inicio);
module_exit(fin);
