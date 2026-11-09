# scylla

My QMK keymap for the [BastardKB Scylla](https://github.com/Bastardkb/Scylla)
(v2, Splinky v3 controller).

It is cloned inside my
[qmk-userspace](https://github.com/ned-si/qmk-userspace) checkout, at
`keyboards/bastardkb/scylla/keymaps/nedsi` (git-ignored there, so the userspace
always builds whatever this clone has checked out). The shared code (layer enum,
row macros, custom keycodes, tap dances) lives in qmk-userspace, in
`users/nedsi`.

## Target

Upstream QMK no longer ships a `bastardkb/scylla/v2/splinky_3` target. The
Splinky v3 is pin-compatible with the RP2040 Community Edition, so this keymap
builds `bastardkb/scylla/promicro` with `CONVERT_TO = rp2040_ce` (see
`rules.mk`).

## Layers

Expanded from `keymap.c` here and the row macros in `users/nedsi` (qmk-userspace).
Empty keys fall through to Main. `[NAME]` marks the key you are holding to be on
that layer; upper-case `SYM`, `NUM`, `ACC`, `NAV` and `MISC` are hold-for-layer
keys. Thumbs: three on top, two below, inner side towards the middle.

The diagrams are plain text, written by hand: update them in the same commit as
a keymap change. Each key is a 7-character cell between `|` bars, so overwrite
the label in place, centred, and keep it to 7 characters (abbreviate, and
explain it in the notes under the layer). Typing over the cell instead of
inserting keeps the grid aligned.

### Main (base layer)

```
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|  Caps |   à   |   è   |   é   | Copy* |  Esc  |   |   "   |   '   |   -   |   _   | Next* |  Play |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|CapsWrd|   Q   |   W   |   E   |   R   |   T   |   |   Y   |   U   |   I   |   O   |   P   |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|  Gui  |   A   |   S   |   D   |   F   |   G   |   |   H   |   J   |   K   |   L   |   :*  |   =   |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|  MISC |   Z   |   X   |   C   |   V   |   B   |   |   N   |   M   |   ,   |   .   |   /   |  Del  |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
                        |  SYM  | Shift |  Ctrl |   | Bksp* | Space |  NUM  |
                        +-------+-------+-------+   +-------+-------+-------+
                                |  Alt  |  Tab  |   |  ACC  | Enter |
                                +-------+-------+   +-------+-------+
```

- `Copy*`: tap Ctrl+C, hold Ctrl+V, double-tap Ctrl+A.
- `Next*`: tap next track, double-tap previous track.
- `:*` sends `;` when shifted. `Bksp*` sends Delete when shifted.
- `CapsWrd` is Caps Word: capitalises until the next non-word key.

### Gaming (toggled from Nav)

```
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|  Esc  |   1   |   2   |   3   |   4   |   5   |   |   "   |   '   |   -   |   _   | Next* |  Play |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|CapsWrd|   Q   |   W   |   E   |   R   |   T   |   |   Y   |   U   |   I   |   O   |   P   |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
| Shift |   A   |   S   |   D   |   F   |   G   |   |   H   |   J   |   K   |   L   |   :*  |   =   |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|  Alt  |   Z   |   X   |   C   |   V   |   B   |   |   N   |   M   |   ,   |   .   |   /   |  Del  |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
                        |  SYM  | Space |  Ctrl |   | Bksp* | Space |  NUM  |
                        +-------+-------+-------+   +-------+-------+-------+
                                |  Tab  | Shift |   |  ACC  | Enter |
                                +-------+-------+   +-------+-------+
```

- Only the left hand changes: the right hand, thumbs included, falls through to Main.

### Sym (hold the left outer thumb)

```
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |       |       |       |       |   |       |       |       |       |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |       |   €   |   &*  |   °   |   |       |   #   |   {   |   }   |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |   ~   |   *   |   `   |   ·   |   |   $   |   !   |   [   |   ]   |   =   |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |       |   %   |   ^   |   -   |   |   @   |   |   |   (   |   )   |   \   |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
                        | [SYM] |       |       |   |       | Space |  NAV  |
                        +-------+-------+-------+   +-------+-------+-------+
                                |       |       |   |       |       |
                                +-------+-------+   +-------+-------+
```

- `&*` sends `|` when shifted.

### Acc (hold the right lower inner thumb)

```
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |       |       |       |       |   |       |       |       |       |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |   è   |   é   |       |       |   | ¨ dead|   ù   |   î   |   ô   |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |   à   |   â   |   ê   | Shrug |       |   | ^ dead|   û   |   ï   |   ö   |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |       |   ç   |       |       |   |       |       |       |       |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
                        |       |       |       |   |       |       |       |
                        +-------+-------+-------+   +-------+-------+-------+
                                |       |       |   | [ACC] |       |
                                +-------+-------+   +-------+-------+
```

- `Shrug` types `¯\_(ツ)_/¯`. The dead keys add a diaeresis or circumflex to the next letter.

### Num (hold the right outer thumb)

```
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |       |       |       |       |   |       |       |       |       |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |  F12  |   F7  |   F8  |   F9  |       |   |       |   7   |   8   |   9   |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |  F11  |   F4  |   F5  |   F6  |       |   |   +   |   4   |   5   |   6   |   0   |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |  F10  |   F1  |   F2  |   F3  |       |   |   =   |   1   |   2   |   3   |   .   |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
                        |  NAV  |       |       |   |       |       | [NUM] |
                        +-------+-------+-------+   +-------+-------+-------+
                                |       |       |   |       |       |
                                +-------+-------+   +-------+-------+
```

### Nav (hold both outer thumbs)

```
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|  Boot |       |       |       |       | Gaming|   |       |       |       |       |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |       |       |       |       |   |  Home |  PgDn |  PgUp |  End  |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |  Gui  |  Alt  |  Ctrl | Shift |       |   |  Left |  Down |   Up  | Right |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |       |       |       |Unicode|   |       |       |       |       |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
                        | [SYM] |       |       |   |       |       | [NUM] |
                        +-------+-------+-------+   +-------+-------+-------+
                                |       |       |   |       |       |
                                +-------+-------+   +-------+-------+
```

- `Boot` reboots the half into its bootloader (QK_BOOT). `Gaming` toggles the Gaming layer on and off.
- `Unicode` sets the input mode: tap for Linux, hold for WinCompose, double-tap for macOS.

### Misc (hold the bottom-left pinky key)

```
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |       |       |       |       |   |  RGB- |  RGB+ |  Spd- |  Spd+ |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |  Boot |       |       |       |       |   |       |       |       |       |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
|       |       |       | Ctl+C | Ctl+V |  Caps |   |  Prev |  Vol- |  Vol+ |  Next |       |       |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
| [MISC]|       |       |CtlSftC|CtlSftV|       |   |  Hue+ |  Hue- |  Sat+ |  Sat- |  Bri+ |  Bri- |
+-------+-------+-------+-------+-------+-------+   +-------+-------+-------+-------+-------+-------+
                        |       |       |       |   |  Prev |  Play |  Next |
                        +-------+-------+-------+   +-------+-------+-------+
                                |       |       |   |  RGB+ |RGB tog|
                                +-------+-------+   +-------+-------+
```

- `RGB-` / `RGB+` step through the lighting effects; `Spd`, `Hue`, `Sat` and `Bri` adjust speed, hue, saturation and brightness. `RGB tog` turns the lighting on or off.
- `CtlSftC` / `CtlSftV` are Ctrl+Shift+C and Ctrl+Shift+V (terminal copy and paste).

## Build and flash

From a machine set up as described in the qmk-userspace README:

```sh
qmk compile -kb bastardkb/scylla/promicro -km nedsi
qmk flash   -kb bastardkb/scylla/promicro -km nedsi
```

Both halves take the same firmware; handedness is read from a pin.
