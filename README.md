a mod for [Who's Lila](https://en.wikipedia.org/wiki/Who%27s_Lila%3F) that removes the dithering shader.

this works on my machine™, but considering the method i'm using for this i'm not enturely sure how consistently it'll work (the shader assets in the game look like they contain multiple tagged versions, but these patched shaders are only for one of those)

if I can manage to get this working as an actual mod with e.g. bepinex I'll convert it over to that

# installation
use [3Dmigoto](https://github.com/bo3b/3Dmigoto/).
TODO: put proper instructions here

# configuration
comment out/uncomment the various `#define`s in `ShaderFixes/lila_common.h` to change the behavior of the modified shaders.

configurable settings include:
- disable the game's dithering effect
- apply current palette as a gradient (only when dither is off)
- full color output (only when dither is removed, mutually excusive with palette)
- skip constant offset that the game sometimes adds to lighten/darken the screen
- disable the game's bloom effect

# tools used
- [RenderDoc](https://renderdoc.org/) for initially inspecing the game's shaders & how it renders a frame
- [AssetStudioGUI](https://github.com/Perfare/AssetStudio) for inspecting the game's unity assets
- [3Dmigoto](https://github.com/bo3b/3Dmigoto/) for dumping shaders, and as the tool to swap in the patched shaders at runtime

# see also
- [Who's Lila No Dithering Mod (youtube link, mod in description)](https://www.youtube.com/watch?v=xFSrnSYhujc) - BepInEx-based mod someone else developed to do the same thing, in a way that's probably less likely to break and should definitely work on all machines/platforms, albeit with less configuration.
