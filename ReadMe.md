# Game Maker API

[GMC Thread](http://gmc.yoyogames.com/index.php?showtopic=519138)

[Documentation](http://willnewbery.com/gmapi/docs/)

This library provides other library writters an API to directly access various features of GM.

Only for VC++ for now, and only tested on the 10.0 compiler (2010) with GM 8.1.141. Some older 8.1 GM versions should work, back perhaps to when get_function_address was added.

You need to call the gm::init method with the address of get_function_address, as in the test dll. After that the other functionality should work (creating gm::Value objects, calling gm functions, etc).

The code is licenced under a zlib like licence, a copy of which can be found in every distribution. An online copy may also be found [here](http://willnewbery.com/gmapi/licence.php).

## Current Features

* Call GM functions.
* Supports multiple GM 8.1 versions.
* Get an instance pointer from an instance id.
* Access some built in variables for the self and other objects.
* Access to some GM resources, such as sprites and textures.

## Planned for Version 1.0.0

* Support common toolsets.
* Support all commonly used GM versions.
* Ensure everything works correctly with multiple instances and versions of the GMAPI within the same game (e.g. due to 2 different extension libraries using the GMAPI).

## Downloads

Compiled downloads contain both debug and release binaries and the headers to use them. The debug configuration for Visual C++ require Visual C++ to be installed, while the release configuration only requires the [Microsoft Visual C++ Redistributable Package (x86)](http://www.microsoft.com/download/en/details.aspx?id=5555) to be installed.

The source packages contain the same files as those in the tags directory on SVN.

© 2011-2012 William Newbery
