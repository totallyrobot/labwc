/*
 * Parse xbm token to create pixmap
 *
 * Copyright Johan Malm 2020
 */

#ifndef __LABWC_PARSE_H
#define __LABWC_PARSE_H

#include <stdint.h>
#include "theme/xbm/tokenize.h"

struct pixmap {
	uint32_t *data;
	int width;
	int height;
};

/**
 * xbm_create_pixmap - parse xbm tokens and create pixmap
 * @tokens: token vector
 */
struct pixmap xbm_create_pixmap(struct token *tokens);

struct pixmap xbm_create_pixmap_builtin(const char *button);

#endif /* __LABWC_PARSE_H */
