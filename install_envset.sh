#!/bin/sh

clang -Os envset.c -o ~/bin/envset
php create_plist.php > ~/Library/LaunchAgents/org.miko.osx.envset.plist
