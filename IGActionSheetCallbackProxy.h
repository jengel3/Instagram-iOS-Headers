/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGActionSheetDelegate.h>

@class NSString;

@interface IGActionSheetCallbackProxy : NSObject <IGActionSheetDelegate> {

	/*^block*/id _callback;

}

@property (nonatomic,copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateWithCallback:(/*^block*/id)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

