# Ergogen設計メモ

## 方針

Ergogenを物理レイアウトの一次情報にする。KiCadでは生成されたPCBを確認し、回路図・配線・DRC・Gerber出力へ進める。

## 生成対象

- `split60_left`: 左手側PCBの初期生成物
- `board`: PCB外形
- `preview`: キー位置確認用
- `bottom_plate`: FR4 bottom plate用外形

`npm run ergogen` は SVG も生成します。確認用に以下をリポジトリへコピーしています。

- `docs/generated/split60-preview.svg`
- `docs/generated/split60-board.svg`
- `docs/generated/split60-bottom-plate.svg`
- `hardware/split60_ortho/generated/split60_left.kicad_pcb`

## 調整ポイント

- `thumb.alt`, `thumb.lower`, `thumb.main`, `thumb.fn` の `shift`, `rotate`, `width`
- `matrix.*.stagger`
  - 現行は `ring.stagger: 4`, `middle.stagger: 8`, `index.stagger: 4`, `inner.stagger: 0`。QからW/Eへ上げ、R/Tへ向けて下げてTをQと同じ高さに戻す。
- `outlines._raw` の外形点
- mounting holes の位置

## 注意

- `Ctrl(2u)` と `Space(2u)` は左右対称運用を前提にする。
- `Alt` は1.5u候補。`Ctrl+Alt+...` を親指で押しやすい位置を優先する。
- ねじ穴は Ergogen outline の円形カットとして入れている。KiCadで最終穴径を確認する。
- Ergogen標準footprintで不足が出た場合は、カスタムfootprint化する。Keebio RP2040 Pro Micro 16MBの最終フットプリントは実寸確認後に詰める。
- QMK雛形は前段のビルド確認用で、まだRP2040/62キーの最終matrixには合わせていない。Ergogen配置確認後に更新する。
- 公式Ergogenのpoint previewでは左右両側が表示されるため、`mirror.distance` は中央干渉が出ないよう広めの `96` にしている。左手PCB生成物はmirror点を除外している。
