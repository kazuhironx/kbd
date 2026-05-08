# レイアウト確認メモ

## 確認したいポイント

- `Space` は右親指の 2u 候補です。
- `Ctrl` と `Enter` は 1.5u 候補ですが、手持ちキーキャップの高さ確認後に 1u へ戻せる扱いにしています。
- `[` と `]` は Base layer には置かず、Lower / Raise layer に逃がします。
- 追加 4 キーは `AUX_L1`, `AUX_L2`, `AUX_R1`, `AUX_R2` として残し、初期キーマップでは `KC_NO` にしています。

## 物理配置ラフ

```text
Left half                               Right half

Esc   1   2   3   4   5                6   7   8   9   0   `
 Tab  Q   W   E   R   T                Y   U   I   O   P   Bspc
 Ctrl A   S   D   F   G                H   J   K   L   ;   Enter
Shift Z   X   C   V   B                N   M   ,   .   /   \|

             Alt Lower Ctrl            Space(2u) Raise Enter
                AUX_L1 AUX_L2          AUX_R1    AUX_R2
```

## 差し替え候補

`Ctrl` の高さが合わない場合:

- 左ホーム列の `Ctrl` を 1u に戻す。
- 1.5u の `Ctrl` は親指クラスタ側に回す。
- Emacs 用の親指 `Ctrl` は QMK で維持する。

`Enter` の高さが合わない場合:

- 右ホーム列の `Enter` を 1u に戻す。
- 1.5u の `Enter` は右親指クラスタ側に回す。
- 右外側の `Backspace` を 1.5u 候補にする。

`Space` の 2u が干渉する場合:

- 右親指の `Space` を 1u に戻す。
- 2u はケースとPCBの実測後に再配置する。
