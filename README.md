# AviutlScript

## 目次
* [破砕Aシリーズ](https://github.com/H-J-Ainashi/AviutlScript#%E7%A0%B4%E7%A0%95a%E3%82%B7%E3%83%AA%E3%83%BC%E3%82%BA)
    * [含まれている機能](https://github.com/H-J-Ainashi/AviutlScript#%E5%90%AB%E3%81%BE%E3%82%8C%E3%81%A6%E3%81%84%E3%82%8B%E6%A9%9F%E8%83%BD)
    * [各パラメータの説明](https://github.com/H-J-Ainashi/AviutlScript#%E5%90%84%E3%83%91%E3%83%A9%E3%83%A1%E3%83%BC%E3%82%BF%E3%81%AE%E8%AA%AC%E6%98%8E)
        * [移動距離](https://github.com/H-J-Ainashi/AviutlScript#%E7%A7%BB%E5%8B%95%E8%B7%9D%E9%9B%A2)
        * [分割数](https://github.com/H-J-Ainashi/AviutlScript#%E5%88%86%E5%89%B2%E6%95%B0)
        * [余剰部分](https://github.com/H-J-Ainashi/AviutlScript#%E4%BD%99%E5%89%B0%E9%83%A8%E5%88%86)
        * [進行度](https://github.com/H-J-Ainashi/AviutlScript#%E9%80%B2%E8%A1%8C%E5%BA%A6)
        * [間隔](https://github.com/H-J-Ainashi/AviutlScript#%E9%96%93%E9%9A%94)

## 破砕Aシリーズ
　このスクリプトはオブジェクトを分割し、砕けたような演出を行うスクリプトです。

### 含まれている機能
* **ランダムに砕ける演出（ランダム、または領域内ランダム拡散）**
    * リリースはv1からv2まであります。継続開発中です。
* **特定位置を軸に砕ける演出（クリップ座標指定）**
    * リリースはv1まであります。継続開発は検討中です。
* **任意の時間でオブジェクトがひび割れながら揺れる演出（揺れ文字）**
    * リリースはv1からv2まであります。継続開発中です。

### ダウンロード
* [Version 1](https://github.com/H-J-Ainashi/AviutlScript/blob/main/%E7%A0%B4%E7%A0%95A/@%E7%A0%B4%E7%A0%95Av1.zip?raw=true)（以降のバージョンと互換性なし）
* [Version 2](https://github.com/H-J-Ainashi/AviutlScript/blob/main/%E7%A0%B4%E7%A0%95A/@%E7%A0%B4%E7%A0%95Av2.zip?raw=true)（最新版）

### 各パラメータの説明
#### 共通
##### 移動距離
* **砕けて飛び散る距離を調整します。**
    * 単位は **ピクセル** です。
##### 分割数
* **分割する回数を指定します。**
    * v2時点では、8回程度が安全かと思われます。
    今後のアップデートで速度改善をした際に条件の緩和を検討しています。
##### 余剰部分
* **分割時にそれぞれのパーツが重複して重なるエリアの大きさを指定します。**
    * 単位は **ピクセル** です。

#### ランダムに砕ける演出（ランダムまたは領域内ランダム拡散）
##### 進行度
* **指定した[移動距離](https://github.com/H-J-Ainashi/AviutlScript#%E7%A7%BB%E5%8B%95%E8%B7%9D%E9%9B%A2)をさらにパーセントで指定します。**
    * より細かく動かしたい際にご利用ください。

#### 任意の時間でオブジェクトがひび割れながら揺れる演出（揺れ文字）
##### 間隔
* **破砕エフェクトの切り替え時間を指定します。**

## 個別obj無視Aシリーズ
　このスクリプトは、個別オブジェクトとなったオブジェクトをまとめて動かすことができるスクリプトです。

### 含まれている機能
* **拡縮およびZ軸回転サポート**

### ダウンロード
* [Version 1]()