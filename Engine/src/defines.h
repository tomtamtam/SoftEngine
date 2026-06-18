#pragma once

#include <stdint.h>

struct vec2
{
	union {
		struct { float x, y; };
		struct { float r, g; };
		struct { float s, t; };
	};
};

struct vec3
{
	union {
		struct { float x, y, z; };
		struct { float r, g, b; };
		struct { float s, t, p; };
	};
};

struct vec4
{
	union {
		struct { float x, y, z, w; };
		struct { float r, g, b, a; };
		struct { float s, t, p, q; };
	};
};
