
#import <Instagram/SRWebSocketDelegate.h>

@class SRWebSocket, IGRealtimeSubscription, NSMutableDictionary, NSURL, IGTokenBucket, NSString;

@interface IGRealtimeClient : NSObject <SRWebSocketDelegate> {

	SRWebSocket* _webSocket;
	IGRealtimeSubscription* _subscription;
	double _backoffInterval;
	int _reachabilityStatus;
	char _pendingConnect;
	NSMutableDictionary* _contextIDToMessageCompletion;
	NSMutableDictionary* _contextIDToMessageFailure;
	unsigned _status;
	NSMutableDictionary* _topicToSubscription;
	NSURL* _url;
	IGTokenBucket* _rateLimiter;
	unsigned _backgroundTask;
	double _idleTimeoutDuration;

}

@property (assign) unsigned status;                                                  //@synthesize status=_status - In the implementation block
@property (assign) double idleTimeoutDuration;                                       //@synthesize idleTimeoutDuration=_idleTimeoutDuration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * topicToSubscription;              //@synthesize topicToSubscription=_topicToSubscription - In the implementation block
@property (nonatomic,retain) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) IGTokenBucket * rateLimiter;                            //@synthesize rateLimiter=_rateLimiter - In the implementation block
@property (assign,nonatomic) unsigned backgroundTask;                                //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClient;
-(void)sendMessage:(id)arg1 contextID:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(unsigned)subscriptionStatusForTopic:(id)arg1 ;
-(void)removeSubscriptionForTopic:(id)arg1 ;
-(char)hasSubscriptionForTopic:(id)arg1 ;
-(void)addSubscription:(id)arg1 ;
-(void)removeAllSubscriptions;
-(unsigned)backgroundTask;
-(NSMutableDictionary *)topicToSubscription;
-(void)sendSubscribeMessageForSubscription:(id)arg1 ;
-(void)sendUnsubscribeMessageForTopic:(id)arg1 ;
-(void)idleTimedOut;
-(void)cancelSubscriptionTimeoutForTopic:(id)arg1 ;
-(void)startSubscriptionTimeoutForTopic:(id)arg1 ;
-(void)subscriptionTimedOutForTopic:(id)arg1 ;
-(double)idleTimeoutDuration;
-(void)restartIdleTimeoutTimer;
-(void)setIdleTimeoutDuration:(double)arg1 ;
-(void)reconnectWithBackoff;
-(void)reconnectAfterRandomBackoff;
-(void)setTopicToSubscription:(NSMutableDictionary *)arg1 ;
-(void)webSocketDidOpen:(id)arg1 ;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webSocket:(id)arg1 didReceivePing:(id)arg2 ;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)webSocket:(id)arg1 didCloseWithCode:(int)arg2 reason:(id)arg3 wasClean:(char)arg4 ;
-(void)dealloc;
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
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

