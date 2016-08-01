
#import <Instagram/IGRealtimeOperationDelegate.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class IGRealtimeManager, IGDirectThreadService, IGDirectCache, IGBadgeHelper, NSString;

@interface IGDirectRealtimeService : NSObject <IGRealtimeOperationDelegate, IGUserSessionClearableObject> {

	IGRealtimeManager* _realtimeManager;
	IGDirectThreadService* _threadService;

}

@property (nonatomic,readonly) IGDirectCache * cache; 
@property (nonatomic,readonly) IGBadgeHelper * badgeHelper; 
@property (nonatomic,readonly) IGRealtimeManager * realtimeManager;                //@synthesize realtimeManager=_realtimeManager - In the implementation block
@property (nonatomic,readonly) IGDirectThreadService * threadService;              //@synthesize threadService=_threadService - In the implementation block
@property (nonatomic,readonly) unsigned subscriptionStatus; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(IGBadgeHelper *)badgeHelper;
-(IGDirectThreadService *)threadService;
-(void)handleAddMessageRealtimeEventWithDictionary:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleRemoveRealtimeEventForItemWithId:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleReplaceMessageRealtimeEventWithDictionary:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleRealtimeSeenEventForUserId:(id)arg1 contentInfo:(id)arg2 andThreadId:(id)arg3 ;
-(void)handleRealtimeThreadEventWithThreadInfo:(id)arg1 ;
-(void)handleRealtimeUnseenCountEventWithCount:(id)arg1 withSequenceString:(id)arg2 ;
-(IGRealtimeManager *)realtimeManager;
-(void)handleRealtimeOperation:(id)arg1 ;
-(id)pkForRealtimeOperation:(id)arg1 ;
-(void)handleRealtimeRefreshRequest;
-(unsigned)subscriptionStatus;
-(id)init;
-(IGDirectCache *)cache;
-(void)subscribeOn:(id)arg1 ;
@end

