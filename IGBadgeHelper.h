

@class NSMutableDictionary, NSMutableArray;

@interface IGBadgeHelper : NSObject {

	NSMutableDictionary* _badgeDict;
	NSMutableDictionary* _timestampDict;
	NSMutableArray* _updatedBadgeNames;
	char _shouldShowUnseenBadge;

}
+(id)sharedBadgeHelper;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 ;
-(int)badgeCountForBadgeName:(id)arg1 ;
-(id)initWithShouldShowUnseenBadge:(char)arg1 ;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 shouldHoldUpdates:(char)arg4 ;
-(void)performBadgeUpdates;
-(int)totalBadgeCount;
-(void)fetchBadgesInfoWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
@end

