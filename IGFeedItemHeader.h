
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTimelineHeader.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGFollowButtonDelegate.h>

@protocol IGFeedItemHeaderDelegate, IGFeedItemLoggingProviderDelegate, IGRaindropAnalyticsDelegate, IGSponsorableButton;
@class NSObject, IGFeedItemHeaderViewModel, IGProfilePictureImageView, UIImageView, IGTapButton, UILabel, UIButton, IGFollowButton, IGStringStyle, NSArray, NSString;

@interface IGFeedItemHeader : IGTimelineHeader <IGProfilePictureImageViewDelegate, IGFollowButtonDelegate> {

	NSObject*<IGFeedItemHeaderDelegate> _delegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	char _alternateAccessibility;
	IGFeedItemHeaderViewModel* _viewModel;
	int _style;
	IGProfilePictureImageView* _profilePic;
	UIImageView* _userBadge;
	IGTapButton* _usernameButton;
	UILabel* _timestampLabel;
	UIButton* _locationButton;
	UIButton* _customizableButton;
	UIButton*<IGSponsorableButton> _sponsoredPostButton;
	IGFollowButton* _followButton;
	UIButton* _moreButton;
	IGStringStyle* _boldLinkStyle;
	IGStringStyle* _boldGrayStyle;
	IGStringStyle* _grayStyle;
	IGStringStyle* _boldGray7Style;
	NSArray* _accessibleElements;

}

@property (assign,nonatomic) int style;                                                       //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                          //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) UIImageView * userBadge;                                         //@synthesize userBadge=_userBadge - In the implementation block
@property (nonatomic,retain) IGTapButton * usernameButton;                                    //@synthesize usernameButton=_usernameButton - In the implementation block
@property (nonatomic,retain) UILabel * timestampLabel;                                        //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,retain) UIButton * locationButton;                                       //@synthesize locationButton=_locationButton - In the implementation block
@property (nonatomic,retain) UIButton * customizableButton;                                   //@synthesize customizableButton=_customizableButton - In the implementation block
@property (nonatomic,retain) UIButton*<IGSponsorableButton> sponsoredPostButton;              //@synthesize sponsoredPostButton=_sponsoredPostButton - In the implementation block
@property (nonatomic,retain) IGFollowButton * followButton;                                   //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                           //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldLinkStyle;                                   //@synthesize boldLinkStyle=_boldLinkStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldGrayStyle;                                   //@synthesize boldGrayStyle=_boldGrayStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * grayStyle;                                       //@synthesize grayStyle=_grayStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldGray7Style;                                  //@synthesize boldGray7Style=_boldGray7Style - In the implementation block
@property (nonatomic,retain) NSArray * accessibleElements;                                    //@synthesize accessibleElements=_accessibleElements - In the implementation block
@property (assign,nonatomic) char alternateAccessibility;                                     //@synthesize alternateAccessibility=_alternateAccessibility - In the implementation block
@property (nonatomic,readonly) IGFeedItemHeaderViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showTimestamp;
-(UIButton *)customizableButton;
-(void)configureWithViewModel:(id)arg1 analyticsDelegate:(id)arg2 loggingDelegate:(id)arg3 delegate:(id)arg4 ;
-(void)layoutAccessoryView;
-(UILabel *)timestampLabel;
-(NSArray *)accessibleElements;
-(void)configureWithViewModel:(id)arg1 ;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(UIButton*<IGSponsorableButton>)sponsoredPostButton;
-(IGStringStyle *)boldGrayStyle;
-(IGStringStyle *)boldLinkStyle;
-(void)setSponsoredPostButton:(UIButton*<IGSponsorableButton>)arg1 ;
-(void)setBoldGrayStyle:(IGStringStyle *)arg1 ;
-(void)setBoldLinkStyle:(IGStringStyle *)arg1 ;
-(IGTapButton *)usernameButton;
-(UIButton *)locationButton;
-(UIImageView *)userBadge;
-(void)onUsernameTapped;
-(void)setAlternateAccessibility:(char)arg1 ;
-(void)layoutProfilePic;
-(void)layoutUserNameAndBadgeAndLocation;
-(void)layoutTitleAndImageForLocation;
-(void)onPostUpdated;
-(void)onUserInfoChanged;
-(void)updateAppearance;
-(void)configureProfilePic;
-(void)configureUserBadge;
-(void)configureUserNameButton;
-(void)configureLocationButton;
-(void)updateAccessoryViewAppearance;
-(void)updateAppearanceForEventViewer;
-(IGStringStyle *)grayStyle;
-(void)onLocationTapped;
-(void)onMoreButtonTapped:(id)arg1 ;
-(IGStringStyle *)boldGray7Style;
-(void)updateButton:(id)arg1 withColor:(id)arg2 ;
-(void)openUserViewFrom:(id)arg1 ;
-(char)alternateAccessibility;
-(void)setUserBadge:(UIImageView *)arg1 ;
-(void)setUsernameButton:(IGTapButton *)arg1 ;
-(void)setLocationButton:(UIButton *)arg1 ;
-(void)setGrayStyle:(IGStringStyle *)arg1 ;
-(void)setBoldGray7Style:(IGStringStyle *)arg1 ;
-(void)setAccessibleElements:(NSArray *)arg1 ;
-(void)setFollowButton:(IGFollowButton *)arg1 ;
-(void)setCustomizableButton:(UIButton *)arg1 ;
-(void)onCustomizableButtonPressed:(id)arg1 ;
-(IGFollowButton *)followButton;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(void)followButtonDidUpdateButtonState:(id)arg1 ;
-(IGProfilePictureImageView *)profilePic;
-(void)profilePictureTapped:(id)arg1 ;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(UIButton *)moreButton;
-(IGFeedItemHeaderViewModel *)viewModel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)style;
-(id)accessibilityLabel;
-(void)setStyle:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)prepareForReuse;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)contentBackgroundColor;
-(void)setMoreButton:(UIButton *)arg1 ;
@end

