# NCMR

ROSの学習用にロボットを作れないかなぁと画策中

# 環境
- ロボット開発環境 : ROS2
- システム設計 : umbrello

# ディレクトリ
- ベースディレクトリ  
ros2\_ws/src/ncmr/

- ベースディレクトリを環境変数に追加<br>
\.bashrcに以下を追加<br>
export D_ROS2_ROOT=/home/*YOUR_ENVIRONMENT_PATH*/src/ncmr

- ncmr以下<br>
>ncmr\/<br>
>┠ README.md  
>┠ system\_modeling  
>┠ package  
><span>　　　</span>ros2 pkg create でパッケージを作ったもの  
>┗ bin  
><span>　　　</span>上記で作成したパッケージを保存したもの  

# 目標  
- 移動ロボットを作って競技会に参加。  
- ROS2などできるだけ最新技術を取り込む  
