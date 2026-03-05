# Assignment

*due on July 6th, 2026*

For this assignment you can either pick one of the two provided specifications or come up with your own.
Yes, you are free to come up with a topic for this assignment.
However, doing so requires you to put together a specification similar to the ones provided and get my approval.
The specification doesn't have to be bulletproof.
But it must contain a bullet list of goals (with points to score) at the bottom which can be checked / evaluated.
You can also adjust one of the provided specifications.

You are required to work in teams, and the team size has to correspond to the amount of work (features and their complexity) of the topic.
The provided specifications correspond to a team size of 3.

You are allowed to use:
- C++ standard library
- C standard library (as fallback)
- [Boost](https://www.boost.org/)
- [SDL](https://www.libsdl.org/)
- [GLFW](https://www.glfw.org/)
- [GLM](https://glm.g-truc.net/)
- [SFML](https://www.sfml-dev.org/)
- [Vulkan](https://www.khronos.org/vulkan/) / [Vulkan-Hpp](https://github.com/KhronosGroup/Vulkan-Hpp)
- [Qt](https://www.qt.io/)
- [ImGui](https://github.com/ocornut/imgui)
- [ncurses](https://invisible-island.net/ncurses/)
- [OpenAL](https://openal.org/)
- [nlohmann/json](https://github.com/nlohmann/json) / [RapidJSON](https://rapidjson.org/)
- [RapidYAML](https://github.com/biojppm/rapidyaml)
- [Assimp](https://www.assimp.org/)
- [stb-image](https://github.com/nothings/stb/blob/master/stb_image.h)
- [Ogg](https://xiph.org/ogg/) / [Vorbis](https://xiph.org/vorbis/) / [Opus](https://opus-codec.org/)
- [Tiled](https://www.mapeditor.org/) / [tileson](https://github.com/SSBMTonberry/tileson)
- [OpenSSL](https://www.openssl.org/)
- [SQLite](https://www.sqlite.org/)
- [Catch2](https://github.com/DigitalInBlue/Celero)
- [Google Test](https://github.com/google/googletest)
- [Google Benchmark](https://github.com/google/benchmark)
- [spdlog](https://github.com/gabime/spdlog) / [plog](https://github.com/SergiusTheBest/plog)
- [fmt](https://github.com/fmtlib/fmt)
- [AngelScript](https://www.angelcode.com/angelscript/)
- [Lua](http://www.lua.org/) / [sol2](https://github.com/ThePhD/sol2)
- [cereal](https://github.com/USCiLab/cereal)
- [protobuf](https://github.com/protocolbuffers/protobuf)
- [Font Chef](https://github.com/mobius3/font-chef)

Feel free to ask me about other libraries / tools.

Your application should work on Linux (64-Bit) and Windows (64-Bit), unless there is a specific reason why it cannot be cross-platform.

Some fixed constraints (you **must** adhere to these):
 * Use git for version control.
 * Use [CMake](https://cmake.org/) as the build system.
 * Use [ClangFormat](https://clgitang.llvm.org/docs/ClangFormat.html) to automatically format your code using the provided [`.clang-format`](../.clang-format) configuration.
 * Use [vcpkg](https://vcpkg.io) for package management.

## Team Composition + Specification

Send me an email with your team composition and your specification as early as possible.
Use the following link:

📧 [send email](mailto:peter.thoman@uibk.ac.at?subject=703333%20-%20Assignment%20Team%20Composition)

## Submission

Submission works by giving me access to your git repository, and **tagging a version**.
Include the tag I should check with each submission.
If your git repo is private, include an invitation with your email.

### Build Test Submission

Submit a non-final version of your project around 2 weeks before the final deadline.
I will verify that your project builds on my test system(s) and let you know if I run into any issues.
Use the following link, again replacing `XX` with your team number.

📧 [send email](mailto:peter.thoman@uibk.ac.at?subject=703333%20-%20Team%20XX%20Assignment%20Build%20Test)


### Final Submission

Verify that the tagged version is working.
Use the following link, again replacing `XX` with your team number.

Include your specification in the package, even if it was initially provided with the course material.
Also include a file **contributions.md** that succinctly lists, for each team member, their core contributions, with file references for the top 3.
E.g.:

**Peter Thoman**:

- Enemy combat AI - `src/enemies/combat_ai.[hpp/cpp]`
- Inventory management - `src/core/inventory.[hpp/cpp]`, `src/ui/inventory.[hpp/cpp]`
- ECS dispatch - `src/ecs/ecs.cpp:250-500`
- Minimap
- Sound effects

**John Doe**:

- ...

📧 [send email](mailto:peter.thoman@uibk.ac.at?subject=703333%20-%20Team%20XX%20Assignment%20Final)
