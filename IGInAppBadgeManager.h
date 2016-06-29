
#import <Instagram/IGUserSessionObject.h>

@class NSMutableDictionary, NSString;

@interface IGInAppBadgeManager : NSObject <IGUserSessionObject> {

	NSMutableDictionary* _badgeDict;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInAppBadgeManager;
-(void)notifyObserversOfBadgeCountUpdate:(int)arg1 forBadgeName:(id)arg2 ;
-(void)updateBadgeCount:(int)arg1 forBadgeName:(id)arg2 ;
-(void)updatePaymentsBadgeForCategory:(id)arg1 ;
-(int)badgeCountForBadgeName:(id)arg1 ;
-(id)init;
@end

