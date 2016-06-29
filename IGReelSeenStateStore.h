
#import <Instagram/IGUserSessionClearableObject.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableArray;

@interface IGReelSeenStateStore : NSObject <IGUserSessionClearableObject> {

	NSString* _userSessionPK;
	NSObject*<OS_dispatch_queue> _archiveQueue;
	NSMutableArray* _seenStateList;

}

@property (nonatomic,copy,readonly) NSString * userSessionPK;                          //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> archiveQueue;              //@synthesize archiveQueue=_archiveQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * seenStateList;                           //@synthesize seenStateList=_seenStateList - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)diskCacheFilePathForUser:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSString *)userSessionPK;
-(void)setSeenStateList:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)archiveQueue;
-(NSMutableArray *)seenStateList;
-(void)setLastSeenDate:(id)arg1 forReelPK:(id)arg2 ;
-(id)initWithUserSessionPK:(id)arg1 ;
-(id)lastSeenDateForReelPK:(id)arg1 ;
-(void)syncServerLastSeenDate:(id)arg1 forReelPK:(id)arg2 ;
-(void)updateWithServerSeenStateDictionary:(id)arg1 ;
-(void)archive;
-(void)clearCache;
@end

