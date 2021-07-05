

##自我介绍
***
我的名字是**郭子涵**，年龄18岁。家住在*苏州市张家港市*市区一带，单身。我在*江苏*大学当学牲，每天要晚自习上到**九点半**才能回寝。我不抽烟，酒仅止于浅尝。晚上12点睡，每天睡不满8个小时。睡前，我一定登录一下明日方舟，然后把理智挥霍一空，上了床，马上熟睡。一觉睡到早操迟到，绝不把压力和疲劳留到第二天。舍友都说我睡的像死猪一样。
***
##最喜欢的游戏
***
###VA-11 Hall-A: Cyberpunk Bartender Action
####瓦尔哈拉：赛博朋克酒保行动
之前面试的时候说最喜欢的游戏是*《巫师3》*，这次就换一个吧，毕竟我很难说到底哪个是我最喜欢的游戏......况且老是说大家都知道的3A也没啥意思不是吗2333333
![赛博朋克酒保行动.PNG](https://i.loli.net/2020/11/15/2VaNj6FQg1PBc7W.png)
![评价.jpg](https://i.loli.net/2020/11/15/Tmpi8WQuMstPYer.jpg)
虽然简介里说是调酒模拟器，但其本质上更接近TAVG（文字冒险类游戏）（或者说是galgame也没问题？），只不过一般TAVG里的对话分支选项在本作巧妙的转为了你为顾客调出的酒——通常表现为某些酒的酒精浓度，以及在你的顾客心情不好时，你能不能为他端上他最爱喝的酒——这一设置更加增强了代入感，让剧情分支合情合理（并且有时会加入一点猜谜元素）。
然后就是我最爱这游戏的一点：**对赛博朋克世界观的塑造和表现**。
主角过着两点一线（算上商店是三点？）的枯燥（？）生活，每天只是站在柜台后为到来的客人调调酒，聊聊天；回家后翻翻手机，逛逛商店，日复一日。
有关赛博朋克视觉要素的呈现并不多，无论是充满科技感的大楼还是混乱不堪的贫民窟，统统没有。
然而，然而！！！！
玩家可以在一段段对话间，构建出一个**清晰的、真实的、充斥着荒诞、不公又有着温暖人心故事发生的都市！**
 仅仅二十天。
甚至是下班回家后看似打发时间的翻看手机，也在通过里面每天更新的帖子无形中塑造、丰富着一个立体的世界。
![新闻.jpg](https://i.loli.net/2020/11/15/ofUMXZa4FNd9ckS.jpg)
![新闻2.jpg](https://i.loli.net/2020/11/15/4lCiY7nZQRLAP9m.jpg)
![讨论串.jpg](https://i.loli.net/2020/11/15/64GfyiebB1kCrIm.jpg)
它或许没有一个完整的赛博朋克外壳，但它毫无疑问掌握了赛博朋克的**内核**。
仿生义体的普及和仿生人的存在、资本主义大公司的统治、社会阶级的巨大差距……
#### 这就是我想象中的赛博朋克。
（在2077跳票遥遥无期的当下，提前了解一下赛博朋克也是极好的）
（顺便安利一个视频
[*【游戏众生相】浅谈赛博朋克——小说、电影、动画、游戏、及其他*](https://www.bilibili.com/video/BV1jx41127MJ)）
***
##Unity的生命周期函数
***
**Awake()**：唤醒事件，游戏一开始运行就执行，只执行一次。

**OnEnable()**：启用事件，只执行一次。当脚本组件被启用的时候执行一次。

**Start()**：开始事件，执行一次。

**FixedUpdate()**：固定更新事件，0.02秒执行一次。

**OnTriggerXXX(Collider other)**：
进入触发器void OnTriggerEnter (Collider other) 当Collider(碰撞体)进入trigger(触发器)时调用OnTriggerEnter。

逗留触发器void OnTriggerStay (Collider other) 当碰撞体接触触发器时，OnTriggerStay将在每一帧被调用。

退出触发器void OnTriggerExit (Collider other)当Collider(碰撞体)停止触发trigger(触发器)时调用OnTriggerExit。

**OnCollisionXXX (Collision collisionInfo)**：
Collider.OnCollisionEnter
当此对撞机/刚体开始接触另一个刚体/对撞机时，将调用OnCollisionEnter。

Collider.OnCollisionExit
当此对撞机/刚体停止接触另一个刚体/对撞机时，将调用OnCollisionExit。

Collider.OnCollisionStay
对于每个碰撞刚体/对撞机逗留与另一个碰撞器/刚体时，OnCollisionStay每帧调用一次。

**OnMouseXXX()**：
MonoBehaviour.OnMouseDown
当用户在GUIElement或Collider上按下鼠标按钮时，将调用OnMouseDown。

MonoBehaviour.OnMouseDrag
当用户单击GUIElement或Collider并且仍然按住鼠标时，将调用OnMouseDrag。

MonoBehaviour.OnMouseEnter
当鼠标进入GUIElement或Collider时调用。

MonoBehaviour.OnMouseExit
当鼠标不再位于GUIElement或Collider上时调用。

MonoBehaviour.OnMouseOver
鼠标悬停在GUIElement或Collider上时调用每一帧。

MonoBehaviour.OnMouseUp
用户释放鼠标按钮时调用OnMouseUp。

**Update()**：更新事件，每帧执行一次。

**LateUpdate()**：稍后更新事件，在 Update() 事件执行完毕后再执行。

**OnGUI()**：GUI渲染事件，执行的次数是 Update() 事件的两倍。

**OnDisable()**：禁用事件，执行一次。在 OnDestroy() 事件前执行。或者当该脚本组件被“禁用”后，也会触发该事件。

**OnDestroy()**：销毁事件，执行一次。当脚本所挂载的游戏物体被销毁时执行。