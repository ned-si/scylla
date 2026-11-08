# scylla

My QMK keymap for the [BastardKB Scylla](https://github.com/Bastardkb/Scylla)
(v2, Splinky v3 controller).

It is consumed as a git submodule by my
[qmk-userspace](https://github.com/ned-si/qmk-userspace) repository, at
`keyboards/bastardkb/scylla/keymaps/nedsi`. The shared code (layer enum, row
macros, custom keycodes, tap dances) lives there, in `users/nedsi`.

## Target

Upstream QMK no longer ships a `bastardkb/scylla/v2/splinky_3` target. The
Splinky v3 is pin-compatible with the RP2040 Community Edition, so this keymap
builds `bastardkb/scylla/promicro` with `CONVERT_TO = rp2040_ce` (see
`rules.mk`).

## Build and flash

From a machine set up as described in the qmk-userspace README:

```sh
qmk compile -kb bastardkb/scylla/promicro -km nedsi
qmk flash   -kb bastardkb/scylla/promicro -km nedsi
```

Both halves take the same firmware; handedness is read from a pin.
