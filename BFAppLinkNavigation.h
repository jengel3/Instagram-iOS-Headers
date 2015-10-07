/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:16 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, BFAppLink;

@interface BFAppLinkNavigation : NSObject {

	NSDictionary* _extras;
	NSDictionary* _appLinkData;
	BFAppLink* _appLink;

}

@property (nonatomic,copy) NSDictionary * extras;                   //@synthesize extras=_extras - In the implementation block
@property (nonatomic,copy) NSDictionary * appLinkData;              //@synthesize appLinkData=_appLinkData - In the implementation block
@property (nonatomic,retain) BFAppLink * appLink;                   //@synthesize appLink=_appLink - In the implementation block
+(id)defaultResolver;
+(id)resolveAppLinkInBackground:(id)arg1 resolver:(id)arg2 ;
+(id)navigateToURLInBackground:(id)arg1 resolver:(id)arg2 ;
+(id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3 ;
+(id)resolveAppLinkInBackground:(id)arg1 ;
+(id)navigateToURLInBackground:(id)arg1 ;
+(void)setDefaultResolver:(id)arg1 ;
+(int)navigateToAppLink:(id)arg1 error:(id*)arg2 ;
-(void)setAppLink:(BFAppLink *)arg1 ;
-(void)setExtras:(NSDictionary *)arg1 ;
-(void)setAppLinkData:(NSDictionary *)arg1 ;
-(BFAppLink *)appLink;
-(NSDictionary *)extras;
-(id)stringByEscapingQueryString:(id)arg1 ;
-(id)appLinkURLWithTargetURL:(id)arg1 error:(id*)arg2 ;
-(void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(int)arg3 ;
-(int)navigate:(id*)arg1 ;
-(NSDictionary *)appLinkData;
@end

