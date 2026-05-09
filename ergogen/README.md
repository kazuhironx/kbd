# Ergogen source

This directory is the source of truth for the physical layout and generated PCB assets.

## Generate

```bash
npm install
npm run ergogen
```

Outputs are written to `ergogen/output/` and ignored by Git. Copy checked/generated KiCad artifacts into `hardware/split60_ortho/` only after review.

## Design intent

- MX 5-pin direct solder
- SA Symbiosis keycaps
- Plateless
- 1.6mm main PCB
- 4mm spacer
- 1.6mm FR4 bottom plate
- Keebio RP2040 Pro Micro 16MB as the first MCU target
- Split wired QMK

The thumb cluster is intentionally parameterized in `config.yaml` so the `Alt`, `Ctrl(2u)`, `Space(2u)`, and `Fn` positions can be tuned by feel.
