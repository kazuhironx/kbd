# ピン割り当てメモ

## 前提

- MCU: Pro Micro 互換
- 左右間接続: TRRS
- スイッチ: MX ホットスワップ
- ダイオード: 各スイッチに 1 個
- キー数: 左右 30 キーずつ、合計 60 キー

## Matrix draft

片手 30 キーを 5 行 x 6 列の matrix に収めます。ホーム段内側の `[` / `]` は row4 col5 を使う想定です。

```text
row0: k00 k01 k02 k03 k04 k05
row1: k10 k11 k12 k13 k14 k15
row2: k20 k21 k22 k23 k24 k25
row3: k30 k31 k32 k33 k34 k35
row4: k40 k41 k42 k43 k44 k45
```

## Pro Micro pin draft

この表は仮置きです。KiCad 回路図作成時に、実物の Pro Micro 互換ボードと配線しやすさを見て確定します。

```text
Rows: D1, D0, D4, C6, D7
Cols: F4, F5, F6, F7, B1, B3
Serial: D2
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
- Pro Micro 互換ボードによりラベルと AVR ピン名が異なるため、QMK 側の指定名と照合する。
- `DIODE_DIRECTION` は回路図のダイオード向き確定後に固定する。
