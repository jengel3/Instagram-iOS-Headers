
#import <Instagram/IGFindUsersViewController.h>
#import <Instagram/IGFindFriendsHelperDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@class IGVKFriendsHelper, NSString;

@interface IGVKFriendsViewController : IGFindUsersViewController <IGFindFriendsHelperDelegate, IGRaindropAnalyticsDelegate> {

	IGVKFriendsHelper* _helper;

}

@property (nonatomic,retain) IGVKFriendsHelper * helper;              //@synthesize helper=_helper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)authorizeAndFetchUsers;
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2 ;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2 ;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(id)newFindUsersView;
-(IGVKFriendsHelper *)helper;
-(void)setHelper:(IGVKFriendsHelper *)arg1 ;
-(void)dealloc;
-(id)init;
@end

