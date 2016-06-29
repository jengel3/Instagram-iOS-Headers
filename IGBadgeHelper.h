

@class NSMutableDictionary, NSDictionary, NSMutableArray;

@interface IGBadgeHelper : NSObject {

	NSMutableDictionary* _badgeDict;
	NSMutableDictionary* _timestampDict;
	NSDictionary* _multipleAccountsBadgeDict;
	NSMutableArray* _updatedBadgeNames;

}
+(id)sharedBadgeHelper;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 ;
-(void)restoreDirectBadgeCount;
-(void)fetchBadgesDict;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 shouldHoldUpdates:(char)arg4 ;
-(void)persistDirectBadgeCount;
-(void)performBadgeUpdates;
-(int)totalBadgeCount;
-(void)updateNeedsAttention;
-(void)broadcastUpdatedNeedsAttentionValue:(char)arg1 ;
-(int)badgeCountForUserID:(id)arg1 ;
-(char)shouldNeedAttention;
-(int)badgeCountForBadgeName:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

