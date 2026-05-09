# ピン割り当てメモ

## 前提

- MCU: Keebio RP2040 Pro Micro 16MB 第一候補
- footprint: Pro Micro 互換、裏面実装、直ハンダ前提
- 左右間接続: TRRS または JST を比較、初期生成物は TRRS
- スイッチ: MX 5-pin direct solder
- ダイオード: 各スイッチに 1 個
- キー数: 現行 Ergogen 案は左右 31 キーずつ、合計 62 キー

## Matrix draft

片手 31 キーを 5 行 x 6 列相当の matrix に収めます。T/Y 内側の `-` / `+` は `matrix_symbol_top`、G/H 内側の `[` / `]` は `matrix_symbol_home` として扱います。親指クラスタは `thumb_alt`, `thumb_lower`, `thumb_ctrl`, `thumb_fn` を独立点名にしています。

```text
row0: k00 k01 k02 k03 k04 k05
row1: k10 k11 k12 k13 k14 k15
row2: k20 k21 k22 k23 k24 k25
row3: k30 k31 k32 k33 k34 k35
row4: k40 k41 k42 k43 k44 k45
```

## RP2040 pin draft

この表は論理net名です。KiCad 回路図作成時に、Keebio RP2040 Pro Micro 16MB の実物ピンと配線しやすさを見てGPIOへ割り当てます。

```text
Rows: R0, R1, R2, R3, R4
Cols: C0, C1, C2, C3, C4, C5
Split data: TBD
Reset: RESET pin + tactile switch to GND
```

## TRRS draft

TRRS の割り当ても仮置きです。左右で必ず同一の割り当てにします。

```text
Tip:    VCC
Ring1:  Serial
Ring2:  GND
Sleeve: Reserved / no connect
```

## 確認事項

- TRRS の VCC/GND/Serial 割り当てはジャックの実フットプリントで確認する。
- Pro Micro 互換ボードによりラベルとRP2040 GPIO名が異なるため、QMK 側の指定名と照合する。
- `DIODE_DIRECTION` は回路図のダイオード向き確定後に固定する。
