

@class NSMutableDictionary;

@interface IGBadgeHelper : NSObject {

	NSMutableDictionary* _badgeDict;
	NSMutableDictionary* _timestampDict;
	char _shouldShowUnseenBadge;

}
+(id)sharedBadgeHelper;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 ;
-(int)badgeCountForBadgeName:(id)arg1 ;
-(int)totalBadgeCount;
-(id)init;
@end

