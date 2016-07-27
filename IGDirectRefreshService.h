
#import <Instagram/IGUserSessionClearableObject.h>

@class IGDirectInboxNetworker, IGDirectCache, NSString;

@interface IGDirectRefreshService : NSObject <IGUserSessionClearableObject> {

	IGDirectInboxNetworker* _inboxNetworker;
	IGDirectCache* _cache;

}

@property (nonatomic,readonly) IGDirectInboxNetworker * inboxNetworker;              //@synthesize inboxNetworker=_inboxNetworker - In the implementation block
@property (nonatomic,readonly) IGDirectCache * cache;                                //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)forceRefreshInboxData;
-(IGDirectInboxNetworker *)inboxNetworker;
-(void)appWillEnterForegroundNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(IGDirectCache *)cache;
-(void)setupNotifications;
@end

