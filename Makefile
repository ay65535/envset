all: envset org.miko.osx.envset.plist

envset: envset.c
	clang -Os envset.c -o envset

org.miko.osx.envset.plist: create_plist.php
	php create_plist.php > org.miko.osx.envset.plist

install:
	cp -ivp envset ~/local/bin
	cp -iv org.miko.osx.envset.plist ~/Library/LaunchAgents/org.miko.osx.envset.plist

clean:
	rm envset org.miko.osx.envset.plist 2>/dev/null || true

# clang -Os envset.c -o ~/bin/envset
# php create_plist.php > ~/Library/LaunchAgents/org.miko.osx.envset.plist
