#!/bin/bash

# 対象のディレクトリパス（この例では現在のディレクトリを使用）
directory_path="."

# ディレクトリ内の全てのアイテムに対してループ
for item in "$directory_path"/*; do
    # アイテムがディレクトリであり、"abc"で始まるかどうかをチェック
    if [ -d "$item" ]; then
        # フォルダ名を取得
        folder_name=$(basename "$item")
        
        # "abc"で始まるかどうかをチェック
        if [[ $folder_name == abc* ]]; then
            # 新しいフォルダ名（最初の"abc"を取り除く）
            new_folder_name=${folder_name#abc}
            new_folder_path="$directory_path/$new_folder_name"
            
            # フォルダ名を変更
            mv "$item" "$new_folder_path"
            echo "Renamed \"$folder_name\" to \"$new_folder_name\""
        fi
    fi
done

