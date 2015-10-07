/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:11 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface IGCookieStorage : NSObject {

	NSDictionary* _currentCookies;

}

@property (nonatomic,retain) NSDictionary * currentCookies;              //@synthesize currentCookies=_currentCookies - In the implementation block
+(id)sharedInstance;
-(void)storeCookies:(id)arg1 forKey:(id)arg2 shouldKeepExistingUserSessionCookies:(char)arg3 ;
-(id)cookiesForKey:(id)arg1 ;
-(void)purgeAllCookies;
-(void)purgeCookiesForKey:(id)arg1 ;
-(id)cookiePropertiesForKey:(id)arg1 ;
-(id)allCookies;
-(NSDictionary *)currentCookies;
-(id)keyChainStore;
-(void)setCurrentCookies:(NSDictionary *)arg1 ;
-(void)saveCookieProperties:(id)arg1 forKey:(id)arg2 ;
-(void)saveCookieKeyMap:(id)arg1 ;
-(void)migrateCookiesFromKey:(id)arg1 toKey:(id)arg2 ;
@end

