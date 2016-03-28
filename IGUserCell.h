
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPlainTableViewCell.h>
#import <Instagram/IGFollowButtonDelegate.h>

@protocol IGUserCellDelegate, IGRaindropAnalyticsDelegate;
@class IGUser, IGProfilePictureImageView, IGFollowButton, UIButton, IGKVOHandle, UILabel, UIView, UIImageView, IGFollowerListChainingButtonController, NSString;

@interface IGUserCell : IGPlainTableViewCell <IGFollowButtonDelegate> {

	char _showByline;
	char _showShortByline;
	char _showVerifiedBadge;
	IGUser* _user;
	int _userCellAccessoryType;
	IGProfilePictureImageView* _profilePicture;
	IGFollowButton* _followButton;
	/*^block*/id _followActionBlock;
	int _layoutOption;
	float _textLabelSpacing;
	id<IGUserCellDelegate> _delegate;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	UIButton* _dismissButton;
	IGKVOHandle* _favoriteButtonWidthListener;
	UILabel* _bylineLabel;
	UIView* _topLineSeperator;
	UIImageView* _verifiedBadgeImageView;
	IGFollowerListChainingButtonController* _chainingFollowButtonController;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) IGUser * user;                                                                        //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) int userCellAccessoryType;                                                            //@synthesize userCellAccessoryType=_userCellAccessoryType - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePicture;                                           //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) IGFollowButton * followButton;                                                        //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,copy) id followActionBlock;                                                                   //@synthesize followActionBlock=_followActionBlock - In the implementation block
@property (assign,nonatomic) int layoutOption;                                                                     //@synthesize layoutOption=_layoutOption - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                                                  //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) float textLabelSpacing;                                                               //@synthesize textLabelSpacing=_textLabelSpacing - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserCellDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showByline;                                                                      //@synthesize showByline=_showByline - In the implementation block
@property (assign,nonatomic) char showShortByline;                                                                 //@synthesize showShortByline=_showShortByline - In the implementation block
@property (assign,nonatomic) char showVerifiedBadge;                                                               //@synthesize showVerifiedBadge=_showVerifiedBadge - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;                             //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                                             //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) IGKVOHandle * favoriteButtonWidthListener;                                            //@synthesize favoriteButtonWidthListener=_favoriteButtonWidthListener - In the implementation block
@property (nonatomic,retain) UILabel * bylineLabel;                                                                //@synthesize bylineLabel=_bylineLabel - In the implementation block
@property (nonatomic,retain) UIView * topLineSeperator;                                                            //@synthesize topLineSeperator=_topLineSeperator - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedBadgeImageView;                                                 //@synthesize verifiedBadgeImageView=_verifiedBadgeImageView - In the implementation block
@property (nonatomic,retain) IGFollowerListChainingButtonController * chainingFollowButtonController;              //@synthesize chainingFollowButtonController=_chainingFollowButtonController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultCellSidePadding;
+(float)defaultCellHeightWithByline;
+(UIEdgeInsets)defaultCellSeparatorInsets;
+(float)defaultCellHeight;
-(void)setUserCellAccessoryType:(int)arg1 ;
-(void)followButtonDidUpdateButtonState:(id)arg1 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(IGFollowButton *)followButton;
-(void)setFollowButton:(IGFollowButton *)arg1 ;
-(IGProfilePictureImageView *)profilePicture;
-(void)setProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(UIImageView *)verifiedBadgeImageView;
-(void)setVerifiedBadgeImageView:(UIImageView *)arg1 ;
-(UILabel *)bylineLabel;
-(void)setBylineLabel:(UILabel *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2 ;
-(void)setShowDismissButton:(char)arg1 ;
-(void)onDismissButtonTapped:(id)arg1 ;
-(void)setLayoutOption:(int)arg1 ;
-(void)setShowTopSeperator:(char)arg1 withEdgeInsets:(UIEdgeInsets)arg2 ;
-(void)setFollowActionBlock:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 analyticsDelegate:(id)arg3 ;
-(void)setUpFollowButton;
-(IGKVOHandle *)favoriteButtonWidthListener;
-(void)setTextLabelSpacing:(float)arg1 ;
-(void)onFollowButtonTapped:(id)arg1 ;
-(UIView *)topLineSeperator;
-(void)setTopLineSeperator:(UIView *)arg1 ;
-(IGFollowerListChainingButtonController *)chainingFollowButtonController;
-(void)setChainingFollowButtonController:(IGFollowerListChainingButtonController *)arg1 ;
-(void)createChainingFollowButton;
-(char)showByline;
-(char)showShortByline;
-(char)showVerifiedBadge;
-(void)setupBylineLabel;
-(void)setupVerifiedBadgeImageView;
-(int)layoutOption;
-(float)textLabelSpacing;
-(id)followActionBlock;
-(int)userCellAccessoryType;
-(void)setShowByline:(char)arg1 ;
-(void)setShowShortByline:(char)arg1 ;
-(void)setShowVerifiedBadge:(char)arg1 ;
-(void)setFavoriteButtonWidthListener:(IGKVOHandle *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)setDelegate:(id<IGUserCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGUserCellDelegate>)delegate;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
@end

