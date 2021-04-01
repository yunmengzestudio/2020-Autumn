# 初探旋转

## 操作方式
1.移动鼠标使相机以第一人称旋转
2.按住右键并移动鼠标使相机以第三人称围绕长方体旋转

## 项目实现说明
* 使用transform.LocalRotation,Quaternion.AngleAxis等实现第一人称旋转
* 使用transform.LookAt和transform.RotateAround实现第三人称围绕旋转

项目仓库地址：[cyanxiao/camera](https://github.com/cyanxiao/camera)