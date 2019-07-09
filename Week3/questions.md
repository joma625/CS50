# Questions

## What's `stdint.h`?

A header file that defines integral types with specific width requirements.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

These are signed and unsigned integer types. We use them so we can make sure we get the exact size of the data types we want when we declare them.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

1, 4, 4, 2

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

6677

## What's the difference between `bfSize` and `biSize`?

bfSize is the size of the entire bitmap file, whereas biSize is the size the BITMAPINFOHEADER header file.

## What does it mean if `biHeight` is negative?

That means the DIB is top-down, and its origin is at the top-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

bitBitCount

## Why might `fopen` return `NULL` in `copy.c`?

It will return NULL if the file user is opening doesn't exist.

## Why is the third argument to `fread` always `1` in our code?

That is because we are going through every pixel.

## What value does `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3

## What does `fseek` do?

It can change the offset/position a pointer.

## What is `SEEK_CUR`?

It is the current position of the file pointer.
