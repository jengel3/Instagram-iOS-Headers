/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:53 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary;

@interface FBSessionLoginStrategyParams : NSObject {

	char _tryIntegratedAuth;
	char _tryFBAppAuth;
	char _trySafariAuth;
	char _tryFallback;
	char _isReauthorize;
	char _canFetchAppSettings;
	int _defaultAudience;
	NSArray* _permissions;
	NSMutableDictionary* _webParams;

}

@property (assign) char tryIntegratedAuth;                                 //@synthesize tryIntegratedAuth=_tryIntegratedAuth - In the implementation block
@property (assign) char tryFBAppAuth;                                      //@synthesize tryFBAppAuth=_tryFBAppAuth - In the implementation block
@property (assign) char trySafariAuth;                                     //@synthesize trySafariAuth=_trySafariAuth - In the implementation block
@property (assign) char tryFallback;                                       //@synthesize tryFallback=_tryFallback - In the implementation block
@property (assign) char isReauthorize;                                     //@synthesize isReauthorize=_isReauthorize - In the implementation block
@property (assign) int defaultAudience;                                    //@synthesize defaultAudience=_defaultAudience - In the implementation block
@property (nonatomic,retain) NSArray * permissions;                        //@synthesize permissions=_permissions - In the implementation block
@property (assign) char canFetchAppSettings;                               //@synthesize canFetchAppSettings=_canFetchAppSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * webParams;              //@synthesize webParams=_webParams - In the implementation block
-(void)setTryIntegratedAuth:(char)arg1 ;
-(void)setTryFBAppAuth:(char)arg1 ;
-(void)setTrySafariAuth:(char)arg1 ;
-(void)setTryFallback:(char)arg1 ;
-(void)setIsReauthorize:(char)arg1 ;
-(void)setDefaultAudience:(int)arg1 ;
-(void)setCanFetchAppSettings:(char)arg1 ;
-(void)setWebParams:(NSMutableDictionary *)arg1 ;
-(char)tryFBAppAuth;
-(char)tryFallback;
-(char)canFetchAppSettings;
-(char)trySafariAuth;
-(NSMutableDictionary *)webParams;
-(char)tryIntegratedAuth;
-(char)isReauthorize;
-(int)defaultAudience;
-(void)dealloc;
-(NSArray *)permissions;
-(void)setPermissions:(NSArray *)arg1 ;
@end

