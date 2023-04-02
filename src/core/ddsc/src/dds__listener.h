/*
 * Copyright(c) 2006 to 2019 ZettaScale Technology and others
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
 * v. 1.0 which is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 */
#ifndef DDS__LISTENER_H
#define DDS__LISTENER_H

#include "dds/ddsc/dds_public_listener.h"
#include "dds__types.h"

#if defined(__cplusplus)
extern "C" {
#endif

/** @component entity_listener */
// 函数：覆盖继承的监听器
// 参数：
// - dst: 目标监听器指针（非空）
// - src: 源监听器指针（非空）
void dds_override_inherited_listener(dds_listener_t* __restrict dst,
                                     const dds_listener_t* __restrict src);

/** @component entity_listener */
// 函数：继承监听器
// 参数：
// - dst: 目标监听器指针（非空）
// - src: 源监听器指针（非空）
void dds_inherit_listener(dds_listener_t* __restrict dst, const dds_listener_t* __restrict src);

#if defined(__cplusplus)
}
#endif
#endif /* DDS__LISTENER_H */
