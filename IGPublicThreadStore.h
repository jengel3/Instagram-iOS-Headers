
#import <Instagram/IGUserSessionClearableObject.h>

@class NSString, IGNonCurrentUserDefaults, NSMapTable;

@interface IGPublicThreadStore : NSObject <IGUserSessionClearableObject> {

	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSMapTable* _threads;

}

@property (nonatomic,retain) NSString * userSessionPK;                                    //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) NSMapTable * threads;                                        //@synthesize threads=_threads - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSString *)userSessionPK;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(void)setThreads:(NSMapTable *)arg1 ;
-(void)onBackground;
-(void)getPublicThreadsWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(id)fakeGetPublicThreads;
-(id)getThreadWithThreadID:(id)arg1 ;
-(NSMapTable *)threads;
@end

