/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFeedNetworkSource.h>

@class IGUser;

@interface IGUserFeedNetworkSource : IGFeedNetworkSource {

	char _isAppColdStartEventSource;
	char _hasLoggedOnce;
	IGUser* _user;

}

@property (nonatomic,retain) IGUser * user;                               //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) char isAppColdStartEventSource;              //@synthesize isAppColdStartEventSource=_isAppColdStartEventSource - In the implementation block
@property (assign,nonatomic) char hasLoggedOnce;                          //@synthesize hasLoggedOnce=_hasLoggedOnce - In the implementation block
-(char)hasLoggedOnce;
-(void)setHasLoggedOnce:(char)arg1 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 rankToken:(id)arg3 secure:(char)arg4 ;
-(void)handleAuthorizationError:(id)arg1 ;
-(void)onNewItemAvailable:(id)arg1 ;
-(char)isAppColdStartEventSource;
-(void)setIsAppColdStartEventSource:(char)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)dealloc;
@end

