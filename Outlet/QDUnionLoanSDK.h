//
//  QDUnionLoanSDK.h
//  QDUnionLoanSDK
//
//  Created by syc on 2019/5/22.
//  Copyright © 2019 qudian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface QDUnionLoanSDK : NSObject

/*
 *  设置sdk appKey
 *
 *  @param appKey
 *  appKey:申请sdk时生成的唯一字符串，需要在调用sdk前设置
 *  同时将appKey注册到scheme中，用于支付宝支付回调
 */
+ (void) setAppKey:(NSString*)appKey;

/*
 *  联合登陆token
 *
 *  @param token
 *  token:约定好的联合登录token
 */
+ (void) setToken:(NSString*)token;

/*
 *  弹出趣店借款页面（present）
 *
 *  @param vc
 *  vc:当前页面viewController
 *  ad:约定好或自定义的位置统计信息
 *  navigationBarColor: 导航栏背景色，默认是白色
 *  itemColor: 导航栏标题和按钮的颜色，默认是黑色
 */
+ (void) showQDUnionLoanViewController:(UIViewController *)vc ad:(NSString *)ad navigationBarColor:(UIColor *)navigationBarColor itemColor:(UIColor *)itemColor;

/*
 *  支付返回结果处理，需要在openUrl方法中调用
 *
 *  @param url
 *  url:openUrl方法中的url
 */
+ (void) handleAlipayResult:(NSURL*)url;

/*
 *  设置调试模式
 *
 *  debug:debug
 */
+ (void) setDebug:(BOOL)debug;

/*
 *  设置支持阿里人脸
 *
 *  enable:是否支持。默认不支持
 */
+ (void)setEnableAliface:(BOOL)enable;

/*
 *  设置支持支付宝
 *
 *  enable:是否支持。默认支持
 */
+ (void)setEnableAlipay:(BOOL)enable;

/*
 *  设置支持face++人脸
 *
 *  enable:是否支持。默认支持
 */
+ (void)setEnableFaceplus:(BOOL)enable;

/*
 *  设置支持face++ ocr
 *
 *  enable:是否支持。默认支持
 */
+ (void)setEnableFacePlusVerifyId:(BOOL)enable;

@end
