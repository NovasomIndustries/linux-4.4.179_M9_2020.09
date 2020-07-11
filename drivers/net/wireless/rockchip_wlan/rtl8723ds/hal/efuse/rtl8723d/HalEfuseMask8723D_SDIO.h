/* SPDX-License-Identifier: GPL-2.0 */
/******************************************************************************
 *
 * Copyright(c) 2007 - 2017 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *****************************************************************************/

/******************************************************************************
*                           MSDIO.TXT
******************************************************************************/

u2Byte
EFUSE_GetArrayLen_MP_8723D_MSDIO(VOID);

VOID
EFUSE_GetMaskArray_MP_8723D_MSDIO(
	IN	OUT pu1Byte Array
);
/* TC: Test Chip, MP: MP Chip */
BOOLEAN
EFUSE_IsAddressMasked_MP_8723D_MSDIO(
	IN   u2Byte  Offset
);
