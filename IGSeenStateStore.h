
#import <Instagram/IGUserSessionClearableObject.h>

@protocol OS_dispatch_queue;
@class NSString, IGSeenStateObject, NSObject;

@interface IGSeenStateStore : NSObject <IGUserSessionClearableObject> {

	char _isEmployee;
	NSString* _userSessionPK;
	IGSeenStateObject* _seenStateObject;
	NSObject*<OS_dispatch_queue> _archiveQueue;

}

@property (nonatomic,copy,readonly) NSString * userSessionPK;                          //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,readonly) char isEmployee;                                        //@synthesize isEmployee=_isEmployee - In the implementation block
@property (nonatomic,readonly) IGSeenStateObject * seenStateObject;                    //@synthesize seenStateObject=_seenStateObject - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> archiveQueue;              //@synthesize archiveQueue=_archiveQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(void)removeFromDisk:(id)arg1 ;
+(id)diskCacheFilePathForUser:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)archiveQueue;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSString *)userSessionPK;
-(void)saveToDisk;
-(void)markSeenForFeedItem:(id)arg1 ;
-(id)seenIDsString;
-(id)unseenIDsString;
-(void)loadFromDisk;
-(void)validateSeenStateObject;
-(void)updateSeenStateObjectWithSeenIDParameter:(id)arg1 ;
-(void)logSeenStateStoreWithAction:(id)arg1 succeed:(char)arg2 extra:(id)arg3 ;
-(void)logSeenStateEventWithName:(id)arg1 action:(id)arg2 succeed:(char)arg3 extra:(id)arg4 ;
-(id)initWithUserSessionPK:(id)arg1 isEmployee:(char)arg2 ;
-(void)updateSeenStateOnRequestSuccessWithFeedItems:(id)arg1 seenIDsStringParameter:(id)arg2 isFirstPage:(char)arg3 ;
-(IGSeenStateObject *)seenStateObject;
-(char)isEmployee;
@end

