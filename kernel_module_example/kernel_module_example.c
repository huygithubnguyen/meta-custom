// SPDX-identifier: GPL-2.0
/*
 * Copyright (C) STMicroelectronics SA 2018
 *
 * Authors: Jean-Christophe Trotin <jean-christophe.trotin@st.com>
 *
 */

#include <linux/module.h>    /* for all kernel modules */
#include <linux/kernel.h>    /* for KERN_INFO */
#include <linux/init.h>      /* for __init and __exit macros */

static int __init kernel_module_example_init(void)
{
	printk(KERN_INFO "Kernel module example: hello world from STMicroelectronics\n");
	return 0;
}

static void __exit kernel_module_example_exit(void)
{
	printk(KERN_INFO "Kernel module example: goodbye from STMicroelectronics\n");
}

module_init(kernel_module_example_init);
module_exit(kernel_module_example_exit);

MODULE_DESCRIPTION("STMicroelectronics simple external out-of-tree Linux kernel module example");
MODULE_AUTHOR("Jean-Christophe Trotin <jean-christophe.trotin@st.com>");
MODULE_LICENSE("GPL v2");
