
#import <Instagram/SRWebSocketDelegate.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class SRWebSocket, IGRealtimeSubscription, NSMutableDictionary, NSString, IGRealtimeConnectionInfo, IGTokenBucket;

@interface IGRealtimeClient : NSObject <SRWebSocketDelegate, IGUserSessionClearableObject> {

	SRWebSocket* _webSocket;
	IGRealtimeSubscription* _subscription;
	double _backoffInterval;
	int _reachabilityStatus;
	char _pendingConnect;
	NSMutableDictionary* _messageKeyToMessageCompletion;
	NSMutableDictionary* _messageKeyToMessageFailure;
	NSString* _userPK;
	char _authInfoSent;
	char _shouldConnectToIRIS;
	IGRealtimeConnectionInfo* _connectionInfo;
	unsigned _status;
	NSMutableDictionary* _topicToSubscription;
	IGTokenBucket* _rateLimiter;
	unsigned _backgroundTask;
	NSString* _archivePath;
	double _idleTimeoutDuration;

}

@property (nonatomic,retain) IGRealtimeConnectionInfo * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (assign) unsigned status;                                                  //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char authInfoSent;                                      //@synthesize authInfoSent=_authInfoSent - In the implementation block
@property (assign) double idleTimeoutDuration;                                       //@synthesize idleTimeoutDuration=_idleTimeoutDuration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * topicToSubscription;              //@synthesize topicToSubscription=_topicToSubscription - In the implementation block
@property (nonatomic,retain) IGTokenBucket * rateLimiter;                            //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (assign,nonatomic) unsigned backgroundTask;                                //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) NSString * archivePath;                                 //@synthesize archivePath=_archivePath - In the implementation block
@property (nonatomic,readonly) char shouldConnectToIRIS;                             //@synthesize shouldConnectToIRIS=_shouldConnectToIRIS - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cachePathForUserPK:(id)arg1 ;
+(void)clearForUserPK:(id)arg1 ;
-(void)webSocketDidOpen:(id)arg1 ;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)webSocket:(id)arg1 didCloseWithCode:(int)arg2 reason:(id)arg3 wasClean:(char)arg4 ;
-(void)unarchiveConnectionInfoAndConnectIfPossible;
-(NSMutableDictionary *)topicToSubscription;
-(void)sendSubscribeMessageForSubscription:(id)arg1 ;
-(void)sendUnsubscribeMessageForTopic:(id)arg1 ;
-(void)removeSubscriptionForTopic:(id)arg1 ;
-(id)requestToConnectFromURL:(id)arg1 ;
-(char)shouldConnectToIRIS;
-(void)setAuthInfoSent:(char)arg1 ;
-(void)idleTimedOut;
-(void)cancelSubscriptionTimeoutForTopic:(id)arg1 ;
-(void)removeAllSubscriptions;
-(unsigned)backgroundTask;
-(NSString *)archivePath;
-(void)startSubscriptionTimeoutForTopic:(id)arg1 ;
-(void)subscriptionTimedOutForTopic:(id)arg1 ;
-(double)idleTimeoutDuration;
-(void)restartIdleTimeoutTimer;
-(void)setIdleTimeoutDuration:(double)arg1 ;
-(void)reconnectWithBackoff;
-(void)handleBroadcastResponse:(id)arg1 ;
-(void)reconnectAfterRandomBackoff;
-(void)megaCleanWithReason:(id)arg1 ;
-(void)webSocket:(id)arg1 didReceivePing:(id)arg2 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)initWithUserPK:(id)arg1 shouldConnectToIRIS:(char)arg2 ;
-(void)addSubscription:(id)arg1 ;
-(unsigned)subscriptionStatusForTopic:(id)arg1 ;
-(char)hasSubscriptionForTopic:(id)arg1 ;
-(void)sendMessage:(id)arg1 messageKey:(id)arg2 useXProtocol:(char)arg3 successHandler:(/*^block*/id)arg4 failureHandler:(/*^block*/id)arg5 ;
-(char)authInfoSent;
-(void)setTopicToSubscription:(NSMutableDictionary *)arg1 ;
-(void)setArchivePath:(NSString *)arg1 ;
-(void)setConnectionInfo:(IGRealtimeConnectionInfo *)arg1 ;
-(IGRealtimeConnectionInfo *)connectionInfo;
-(void)archive;
-(void)dealloc;
-(void)connect;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(void)updateStatus:(unsigned)arg1 ;
-(void)setBackgroundTask:(unsigned)arg1 ;
-(IGTokenBucket *)rateLimiter;
-(void)setRateLimiter:(IGTokenBucket *)arg1 ;
-(void)didBecomeActive;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)didEnterBackground;
-(void)disconnectWithReason:(id)arg1 ;
-(void)endBackgroundTask;
@end

