
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGFollowButtonDelegate.h>
#import <Instagram/IGProfileMegaphoneViewDelegate.h>
#import <Instagram/IGSimilarAccountsControlDelegate.h>
#import <Instagram/IGFriendRequestHeaderViewDelegate.h>
#import <Instagram/IGSimilarAccountsViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGFeedToggleViewDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>

@protocol IGRaindropAnalyticsDelegate;
@class IGUserDetailViewController, IGUser, NSDictionary, IGProfilePictureImageView, IGStatButton, IGButton, UIImageView, IGFollowButton, IGFriendRequestHeaderView, IGCoreTextView, UIView, IGFeedToggleView, IGProfilePictureHelper, UIButton, IGSimilarAccountsControl, IGSimilarAccountsView, IGProfileMegaphoneView, UIActivityIndicatorView, NSString;

@interface IGUserDetailHeaderView : UIView <IGCoreTextLinkHandler, IGFollowButtonDelegate, IGProfileMegaphoneViewDelegate, IGSimilarAccountsControlDelegate, IGFriendRequestHeaderViewDelegate, IGSimilarAccountsViewDelegate, UIGestureRecognizerDelegate, IGProfilePictureImageViewDelegate, IGFeedToggleViewDelegate, IGProfilePictureHelperDelegate> {

	char _showingProfileMegaphone;
	char _feedRestricted;
	char _requestHeaderShowing;
	char _showingSimilarAccountsView;
	IGUserDetailViewController* _delegate;
	IGUser* _user;
	NSDictionary* _megaphoneData;
	IGProfilePictureImageView* _profilePic;
	IGStatButton* _followersButton;
	IGStatButton* _followingButton;
	IGStatButton* _mediaButton;
	IGButton* _editProfileButton;
	UIImageView* _editProfileExclamationMark;
	IGFollowButton* _followButton;
	IGButton* _similarAccountsButton;
	IGFriendRequestHeaderView* _requestHeader;
	IGCoreTextView* _infoLabelView;
	UIView* _infoLabelContainerView;
	UIView* _additionalInfoContainerView;
	IGFeedToggleView* _toggleBar;
	IGProfilePictureHelper* _profilePictureHelper;
	UIButton* _accessibilityButton;
	IGSimilarAccountsControl* _similarAccountsControl;
	IGSimilarAccountsView* _similarAccountsView;
	IGProfileMegaphoneView* _megaphoneView;
	UIActivityIndicatorView* _spinner;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;

}

