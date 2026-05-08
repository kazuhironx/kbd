# レイアウト案

## 概要

Lily58 に近い 58 キー構成です。左右それぞれ 29 キー、合計 58 キーにします。メイン部は 4 行 x 6 列、親指クラスタは片手 5 キーです。

手持ちの ortho 系 1u キーキャップを中心に使い、少数ある 2u と 1.5u は親指クラスタと外側修飾キーに割り当てます。

## Base layer

```text
Left                                      Right

Esc   1   2   3   4   5                 6   7   8   9   0   `
Tab   Q   W   E   R   T                 Y   U   I   O   P   Backspace
Ctrl  A   S   D   F   G                 H   J   K   L   ;   Enter
Shift Z   X   C   V   B                 N   M   ,   .   /   \|

          Alt Lower Ctrl               Space Raise Enter
             AUX_L1 AUX_L2             AUX_R1 AUX_R2
```

## キーキャップ活用

- 1u: 英数字、記号、基本的な修飾キーに使う。
- 2u: `Space` を最優先候補にする。親指クラスタの主キーとして使う。
- 1.5u: `Ctrl` と `Enter` の候補にする。
- `Ctrl` と `Enter` はキーキャップ高さの確認待ち。高さが合わない場合は 1u に戻すか、親指クラスタ側へ回す。

## レイヤ方針

- `[` と `]` は Base layer から外し、Lower / Raise に逃がす。
- Lower は括弧、記号、カーソル移動を中心にする。
- Raise は function keys、追加記号、必要なら media / mouse keys を置く。
- Emacs 用に `Ctrl` は左ホーム列と親指クラスタの両方に置ける構成にする。

## PCB 上の注意

- 2u 候補位置はスタビライザー穴を検討する。
- 1.5u 候補位置はキーキャップ干渉と隣接キー間隔を確認する。
- メイン部は 1u 前提で、column stagger は Lily58 に近い控えめな段差にする。
- 左右別基板なので、シルクと部品向きは読みやすさを優先する。
