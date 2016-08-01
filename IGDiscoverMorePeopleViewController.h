
#import <Instagram/IGFindUsersViewController.h>
#import <Instagram/IGContactsFriendsViewControllerDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@class UIView, IGDiscoverMorePeopleConnectionView, NSMutableSet, NSString;

@interface IGDiscoverMorePeopleViewController : IGFindUsersViewController <IGContactsFriendsViewControllerDelegate, IGRaindropAnalyticsDelegate> {

	UIView* _connectionHeaderView;
	IGDiscoverMorePeopleConnectionView* _facebookConnectionView;
	IGDiscoverMorePeopleConnectionView* _contactsConnectionView;
	IGDiscoverMorePeopleConnectionView* _vkConnectionView;
	UIView* _suggestionTitleView;
	NSMutableSet* _displayedUsers;

}

@property (nonatomic,retain) UIView * connectionHeaderView;                                            //@synthesize connectionHeaderView=_connectionHeaderView - In the implementation block
@property (nonatomic,retain) IGDiscoverMorePeopleConnectionView * facebookConnectionView;              //@synthesize facebookConnectionView=_facebookConnectionView - In the implementation block
@property (nonatomic,retain) IGDiscoverMorePeopleConnectionView * contactsConnectionView;              //@synthesize contactsConnectionView=_contactsConnectionView - In the implementation block
@property (nonatomic,retain) IGDiscoverMorePeopleConnectionView * vkConnectionView;                    //@synthesize vkConnectionView=_vkConnectionView - In the implementation block
@property (nonatomic,retain) UIView * suggestionTitleView;                                             //@synthesize suggestionTitleView=_suggestionTitleView - In the implementation block
@property (nonatomic,retain) NSMutableSet * displayedUsers;                                            //@synthesize displayedUsers=_displayedUsers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)authorizeAndFetchUsers;
-(void)contactsViewControllerWillDisconnectContacts:(id)arg1 ;
-(void)contactsViewController:(id)arg1 didDisconnectContactsWithSuccess:(char)arg2 ;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(id)newFindUsersView;
-(void)updateNavigationRightBarButtonItem;
-(IGDiscoverMorePeopleConnectionView *)facebookConnectionView;
-(IGDiscoverMorePeopleConnectionView *)contactsConnectionView;
-(IGDiscoverMorePeopleConnectionView *)vkConnectionView;
-(UIView *)suggestionTitleView;
-(UIView *)connectionHeaderView;
-(void)findUsersView:(id)arg1 didTapOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)logAYMFEvent:(id)arg1 userID:(id)arg2 atPosition:(unsigned)arg3 fullScreen:(char)arg4 algorithm:(id)arg5 ;
-(NSMutableSet *)displayedUsers;
-(id)newFindUsersViewDataSource;
-(void)findUsersView:(id)arg1 didFollowUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)findUsersView:(id)arg1 willDisplayOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)setConnectionHeaderView:(UIView *)arg1 ;
-(void)setFacebookConnectionView:(IGDiscoverMorePeopleConnectionView *)arg1 ;
-(void)setContactsConnectionView:(IGDiscoverMorePeopleConnectionView *)arg1 ;
-(void)setVkConnectionView:(IGDiscoverMorePeopleConnectionView *)arg1 ;
-(void)setSuggestionTitleView:(UIView *)arg1 ;
-(void)setDisplayedUsers:(NSMutableSet *)arg1 ;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
@end

