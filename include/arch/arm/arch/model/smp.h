/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

#ifndef __ARCH_MODEL_SMP_H_
#define __ARCH_MODEL_SMP_H_

#include <config.h>
#include <mode/smp/smp.h>
#include <model/smp.h>

#if CONFIG_MAX_NUM_NODES > 1
static inline cpu_id_t cpuIndexToID(word_t index)
{
    return BIT(index);
}
#endif /* CONFIG_MAX_NUM_NODES > 1 */

#endif /* __ARCH_MODEL_SMP_H_ */
