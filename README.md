MC Houdini Tools
======

![maximcapra logo](https://github.com/maximcapra/houdini_tools/blob/master/logo.png)

HDAs, Scripts, Shelf Tools and Experiments for SideFX Houdini.

This is a personal repository. Feel free to use the tools for your purposes.

### Installation:

## Step 1: Downloading
Download the desired release directly from the [releases page](https://github.com/maximcapra/houdini_tools/releases) and extract it to your hard drive or network share.

## Step 2: Configuring your Environment

**Option 1: Plugin (17.5+ only)**
Create a folder inside your Houdini preferences directory (where the houdini.env typically is) called "packages", and place the mc.json file into that folder. Then edit mc.json and change the "MC" variable to match the install path.

**Option 2: Edit Houdini.env**
Add to your HOUDINI_PATH:
`HOUDINI_PATH=$HOUDINI_PATH;"/path/to/mc";&`

*Note:* On Linux and OSX, use `:` instead of `;` to separate your paths. 

It's important that your HOUDINI_PATH always ends in ;&. You can append any other paths you like,
but the last path should be `&`. This will ensure that Houdini's built-in operators work normally.

### Notice:
This software is provided AS-IS, with absolutely no warranty of any kind, express or otherwise. We disclaim any liability for damages resulting from using this software.
