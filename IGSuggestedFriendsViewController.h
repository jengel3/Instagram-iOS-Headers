
#import <Instagram/IGFindUsersViewController.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@class NSString;

@interface IGSuggestedFriendsViewController : IGFindUsersViewController <IGRaindropAnalyticsDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)enableNavState;
-(id)newFindUsersViewDataSource;
-(void)authorizeAndFetchUsers;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(id)newFindUsersView;
-(id)init;
@end

