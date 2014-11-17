/**
 *		Tempesta FW
 *
 * Copyright (C) 2012-2014 NatSys Lab. (info@natsys-lab.com).
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59
 * Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef __TFW_CFG_PRIVATE_LOG_H__
#define __TFW_CFG_PRIVATE_LOG_H__

/* A regular logger module may use the configuration subsystem
 * so we are using printk() internally to avoid circular dependencies. */
#define LOG_BANNER "tfw_cfg: "
#define DBG(...) pr_debug(LOG_BANNER __VA_ARGS__);
#define LOG(...) pr_info(LOG_BANNER __VA_ARGS__)
#define ERR(...) pr_err(LOG_BANNER __VA_ARGS__);

#endif /* __TFW_CFG_PRIVATE_LOG_H__ */