# QDUnionLoanSDK

### 安装和配置：

1. 通过pod引入
```
pod 'QDUnionLoanSDK'
```
2. 将鉴权图片(yw_1222_0769.jpg)加入工程中，确保在mainbundle下能取到。
---

### 如何使用：
1.初始化

```
// AppDelegate.h

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    // SDK初始化
    [QDUnionLoanSDK setAppKey:YOUR_KEY];
    [QDUnionLoanSDK setToken:YOUR_TOKEN];
    
    ...
    
    return YES;
}

- (BOOL) application:(UIApplication*)application openURL:(nonnull NSURL *)url options:(nonnull NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options
{
// 支付宝支付回调
    [QDUnionLoanSDK handleAlipayResult:url];
    return YES;
}

```

2.调起页面

```
- (void) clicked
{
    __weak ViewController* vc = self;
    [QDUnionLoanSDK showQDUnionLoanViewController:vc ad:YOUR_AD]; // ad or cf
}
```