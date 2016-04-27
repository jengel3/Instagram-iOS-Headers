
#import <Instagram/IGThreadStoreNetworkingProtocol.h>
#import <Instagram/IGUserSessionClearableObject.h>
#import <Instagram/IGThreadStoreProtocol.h>

@class IGDirectThread, NSString, IGNonCurrentUserDefaults, NSMutableArray, NSMutableDictionary, NSArray;

@interface IGPublicThreadStore : NSObject <IGThreadStoreNetworkingProtocol, IGUserSessionClearableObject, IGThreadStoreProtocol> {

	IGDirectThread* _ownedPublicThread;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSMutableArray* _mutableFollowedPublicThreads;
	NSMutableDictionary* _followedPublicThreadIDToIndexInArray;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * followedPublicThreads; 
@property (nonatomic,retain) IGDirectThread * ownedPublicThread;                                      //@synthesize ownedPublicThread=_ownedPublicThread - In the implementation block
@property (nonatomic,retain) NSString * userSessionPK;                                                //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;                          //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableFollowedPublicThreads;                           //@synthesize mutableFollowedPublicThreads=_mutableFollowedPublicThreads - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * followedPublicThreadIDToIndexInArray;              //@synthesize followedPublicThreadIDToIndexInArray=_followedPublicThreadIDToIndexInArray - In the implementation block
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSString *)userSessionPK;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)fetchThreadWithID:(id)arg1 withNextMaxID:(id)arg2 successfulThreadHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(id)storedThreadWithID:(id)arg1 ;
-(id)updateStoreWithThreadDictionary:(id)arg1 alwaysMerge:(char)arg2 ;
-(IGDirectThread *)ownedPublicThread;
-(void)setOwnedPublicThread:(IGDirectThread *)arg1 ;
-(void)refreshInboxWithNextMaxID:(id)arg1 successfulInboxHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(NSArray *)followedPublicThreads;
-(void)onBackground;
-(void)storeThread:(id)arg1 withID:(id)arg2 ;
-(void)postThreadUpdatedNotificationForThread:(id)arg1 withReason:(int)arg2 ;
-(void)postThreadUpdatedNotificationForThreadID:(id)arg1 withReason:(int)arg2 ;
-(void)postThreadUpdatedNotificationForThread:(id)arg1 ;
-(void)handleRealtimeAddContent:(id)arg1 threadID:(id)arg2 ;
-(void)postThreadUpdatedNotificationForThreadID:(id)arg1 ;
-(void)postInboxUpdatedNotificationWithMegaphone:(id)arg1 ;
-(void)getOwnedPublicThreadwithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)getFollowedPublicThreadsWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)storeFollowedThread:(id)arg1 ;
-(NSMutableDictionary *)followedPublicThreadIDToIndexInArray;
-(NSMutableArray *)mutableFollowedPublicThreads;
-(void)setMutableFollowedPublicThreads:(NSMutableArray *)arg1 ;
-(void)setFollowedPublicThreadIDToIndexInArray:(NSMutableDictionary *)arg1 ;
-(void)fetchThreadWithID:(id)arg1 retryCount:(int)arg2 successfulThreadHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)deleteContent:(id)arg1 fromThread:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
@end

