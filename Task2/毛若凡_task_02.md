# Markdown
1. 自我介绍：_Hello_~我是来自江苏南通的毛若凡，目前在电子信息工程专业学习.爱好嘛，打游戏(~~这不废话~~)
2. 最爱的游戏：[___塞尔达传说___](https://baike.baidu.com/item/%E5%A1%9E%E5%B0%94%E8%BE%BE%E4%BC%A0%E8%AF%B4/4163802?fr=aladdin)**世界上最好的开放世界游戏！**（顺带一提[___怪物猎人世界___](https://store.steampowered.com/app/582010/MONSTER_HUNTER_WORLD/)第二）~~粪怪少一点啊啊啊啊~~
3. Unity生命周期函数（调用顺序从上到下）
    - Reset()：重置为默认值
    - Awake()：游戏一开始运行就执行，只执行一次。
    - OnEnable()：当脚本组件被启用的时候执行一次。启用事件，只执行一次。
    - Start()：开始事件，执行一次。
    - FixedUpdate()：固定更新事件，固定帧（固定的时间间隔，不受帧率(FPS)影响）更新，更新频率默认为0.02s。
    - Update()：更新事件，执行N次，每帧执行一次。
    - LateUpdate()：稍后更新事件，执行N次，在 Update() 事件执行完毕后再执行。
    - OnGUI()：在渲染和处理GUI事件时调用。每帧都执行。执行的次数是 Update() 事件的两倍。
    - OnDisable()：禁用事件，执行一次。在 OnDestroy() 事件前执行。或者当该脚本组件被“禁用”后，也会触发该事件。
    - OnDestroy()：销毁事件，执行一次。当脚本所挂载的游戏物体被销毁时执行。

