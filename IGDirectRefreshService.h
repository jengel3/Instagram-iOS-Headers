

@class IGDirectInboxNetworker, IGDirectCache;

@interface IGDirectRefreshService : NSObject {

	IGDirectInboxNetworker* _inboxNetworker;
	IGDirectCache* _cache;

}

@property (nonatomic,readonly) IGDirectInboxNetworker * inboxNetworker;              //@synthesize inboxNetworker=_inboxNetworker - In the implementation block
@property (nonatomic,readonly) IGDirectCache * cache;                                //@synthesize cache=_cache - In the implementation block
-(IGDirectInboxNetworker *)inboxNetworker;
-(void)didLoginSuccessfulNotification:(id)arg1 ;
-(void)appWillEnterForegroundNotification:(id)arg1 ;
-(void)appDidFinishLaunchingNotification:(id)arg1 ;
-(void)forceRefreshInboxData;
-(void)dealloc;
-(id)init;
-(IGDirectCache *)cache;
-(void)setupNotifications;
@end

