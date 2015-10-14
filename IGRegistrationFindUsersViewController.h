/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGFindUsersViewDelegate.h>
#import <Instagram/IGContactsFriendsHelperDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@protocol IGRegistrationFindUsersViewControllerDelegate;
@class IGFindUsersViewDataSource, UIView, UIActivityIndicatorView, IGFindUsersView, UIBarButtonItem, IGContactsFriendsHelper, IGGroupedTableView, NSArray, NSMutableArray, NSString;

@interface IGRegistrationFindUsersViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGFindUsersViewDelegate, IGContactsFriendsHelperDelegate, IGRaindropAnalyticsDelegate> {

	char _showProfilePicture;
	char _roadblock;
	char _skipAlertShown;
	id<IGRegistrationFindUsersViewControllerDelegate> _delegate;
	IGFindUsersViewDataSource* _findUsersViewDataSource;
	UIView* _imageHeaderView;
	UIActivityIndicatorView* _spinner;
	IGFindUsersView* _usersView;
	UIBarButtonItem* _nextButton;
	int _followCount;
	IGContactsFriendsHelper* _contactsHelper;
	IGGroupedTableView* _pickerTableView;
	UIView* _pickerFooterView;
	int _mode;
	NSArray* _sourceModes;
	NSMutableArray* _sourceCounts;
	int _selectedRow;
	int _effectiveMagicFriendNumber;
	int _autoloadSource;

}

@property (assign,nonatomic,__weak) id<IGRegistrationFindUsersViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int validSourceCount; 
@property (nonatomic,retain) IGFindUsersViewDataSource * findUsersViewDataSource;                            //@synthesize findUsersViewDataSource=_findUsersViewDataSource - In the implementation block
@property (nonatomic,retain) UIView * imageHeaderView;                                                       //@synthesize imageHeaderView=_imageHeaderView - In the implementation block
@property (assign,nonatomic) char showProfilePicture;                                                        //@synthesize showProfilePicture=_showProfilePicture - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGFindUsersView * usersView;                                                    //@synthesize usersView=_usersView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                                                   //@synthesize nextButton=_nextButton - In the implementation block
@property (assign,nonatomic) int followCount;                                                                //@synthesize followCount=_followCount - In the implementation block
@property (nonatomic,retain) IGContactsFriendsHelper * contactsHelper;                                       //@synthesize contactsHelper=_contactsHelper - In the implementation block
@property (nonatomic,retain) IGGroupedTableView * pickerTableView;                                           //@synthesize pickerTableView=_pickerTableView - In the implementation block
@property (nonatomic,retain) UIView * pickerFooterView;                                                      //@synthesize pickerFooterView=_pickerFooterView - In the implementation block
@property (assign,nonatomic) int mode;                                                                       //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSArray * sourceModes;                                                          //@synthesize sourceModes=_sourceModes - In the implementation block
@property (nonatomic,retain) NSMutableArray * sourceCounts;                                                  //@synthesize sourceCounts=_sourceCounts - In the implementation block
@property (assign,nonatomic) int selectedRow;                                                                //@synthesize selectedRow=_selectedRow - In the implementation block
@property (assign,nonatomic) int effectiveMagicFriendNumber;                                                 //@synthesize effectiveMagicFriendNumber=_effectiveMagicFriendNumber - In the implementation block
@property (assign,nonatomic) char roadblock;                                                                 //@synthesize roadblock=_roadblock - In the implementation block
@property (assign,nonatomic) int autoloadSource;                                                             //@synthesize autoloadSource=_autoloadSource - In the implementation block
@property (assign,nonatomic) char skipAlertShown;                                                            //@synthesize skipAlertShown=_skipAlertShown - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(char)disableNavigationGesture;
-(void)onFacebookAuthSuccess;
-(void)findUsersView:(id)arg1 didFollowUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(IGFindUsersViewDataSource *)findUsersViewDataSource;
-(void)setFindUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 ;
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2 ;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2 ;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(void)onFacebookAuthFailure;
-(IGFindUsersView *)usersView;
-(void)findUsersView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)findUsersView:(id)arg1 didFollowAllUsers:(id)arg2 ;
-(void)setUsersView:(IGFindUsersView *)arg1 ;
-(void)onVkontakteAuthSuccessDismissOAuth:(char)arg1 ;
-(void)onVkontakteAuthSuccess;
-(void)onVkontakteAuthFailure;
-(void)continueRegistration;
-(void)setSourceModes:(NSArray *)arg1 ;
-(int)autoloadSource;
-(char)showProfilePicture;
-(void)setImageHeaderView:(UIView *)arg1 ;
-(IGGroupedTableView *)pickerTableView;
-(char)roadblock;
-(NSArray *)sourceModes;
-(void)cancelUserFetch;
-(NSMutableArray *)sourceCounts;
-(void)setSourceCount:(int)arg1 forMode:(int)arg2 ;
-(int)validSourceCount;
-(void)setEffectiveMagicFriendNumber:(int)arg1 ;
-(UIView *)imageHeaderView;
-(void)setFollowCount:(int)arg1 ;
-(int)followCount;
-(UIView *)pickerFooterView;
-(void)skipAction;
-(void)setSelectedRow:(int)arg1 ;
-(void)fetchFacebookFriends;
-(void)fetchAddressbookFriends;
-(void)fetchVKFriends;
-(char)skipAlertShown;
-(int)effectiveMagicFriendNumber;
-(void)setSkipAlertShown:(char)arg1 ;
-(id)initWithMode:(int)arg1 autoloadSource:(int)arg2 roadBlock:(char)arg3 showProfilePicture:(char)arg4 ;
-(int)invalidateCountForMode:(int)arg1 ;
-(int)friendListType;
-(void)setShowProfilePicture:(char)arg1 ;
-(IGContactsFriendsHelper *)contactsHelper;
-(void)setContactsHelper:(IGContactsFriendsHelper *)arg1 ;
-(void)setPickerTableView:(IGGroupedTableView *)arg1 ;
-(void)setPickerFooterView:(UIView *)arg1 ;
-(void)setSourceCounts:(NSMutableArray *)arg1 ;
-(void)setRoadblock:(char)arg1 ;
-(void)setAutoloadSource:(int)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGRegistrationFindUsersViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGRegistrationFindUsersViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(UIActivityIndicatorView *)spinner;
-(void)setNextButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)nextButton;
-(int)selectedRow;
@end

