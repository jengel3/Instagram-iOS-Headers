/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Instagram/RCTBridgeModule.h>
#import <Instagram/RCTInvalidating.h>

@class NSMutableArray, NSString, RCTBridge;

@interface RCTAlertManager : NSObject <UIAlertViewDelegate, RCTBridgeModule, RCTInvalidating> {

	NSMutableArray* _alerts;
	NSMutableArray* _alertControllers;
	NSMutableArray* _alertCallbacks;
	NSMutableArray* _alertButtonKeys;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__720;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)alertWithArgs:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
@end
