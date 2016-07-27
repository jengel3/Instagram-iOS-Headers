
#import <Instagram/IGUserSessionClearableObject.h>

@class NSMutableDictionary, NSDictionary, NSMutableArray, IGUserService, NSString;

@interface IGBadgeHelper : NSObject <IGUserSessionClearableObject> {

	NSMutableDictionary* _badgeDict;
	NSMutableDictionary* _timestampDict;
	NSDictionary* _multipleAccountsBadgeDict;
	NSMutableArray* _updatedBadgeNames;
	IGUserService* _userService;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 ;
-(void)restoreDirectBadgeCount;
-(void)fetchBadgesDict;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 timestamp:(id)arg3 shouldHoldUpdates:(char)arg4 ;
-(void)persistDirectBadgeCount;
-(void)performBadgeUpdates;
-(int)totalBadgeCount;
-(void)updateNeedsAttention;
-(void)broadcastUpdatedNeedsAttentionValue:(char)arg1 ;
-(id)initWithUserService:(id)arg1 ;
-(int)badgeCountForUserID:(id)arg1 ;
-(char)shouldNeedAttention;
-(int)badgeCountForBadgeName:(id)arg1 ;
-(void)dealloc;
@end

