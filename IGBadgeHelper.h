

@class NSMutableDictionary, NSDictionary, NSMutableArray;

@interface IGBadgeHelper : NSObject {

	NSMutableDictionary* _badgeDict;
	NSMutableDictionary* _timestampDict;
	NSDictionary* _multipleAccountsBadgeDict;
	NSMutableArray* _updatedBadgeNames;
	char _multipleAccountsBadgingEnabled;

}
+(id)sharedBadgeHelper;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 ;
-(int)badgeCountForBadgeName:(id)arg1 ;
-(void)fetchBadgesDict;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 shouldHoldUpdates:(char)arg4 ;
-(void)performBadgeUpdates;
-(int)totalBadgeCount;
-(void)updateNeedsAttention;
-(void)broadcastUpdatedNeedsAttentionValue:(char)arg1 ;
-(char)shouldNeedAttention;
-(int)badgeCountForUserID:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

