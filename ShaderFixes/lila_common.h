// whether to skip dithering
#define LILAMOD_NO_DITHER
// whether to use the game's palette on the dither-skipped output (only relevant if dither disabled)
#define LILAMOD_USE_PALETTE
// whether to skip the constant offset input to the dither shaders (which is typically enabled even when dither is disabled)
// #define LILAMOD_SKIP_OFFSET
// whether to clamp the (post-offset) input. (only relevant if dither disabled)
#define LILAMOD_CLAMP
// whether to do full-color output (experimental)
#define LILAMOD_FULLCOLOR
// whether to disable bloom
#define LILAMOD_NOBLOOM
