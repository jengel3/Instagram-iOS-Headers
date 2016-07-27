
#import <Instagram/IGUserSessionClearableObject.h>

@protocol OS_dispatch_queue;
@class NSString, IGSeenStateObject, NSObject;

@interface IGSeenStateStore : NSObject <IGUserSessionClearableObject> {

	NSString* _userSessionPK;
	IGSeenStateObject* _seenStateObject;
	NSObject*<OS_dispatch_queue> _archiveQueue;

}

@property (nonatomic,copy,readonly) NSString * userSessionPK;                          //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,readonly) IGSeenStateObject * seenStateObject;                    //@synthesize seenStateObject=_seenStateObject - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> archiveQueue;              //@synthesize archiveQueue=_archiveQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)diskCacheFilePathForUser:(id)arg1 ;
+(void)clearForUserPK:(id)arg1 ;
+(void)removeFromDisk:(id)arg1 ;
-(NSString *)userSessionPK;
-(NSObject*<OS_dispatch_queue>)archiveQueue;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)initWithUserSessionPK:(id)arg1 ;
-(void)saveToDisk;
-(void)markSeenForFeedItem:(id)arg1 ;
-(id)seenIDsString;
-(id)unseenIDsString;
-(void)loadFromDisk;
-(void)validateSeenStateObject;
-(void)updateSeenStateObjectWithSeenIDParameter:(id)arg1 ;
-(void)logSeenStateStoreWithAction:(id)arg1 succeed:(char)arg2 extra:(id)arg3 ;
-(void)updateSeenStateOnRequestSuccessWithFeedItems:(id)arg1 seenIDsStringParameter:(id)arg2 isFirstPage:(char)arg3 ;
-(IGSeenStateObject *)seenStateObject;
@end

