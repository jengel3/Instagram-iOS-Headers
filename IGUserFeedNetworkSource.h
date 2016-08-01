
#import <Instagram/IGFeedNetworkSource.h>

@class IGUser;

@interface IGUserFeedNetworkSource : IGFeedNetworkSource {

	char _isAppColdStartEventSource;
	char _hasLoggedOnce;
	IGUser* _user;

}

@property (nonatomic,retain) IGUser * user;                               //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) char hasLoggedOnce;                          //@synthesize hasLoggedOnce=_hasLoggedOnce - In the implementation block
@property (assign,nonatomic) char isAppColdStartEventSource;              //@synthesize isAppColdStartEventSource=_isAppColdStartEventSource - In the implementation block
-(char)hasLoggedOnce;
-(void)setHasLoggedOnce:(char)arg1 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 ;
-(void)handleAuthorizationError:(id)arg1 ;
-(id)fetchPathForUser:(id)arg1 ;
-(void)onNewItemAvailable:(id)arg1 ;
-(char)isAppColdStartEventSource;
-(id)initWithUser:(id)arg1 userSession:(id)arg2 ;
-(void)setIsAppColdStartEventSource:(char)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)dealloc;
@end

