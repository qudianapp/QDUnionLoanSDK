# QDUnionLoanSDK

### 安装和配置：

1. 通过pod引入
```
pod 'QDUnionLoanSDK'
```
2. 将鉴权图片(yw_1222_0769.jpg)加入工程中，确保在mainbundle下能正常获取到。
3. 获取AppKey和Token，并配置qd-{YourAppKey}到URL Types中，比如AppKey为 123456, 那么配置qd-123456：
    ```
    	<array>
		<dict>
			<key>CFBundleTypeRole</key>
			<string>Editor</string>
			<key>CFBundleURLSchemes</key>
			<array>
				<string>qd-123456</string>
				..
			</array>
		</dict>
	</array>

    ```
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



- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation {
    
        if ([url.host isEqualToString:@"safepay"]) {
            if ([url.scheme isEqualToString:@"qd-{AppKey}"]) {
                [QDUnionLoanSDK handleAlipayResult:url];
            } else {
                // 原来支付宝逻辑
            }
        }
    return YES;
}

// NOTE: 9.0以后使用新API接口
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options
{
        if ([url.host isEqualToString:@"safepay"]) {
            if ([url.scheme isEqualToString:@"qd-{AppKey}"]) {
                [QDUnionLoanSDK handleAlipayResult:url];
            } else {
                // 原来支付宝逻辑
            }
        }

    return YES;
}

```

2.调起页面

```
- (void) clicked
{
    __weak ViewController* vc = self;
    // 开启测试模式
    [QDUnionLoanSDK setDebug:YES];
    [QDUnionLoanSDK showQDUnionLoanViewController:self ad:@"" navigationBarColor:[UIColor whiteColor] itemColor:[UIColor grayColor]];
}
```