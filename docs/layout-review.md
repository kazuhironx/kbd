# レイアウト確認メモ

## 確認したいポイント

- `Space` は右親指の 2u 候補です。
- `Ctrl` と `Enter` は 1.5u 候補ですが、手持ちキーキャップの高さ確認後に 1u へ戻せる扱いにしています。
- `[` と `]` は Base layer の G/H 内側に置き、人差し指で押す記号キーにします。
- 左 `Ctrl` は左外側へ、右 `Enter` は右外側へ突き出す対称配置にします。
- 親指クラスタは Corne 風に斜めへ流し、キー自体も回転させます。常用は片手 3 キーまでにします。
- 左親指 `Ctrl` と右親指 `Space` はどちらも 2u にして、鏡映対称の位置・角度にします。
- 左手 `Alt` は `Ctrl+Alt+...` 用に、左親指の常用キーとして押しやすい位置に残します。
- `-` と `+` は T/Y の内側に置き、60キーのまま維持します。
- 親指クラスタ下段は `Fn` だけ残します。

## 物理配置ラフ

```text
Left half                               Right half

Esc   1   2   3   4   5                 6   7   8   9   0   `
 Tab  Q   W   E   R   T   -         +   Y   U   I   O   P   Bspc
 Ctrl A   S   D   F   G   [         ]   H   J   K   L   ;   Enter
Shift Z   X   C   V   B                 N   M   ,   .   /   \|

             Alt Lower Ctrl(2u)        Space(2u) Raise Enter
                    Fn                 Fn
```

## 差し替え候補

`Ctrl` の高さが合わない場合:

- 左ホーム列の `Ctrl` を 1u に戻す。
- 1.5u の `Ctrl` は外側へ突き出すので、A とは重ねない。
- Emacs 用の親指 `Ctrl` は 2u の主キーとして維持する。

`Enter` の高さが合わない場合:

- 右ホーム列の `Enter` を 1u に戻す。
- 1.5u の `Enter` は右親指クラスタ側に回す。
- 右外側の `Backspace` を 1.5u 候補にする。

`Space` の 2u が干渉する場合:

- 右親指の `Space` を 1u に戻す。
- 2u はケースとPCBの実測後に再配置する。
