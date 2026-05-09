# kbd

自作キーボード設計用のリポジトリです。

最初の対象は、Lily58 系より少しだけ記号に強い左右分割キーボードです。HHKB US 配列に慣れた Emacs 利用を前提に、column staggered の分割配列と、手持ちの SA Symbiosis / ortho 系キーキャップを活かす設計にします。

## 方針

- 左右分割、現行 Ergogen 案は片手 31 キー、合計 62 キー
- 有線 USB 接続
- 左右間接続は TRRS または JST を比較し、初期生成物は TRRS
- Keebio RP2040 Pro Micro 16MB を第一候補にした Pro Micro 互換フットプリント
- MX 5-pin direct solder
- plateless、1.6mm PCB、4mm spacer、1.6mm FR4 bottom plate
- LED、OLED、ロータリーエンコーダ、無線、電池は v1 では入れない
- `Space` は 2u キーキャップの優先候補
- `Ctrl` と `Enter` は 1u / 1.5u の差し替え候補として扱い、キーキャップ高さ確認後に確定する
- `[` と `]` は G/H の内側人差し指キーとして Base layer に置く
- 親指クラスタは片手 5 キーを残すが、常用は 3 キーまでに絞る
- 左親指 `Ctrl` と右親指 `Space` は 2u の対称配置にする
- `-` / `+` は T/Y の内側に置き、レイヤなしで押せる記号枠として扱う
- Ergogen の `ergogen/config.yaml` を物理配置とPCB外形の一次情報にする

## ディレクトリ

- `docs/`: レイアウト、キーキャップ、ピン割り当ての設計メモ
- `ergogen/`: 物理レイアウト、PCB外形、生成用設定
- `hardware/split60_ortho/`: KiCad プロジェクト
- `firmware/qmk/kazuhironx_split60_ortho/`: QMK キーボード定義の雛形

## Ergogen

```sh
npm install
npm run ergogen
```

確認用SVGは `docs/generated/` に、KiCadで開く生成PCBは `hardware/split60_ortho/generated/` に置きます。

## 次の作業

1. `docs/generated/split60-preview.svg` で親指クラスタと内側記号キーの位置を確認する。
2. KiCad 10.0.1 で `hardware/split60_ortho/generated/split60_left.kicad_pcb` を開き、外形、MX、ダイオード、MCU、TRRS位置を確認する。
3. Keebio RP2040 Pro Micro 16MB の実寸とUSB-C逃げに合わせてMCU位置を詰める。
4. 回路図、配線、DRC、Gerber出力へ進む。
