/*
 * In The Name Of God
 * ========================================
 * [] File Name : Task05.c
 *
 * [] Creation Date : 13-01-2015
 *
 * [] Last Modified : Tue 13 Jan 2015 10:02:54 PM IRST
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
#include <linux/init.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Parham Alvani");
MODULE_DESCRIPTION("This module does nothing .....\n");

static int __init hello_init(void)
{
	pr_info("HelloModule: i am loading\n");
	pr_debug("HelloModule: Hello World\n");

	return 0;
}

static void __exit hello_exit(void)
{
	pr_info("Goodbye, i am unloading\n");
}

module_init(hello_init);
module_exit(hello_exit);
