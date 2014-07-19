//
// from
// http://osx.miko.org/index.php/Beginning_OS_X_Mavericks/%E3%82%A4%E3%83%B3%E3%83%95%E3%83%A9%E6%95%B4%E5%82%99%E7%B7%A8
//

#include <stdlib.h>

int main(void)
{
    //system("/bin/launchctl setenv XMODIFIERS @im=kinput2");
    system("/bin/launchctl setenv LANG ja_JP.UTF-8");
    system("/bin/launchctl setenv PATH /usr/local/bin:/usr/bin:/bin:/usr/local/sbin:/usr/sbin:/sbin");
    system("/bin/launchctl setenv XDG_DATA_HOME ~/.local/share");
    system("/bin/launchctl setenv XDG_CONFIG_HOME ~/.config");
    //system("/bin/launchctl setenv XDG_DATA_DIRS /usr/local/share/:/usr/share/");
    //system("/bin/launchctl setenv XDG_CONFIG_DIRS /etc/xdg");
    system("/bin/launchctl setenv XDG_CACHE_HOME ~/.cache");
    return 0;
}
