# split60_ortho hardware

KiCad 用の作業ディレクトリです。

v1 の回路設計対象:

- 左右別基板
- Keebio RP2040 Pro Micro 16MB 第一候補の Pro Micro 互換フットプリント
- TRRS ジャック
- RESET スイッチ
- 片手31キー分の MX 5-pin direct solder
- 各キーのダイオード
- LED / OLED / encoder / wireless はなし

`generated/split60_left.kicad_pcb` は Ergogen から生成した初期PCBです。KiCad 10.0.1で開き、MCU位置、USB-C逃げ、ねじ穴、底板逃げを確認してから本配線へ進みます。

回路図作成後に ERC を実行し、QMK の matrix と一致していることを確認します。