@property (assign,nonatomic,__weak) IGUserDetailViewController * delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGUser * user;                                                         //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSDictionary * megaphoneData;                                          //@synthesize megaphoneData=_megaphoneData - In the implementation block
@property (assign,nonatomic) char showingProfileMegaphone;                                          //@synthesize showingProfileMegaphone=_showingProfileMegaphone - In the implementation block
@property (assign,nonatomic) char feedRestricted;                                                   //@synthesize feedRestricted=_feedRestricted - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                                //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) IGStatButton * followersButton;                                        //@synthesize followersButton=_followersButton - In the implementation block
@property (nonatomic,retain) IGStatButton * followingButton;                                        //@synthesize followingButton=_followingButton - In the implementation block
@property (nonatomic,retain) IGStatButton * mediaButton;                                            //@synthesize mediaButton=_mediaButton - In the implementation block
@property (nonatomic,retain) IGButton * editProfileButton;                                          //@synthesize editProfileButton=_editProfileButton - In the implementation block
@property (nonatomic,retain) UIImageView * editProfileExclamationMark;                              //@synthesize editProfileExclamationMark=_editProfileExclamationMark - In the implementation block
@property (nonatomic,retain) IGFollowButton * followButton;                                         //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) IGButton * similarAccountsButton;                                      //@synthesize similarAccountsButton=_similarAccountsButton - In the implementation block
@property (nonatomic,retain) IGFriendRequestHeaderView * requestHeader;                             //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,retain) IGCoreTextView * infoLabelView;                                        //@synthesize infoLabelView=_infoLabelView - In the implementation block
@property (nonatomic,retain) UIView * infoLabelContainerView;                                       //@synthesize infoLabelContainerView=_infoLabelContainerView - In the implementation block
@property (nonatomic,retain) UIView * additionalInfoContainerView;                                  //@synthesize additionalInfoContainerView=_additionalInfoContainerView - In the implementation block
@property (nonatomic,retain) IGFeedToggleView * toggleBar;                                          //@synthesize toggleBar=_toggleBar - In the implementation block
@property (nonatomic,retain) IGProfilePictureHelper * profilePictureHelper;                         //@synthesize profilePictureHelper=_profilePictureHelper - In the implementation block
@property (assign,nonatomic) char requestHeaderShowing;                                             //@synthesize requestHeaderShowing=_requestHeaderShowing - In the implementation block
@property (nonatomic,retain) UIButton * accessibilityButton;                                        //@synthesize accessibilityButton=_accessibilityButton - In the implementation block
@property (assign,nonatomic) char showingSimilarAccountsView;                                       //@synthesize showingSimilarAccountsView=_showingSimilarAccountsView - In the implementation block
@property (nonatomic,retain) IGSimilarAccountsControl * similarAccountsControl;                     //@synthesize similarAccountsControl=_similarAccountsControl - In the implementation block
@property (nonatomic,retain) IGSimilarAccountsView * similarAccountsView;                           //@synthesize similarAccountsView=_similarAccountsView - In the implementation block
@property (nonatomic,retain) IGProfileMegaphoneView * megaphoneView;                                //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                     //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 analyticsDelegate:(id)arg2 ;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(IGFollowButton *)followButton;
-(IGStatButton *)followingButton;
-(void)setFollowButton:(IGFollowButton *)arg1 ;
-(void)setFollowingButton:(IGStatButton *)arg1 ;
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)profilePictureTapped:(id)arg1 ;
-(void)setMegaphoneView:(IGProfileMegaphoneView *)arg1 ;
-(IGProfileMegaphoneView *)megaphoneView;
-(void)setFeedRestricted:(char)arg1 ;
-(char)feedRestricted;
-(UIButton *)accessibilityButton;
-(void)setAccessibilityButton:(UIButton *)arg1 ;
-(void)feedToggle:(id)arg1 selectedButton:(int)arg2 ;
-(void)similarAccountsControl:(id)arg1 didReplenishUserAtIndexPath:(id)arg2 ;
-(void)similarAccountsViewDidTapOnSeeAllAccounts:(id)arg1 ;
-(void)onFriendStatusChanged:(id)arg1 ;
-(IGStatButton *)followersButton;
-(void)setFollowersButton:(IGStatButton *)arg1 ;
-(IGSimilarAccountsControl *)similarAccountsControl;
-(IGSimilarAccountsView *)similarAccountsView;
-(void)setSimilarAccountsView:(IGSimilarAccountsView *)arg1 ;
-(void)setSimilarAccountsControl:(IGSimilarAccountsControl *)arg1 ;
-(void)onFollowButtonTapped:(id)arg1 ;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 ;
-(char)profilePictureHelperShouldShowRemovePicture:(id)arg1 ;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1 ;
-(void)requestHeaderIsShowing:(char)arg1 ;
-(void)dismissMegaphoneAndRemoveExclamationMark:(char)arg1 ;
-(IGStatButton *)mediaButton;
-(UIView *)additionalInfoContainerView;
-(UIView *)infoLabelContainerView;
-(id)newStatButton;
-(void)mediaButtonTapped:(id)arg1 ;
-(void)followersButtonTapped:(id)arg1 ;
-(void)followingButtonTapped:(id)arg1 ;
-(IGCoreTextView *)infoLabelView;
-(void)setShowingProfileMegaphone:(char)arg1 ;
-(CGRect)frameForFollowButton;
-(CGRect)frameForSimilarAccountsButton;
-(void)onSimilarAccountsButtonTapped:(id)arg1 ;
-(void)updateSimilarAccountsButton;
-(CGRect)frameForEditProfileButton;
-(void)onEditProfileTapped;
-(void)userChanged:(id)arg1 ;
-(void)onOwnMediaAdded:(id)arg1 ;
-(void)onOwnMediaDeleted:(id)arg1 ;
-(void)updateFollowButton;
-(void)updateAllContentViews;
-(void)toggleSimilarAccountsView:(char)arg1 ;
-(char)showingSimilarAccountsView;
-(void)setShowingSimilarAccountsView:(char)arg1 ;
-(IGButton *)similarAccountsButton;
-(IGFeedToggleView *)toggleBar;
-(void)fetchSimilarUsersWithCompletion:(/*^block*/id)arg1 ;
-(void)setRequestHeaderShowing:(char)arg1 ;
-(void)setToggleBar:(IGFeedToggleView *)arg1 ;
-(char)enableLists;
-(id)friendlyURLString;
-(void)onExternalLinkTapped;
-(IGButton *)editProfileButton;
-(UIImageView *)editProfileExclamationMark;
-(NSDictionary *)megaphoneData;
-(char)requestHeaderShowing;
-(char)showingProfileMegaphone;
-(void)updateRequestHeader;
-(void)updateCountLabels;
-(void)updateToggleBar;
-(void)updateToggleButtons;
-(void)updateBioText;
-(void)presentUserListWithURL:(id)arg1 title:(id)arg2 asListType:(int)arg3 contextPK:(id)arg4 ;
-(IGProfilePictureHelper *)profilePictureHelper;
-(void)onFeedViewModeChanged:(int)arg1 ;
-(void)setMegaphoneData:(NSDictionary *)arg1 ;
-(void)setMediaButton:(IGStatButton *)arg1 ;
-(void)setEditProfileButton:(IGButton *)arg1 ;
-(void)setEditProfileExclamationMark:(UIImageView *)arg1 ;
-(void)setSimilarAccountsButton:(IGButton *)arg1 ;
-(void)setRequestHeader:(IGFriendRequestHeaderView *)arg1 ;
-(void)setInfoLabelView:(IGCoreTextView *)arg1 ;
-(void)setInfoLabelContainerView:(UIView *)arg1 ;
-(void)setAdditionalInfoContainerView:(UIView *)arg1 ;
-(void)setProfilePictureHelper:(IGProfilePictureHelper *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(IGUserDetailViewController *)arg1 ;
-(void)dealloc;
-(IGUserDetailViewController *)delegate;
-(void)updateLayout;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(IGFriendRequestHeaderView *)requestHeader;
@end

