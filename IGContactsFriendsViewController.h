
#import <Instagram/IGFindUsersViewController.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGContactsFriendsHelperDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@protocol IGContactsFriendsViewControllerDelegate;
@class IGContactsFriendsHelper, UIBarButtonItem, NSString;

@interface IGContactsFriendsViewController : IGFindUsersViewController <IGActionSheetDelegate, IGContactsFriendsHelperDelegate, IGRaindropAnalyticsDelegate> {

	id<IGContactsFriendsViewControllerDelegate> _delegate;
	IGContactsFriendsHelper* _helper;
	UIBarButtonItem* _configureButton;

}

@property (assign,nonatomic,__weak) id<IGContactsFriendsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGContactsFriendsHelper * helper;                                         //@synthesize helper=_helper - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * configureButton;                                        //@synthesize configureButton=_configureButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(void)updateNavigationRightBarButtonItem;
-(id)newFindUsersView;
-(void)authorizeAndFetchUsers;
-(void)contactsFriendsHelperDidTapLearnMore:(id)arg1 ;
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2 ;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2 ;
-(UIBarButtonItem *)configureButton;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(void)onConfigureButtonTapped:(id)arg1 ;
-(void)disconnectContacts;
-(void)setConfigureButton:(UIBarButtonItem *)arg1 ;
-(IGContactsFriendsHelper *)helper;
-(void)setHelper:(IGContactsFriendsHelper *)arg1 ;
-(void)setDelegate:(id<IGContactsFriendsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGContactsFriendsViewControllerDelegate>)delegate;
@end

