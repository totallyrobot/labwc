% labwc-config(5)
% Johan Malm
% 8 Oct, 2020

# NAME

labwc - Configuration

# CONFIGURATION

The configuration aims to be compatible with Openbox, but there are some
differences which are pointed out throughout the man pages.

Adhering to XDG Base Directory Specification, configuration files will
be searched for in the following order:

- `${XDG_CONFIG_HOME:-$HOME/.config}/labwc`  
- `${XDG_CONFIG_DIRS:-/etc/xdg}/labwc`  

# RC.XML `<lab>`

Labwc specific settings which are not present in Openbox.

    <lab>
      <xdg_shell_server_side_deco></xdg_shell_server_side_deco>
    </lab>

`xdg_shell_server_side_deco` (__boolean__; default yes)

:   Use server-side decorations for xdg-shell views where it is possible to
    turn of CSD

# RC.XML `<theme>`

    <theme>
      <name></name>
      <font place="">
        <name></name>
        <size></size>
      </font>
    </theme>

`name` (__string__; default Clearlooks)

:   The name of the Openbox theme to use

`font`

:   The font to use for a specific element of a window, menu or OSD.

    `place`

    :   Can be `ActiveWindow` (titlebar of active window)

    `name`

    :   Describes font name (__string__; default sans)

    `size`

    :   Describes font size in pixels (__integer__; default 8)

# RC.XML `<keyboard>`

Describe key bindings.

    <keyboard>
      <keybind key="KEY-COMBINATION">
        ACTION
      </keybind>
    <keyboard>

`KEY-COMBINATION`

:   The key combination to bind to an **ACTION** in the format
    **modifier-key**, where supported **modifiers** include S (shift);
    C (control); A (alt); W (super). Unlike Openbox, multiple space-separated
    **KEY-COMBINATION** and key-chains are not supported.

Example:

    <keyboard>
      <keybind key="A-Escape">
        <action name="Exit"/>
      </keybind>
      <keybind key="A-Tab">
        <action name="NextWindow"/>
      </keybind>
      <keybind key="A-F3">
        <action name="Execute">
          <command>bemenu-run</command>
        </action>
      </keybind>
    <keyboard>

Default:

If no rc.xml file is found, the following default values will be used:

- Alt+Escape: Exit labwc  
- Alt+Tab: Cycle windows  
- Alt+F3: Launch bemenu  

# SEE ALSO

labwc(1), labwc-actions(5), labwc-theme(5)
