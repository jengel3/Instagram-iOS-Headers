

@class NSMutableDictionary;

@interface IGBadgeHelper : NSObject {

	NSMutableDictionary* _badgeDict;
	char _shouldShowUnseenBadge;

}
+(id)sharedBadgeHelper;
-(void)updateBadgeDictWithValue:(int)arg1 forKey:(id)arg2 ;
-(int)badgeCountForKey:(id)arg1 ;
-(int)totalBadgeCount;
-(id)init;
@end

