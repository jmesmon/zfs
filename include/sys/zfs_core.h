/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright (c) 2005, 2010, Oracle and/or its affiliates. All rights reserved.
 * Copyright (c) 2011, 2020 by Delphix. All rights reserved.
 * Copyright 2011 Nexenta Systems, Inc.  All rights reserved.
 * Copyright (c) 2013, 2017 Joyent, Inc. All rights reserved.
 * Copyright (c) 2014 Integros [integros.com]
 * Copyright (c) 2017, Intel Corporation.
 * Copyright (c) 2019 Datto Inc.
 */
/* Portions Copyright 2010 Robert Milkowski */
/*
 * Definitions shared by `<sys/fs/zfs.h>` and `<libzfs_core.h>`. Items defined
 * in this header are part of the public libzfs_core API.
 */
#ifndef	_SYS_ZFS_CORE_H
#define	_SYS_ZFS_CORE_H
#pragma once
#ifdef	__cplusplus
extern "C" {
#endif

/* Includes the terminating NUL byte */
#define	ZFS_MAX_DATASET_NAME_LEN 256

/*
 * Initialize functions.
 */
typedef enum pool_initialize_func {
	POOL_INITIALIZE_START,
	POOL_INITIALIZE_CANCEL,
	POOL_INITIALIZE_SUSPEND,
	POOL_INITIALIZE_FUNCS
} pool_initialize_func_t;

/*
 * TRIM functions.
 */
typedef enum pool_trim_func {
	POOL_TRIM_START,
	POOL_TRIM_CANCEL,
	POOL_TRIM_SUSPEND,
	POOL_TRIM_FUNCS
} pool_trim_func_t;

typedef enum {
	ZPOOL_WAIT_CKPT_DISCARD,
	ZPOOL_WAIT_FREE,
	ZPOOL_WAIT_INITIALIZE,
	ZPOOL_WAIT_REPLACE,
	ZPOOL_WAIT_REMOVE,
	ZPOOL_WAIT_RESILVER,
	ZPOOL_WAIT_SCRUB,
	ZPOOL_WAIT_TRIM,
	ZPOOL_WAIT_NUM_ACTIVITIES
} zpool_wait_activity_t;

typedef enum {
	ZFS_WAIT_DELETEQ,
	ZFS_WAIT_NUM_ACTIVITIES
} zfs_wait_activity_t;

#ifdef	__cplusplus
}
#endif

#endif
