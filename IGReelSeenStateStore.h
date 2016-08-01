
#import <Instagram/IGUserSessionClearableObject.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, IGFileCoordinator, NSMutableDictionary;

@interface IGReelSeenStateStore : NSObject <IGUserSessionClearableObject> {

	NSString* _userSessionPK;
	NSObject*<OS_dispatch_queue> _archiveQueue;
	IGFileCoordinator* _fileCoordinator;
	NSMutableDictionary* _reelToLatestSeenMediaDateMap;

}

@property (nonatomic,copy,readonly) NSString * userSessionPK;                                 //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> archiveQueue;                     //@synthesize archiveQueue=_archiveQueue - In the implementation block
@property (nonatomic,readonly) IGFileCoordinator * fileCoordinator;                           //@synthesize fileCoordinator=_fileCoordinator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reelToLatestSeenMediaDateMap;              //@synthesize reelToLatestSeenMediaDateMap=_reelToLatestSeenMediaDateMap - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)setReelToLatestSeenMediaDateMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)reelToLatestSeenMediaDateMap;
-(char)updateIfNeededWithLatestSeenMediaDate:(id)arg1 forReekPK:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)archiveQueue;
-(IGFileCoordinator *)fileCoordinator;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)initWithUserSessionPK:(id)arg1 ;
-(id)latestSeenMediaDateForReelPK:(id)arg1 ;
-(void)setLatestSeenMediaDate:(id)arg1 forReelPK:(id)arg2 ;
-(void)updateWithReelToSeenMap:(id)arg1 ;
-(void)sendPendingSeenStateToServer:(id)arg1 ;
-(NSString *)userSessionPK;
-(void)archive;
@end

