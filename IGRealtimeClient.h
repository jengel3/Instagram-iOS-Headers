
#import <Instagram/SRWebSocketDelegate.h>
#import <Instagram/IGRealtimeServerPayloadHandler.h>
#import <Instagram/IGUserSessionClearableObject.h>
#import <Instagram/IGRealtimeMessageSending.h>

@class IGRealtimeConnectionInfo, SRWebSocket, IGRealtimeSubscription, NSString, NSMutableDictionary, IGTokenBucket;

@interface IGRealtimeClient : NSObject <SRWebSocketDelegate, IGRealtimeServerPayloadHandler, IGUserSessionClearableObject, IGRealtimeMessageSending> {

	char _authInfoSent;
	char _pendingConnect;
	char _shouldConnectToIRIS;
	IGRealtimeConnectionInfo* _connectionInfo;
	unsigned _status;
	SRWebSocket* _webSocket;
	IGRealtimeSubscription* _subscription;
	int _reachabilityStatus;
	NSString* _userPK;
	NSMutableDictionary* _topicToSubscription;
	IGTokenBucket* _rateLimiter;
	unsigned _backgroundTask;
	NSString* _archivePath;
	int _backgroundConnectionAttempts;
	NSMutableDictionary* _eventsToHandlersMapping;
	NSMutableDictionary* _actionsToHandlersMapping;
	double _backoffInterval;
	double _idleTimeoutDuration;

}

@property (nonatomic,retain) SRWebSocket * webSocket;                                            //@synthesize webSocket=_webSocket - In the implementation block
@property (assign,nonatomic) IGRealtimeSubscription * subscription;                              //@synthesize subscription=_subscription - In the implementation block
@property (assign,nonatomic) double backoffInterval;                                             //@synthesize backoffInterval=_backoffInterval - In the implementation block
@property (assign,nonatomic) int reachabilityStatus;                                             //@synthesize reachabilityStatus=_reachabilityStatus - In the implementation block
@property (assign,nonatomic) char pendingConnect;                                                //@synthesize pendingConnect=_pendingConnect - In the implementation block
@property (nonatomic,retain) NSString * userPK;                                                  //@synthesize userPK=_userPK - In the implementation block
@property (assign) unsigned status;                                                              //@synthesize status=_status - In the implementation block
@property (assign) double idleTimeoutDuration;                                                   //@synthesize idleTimeoutDuration=_idleTimeoutDuration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * topicToSubscription;                          //@synthesize topicToSubscription=_topicToSubscription - In the implementation block
@property (nonatomic,retain) IGTokenBucket * rateLimiter;                                        //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (assign,nonatomic) unsigned backgroundTask;                                            //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (assign,nonatomic) char authInfoSent;                                                  //@synthesize authInfoSent=_authInfoSent - In the implementation block
@property (nonatomic,copy) NSString * archivePath;                                               //@synthesize archivePath=_archivePath - In the implementation block
@property (assign,nonatomic) int backgroundConnectionAttempts;                                   //@synthesize backgroundConnectionAttempts=_backgroundConnectionAttempts - In the implementation block
@property (nonatomic,readonly) char shouldConnectToIRIS;                                         //@synthesize shouldConnectToIRIS=_shouldConnectToIRIS - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * eventsToHandlersMapping;               //@synthesize eventsToHandlersMapping=_eventsToHandlersMapping - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * actionsToHandlersMapping;              //@synthesize actionsToHandlersMapping=_actionsToHandlersMapping - In the implementation block
@property (nonatomic,retain) IGRealtimeConnectionInfo * connectionInfo;                          //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)cachePathForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(char)authInfoSent;
-(void)unregisterServerPayloadHandler:(id)arg1 ;
-(void)registerServerPayloadHandler:(id)arg1 forEvents:(id)arg2 actions:(id)arg3 ;
-(void)handlePayload:(id)arg1 ;
-(char)needsMoreTimeProcessingPayload;
-(unsigned)subscriptionStatusForTopic:(id)arg1 ;
-(void)removeSubscriptionForTopic:(id)arg1 ;
-(char)hasSubscriptionForTopic:(id)arg1 ;
-(void)addSubscription:(id)arg1 ;
-(NSString *)userPK;
-(void)setUserPK:(NSString *)arg1 ;
-(unsigned)backgroundTask;
-(id)initWithUserPK:(id)arg1 shouldConnectToIRIS:(char)arg2 ;
-(void)unarchiveConnectionInfoAndConnectIfPossible;
-(NSMutableDictionary *)topicToSubscription;
-(void)sendSubscribeMessageForSubscription:(id)arg1 ;
-(void)sendUnsubscribeMessageForTopic:(id)arg1 ;
-(void)setPendingConnect:(char)arg1 ;
-(SRWebSocket *)webSocket;
-(id)requestToConnectFromURL:(id)arg1 ;
-(char)shouldConnectToIRIS;
-(void)setAuthInfoSent:(char)arg1 ;
-(void)idleTimedOut;
-(void)cancelSubscriptionTimeoutForTopic:(id)arg1 ;
-(void)removeAllSubscriptions;
-(void)setBackgroundConnectionAttempts:(int)arg1 ;
-(void)queueEndingBackgroundTask;
-(NSString *)archivePath;
-(int)backgroundConnectionAttempts;
-(NSMutableDictionary *)actionsToHandlersMapping;
-(NSMutableDictionary *)eventsToHandlersMapping;
-(void)startSubscriptionTimeoutForTopic:(id)arg1 ;
-(void)subscriptionTimedOutForTopic:(id)arg1 ;
-(double)idleTimeoutDuration;
-(void)restartIdleTimeoutTimer;
-(void)reconnectWithBackoff;
-(void)reconnectAfterRandomBackoff;
-(void)setIdleTimeoutDuration:(double)arg1 ;
-(void)megaCleanWithReason:(id)arg1 ;
-(void)setWebSocket:(SRWebSocket *)arg1 ;
-(void)setBackoffInterval:(double)arg1 ;
-(void)setReachabilityStatus:(int)arg1 ;
-(char)pendingConnect;
-(void)setTopicToSubscription:(NSMutableDictionary *)arg1 ;
-(void)setArchivePath:(NSString *)arg1 ;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)webSocketDidOpen:(id)arg1 ;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webSocket:(id)arg1 didCloseWithCode:(int)arg2 reason:(id)arg3 wasClean:(char)arg4 ;
-(void)webSocket:(id)arg1 didReceivePing:(id)arg2 ;
-(void)setConnectionInfo:(IGRealtimeConnectionInfo *)arg1 ;
-(IGRealtimeConnectionInfo *)connectionInfo;
-(void)archive;
-(void)dealloc;
-(void)connect;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(void)updateStatus:(unsigned)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)setSubscription:(IGRealtimeSubscription *)arg1 ;
-(IGRealtimeSubscription *)subscription;
-(void)setBackgroundTask:(unsigned)arg1 ;
-(IGTokenBucket *)rateLimiter;
-(void)setRateLimiter:(IGTokenBucket *)arg1 ;
-(void)didBecomeActive;
-(double)backoffInterval;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)didEnterBackground;
-(int)reachabilityStatus;
-(void)disconnectWithReason:(id)arg1 ;
-(void)endBackgroundTask;
@end

