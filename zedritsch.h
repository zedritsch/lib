#ifndef ZEDRITSCH_H
#define ZEDRITSCH_H

#define not(expression) (!(expression))

#define enum(identifier) typedef enum identifier identifier; enum identifier
#define struct(identifier) typedef struct identifier identifier; struct identifier

#define null 0

#ifndef __cplusplus

enum(bool) {
	false,
	true
};

#endif

typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned int       u32;
typedef unsigned long long u64;

typedef char      i8;
typedef short     i16;
typedef int       i32;
typedef long long i64;

typedef float  f32;
typedef double f64;

typedef char* str;

#endif