
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTimelineHeader.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGFollowButtonDelegate.h>

@protocol IGFeedItemHeaderDelegate, IGFeedItemLoggingProviderDelegate, IGRaindropAnalyticsDelegate, IGSponsorableButton;
@class NSObject, IGFeedItemHeaderViewModel, IGProfilePictureImageView, UIButton, UILabel, IGFollowButton, IGStringStyle, NSArray, NSString;

@interface IGFeedItemHeader : IGTimelineHeader <IGProfilePictureImageViewDelegate, IGFollowButtonDelegate> {

	NSObject*<IGFeedItemHeaderDelegate> _delegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	char _alternateAccessibility;
	IGFeedItemHeaderViewModel* _viewModel;
	IGProfilePictureImageView* _profilePic;
	UIButton* _usernameButton;
	UILabel* _timestampLabel;
	UIButton* _locationButton;
	UIButton* _customizableButton;
	UIButton*<IGSponsorableButton> _sponsoredPostButton;
	IGFollowButton* _followButton;
	UIButton* _chevronButton;
	IGStringStyle* _boldLinkStyle;
	IGStringStyle* _boldGrayStyle;
	IGStringStyle* _grayStyle;
	IGStringStyle* _boldGray7Style;
	NSArray* _accessibleElements;

}

@property (nonatomic,readonly) IGFeedItemHeaderViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                          //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) UIButton * usernameButton;                                       //@synthesize usernameButton=_usernameButton - In the implementation block
@property (nonatomic,retain) UILabel * timestampLabel;                                        //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,retain) UIButton * locationButton;                                       //@synthesize locationButton=_locationButton - In the implementation block
@property (nonatomic,retain) UIButton * customizableButton;                                   //@synthesize customizableButton=_customizableButton - In the implementation block
@property (nonatomic,retain) UIButton*<IGSponsorableButton> sponsoredPostButton;              //@synthesize sponsoredPostButton=_sponsoredPostButton - In the implementation block
@property (nonatomic,retain) IGFollowButton * followButton;                                   //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) UIButton * chevronButton;                                        //@synthesize chevronButton=_chevronButton - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldLinkStyle;                                   //@synthesize boldLinkStyle=_boldLinkStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldGrayStyle;                                   //@synthesize boldGrayStyle=_boldGrayStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * grayStyle;                                       //@synthesize grayStyle=_grayStyle - In the implementation block
@property (nonatomic,retain) IGStringStyle * boldGray7Style;                                  //@synthesize boldGray7Style=_boldGray7Style - In the implementation block
@property (nonatomic,retain) NSArray * accessibleElements;                                    //@synthesize accessibleElements=_accessibleElements - In the implementation block
@property (assign,nonatomic) char alternateAccessibility;                                     //@synthesize alternateAccessibility=_alternateAccessibility - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)followButtonDidUpdateButtonState:(id)arg1 ;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(IGFollowButton *)followButton;
-(void)setFollowButton:(IGFollowButton *)arg1 ;
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(UIButton *)customizableButton;
-(void)configureWithViewModel:(id)arg1 analyticsDelegate:(id)arg2 loggingDelegate:(id)arg3 delegate:(id)arg4 ;
-(void)setAccessibleElements:(NSArray *)arg1 ;
-(NSArray *)accessibleElements;
-(void)profilePictureTapped:(id)arg1 ;
-(UILabel *)timestampLabel;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(void)configureWithViewModel:(id)arg1 ;
-(UIButton*<IGSponsorableButton>)sponsoredPostButton;
-(void)onCustomizableButtonPressed:(id)arg1 ;
-(IGStringStyle *)boldGrayStyle;
-(IGStringStyle *)boldLinkStyle;
-(void)setCustomizableButton:(UIButton *)arg1 ;
-(void)setSponsoredPostButton:(UIButton*<IGSponsorableButton>)arg1 ;
-(void)setBoldGrayStyle:(IGStringStyle *)arg1 ;
-(void)setBoldLinkStyle:(IGStringStyle *)arg1 ;
-(UIButton *)usernameButton;
-(UIButton *)locationButton;
-(void)onUsernameTapped;
-(void)setAlternateAccessibility:(char)arg1 ;
-(void)onPostUpdated;
-(void)onUserInfoChanged;
-(void)updateAppearance;
-(IGStringStyle *)boldGray7Style;
-(void)updateAccessoryViewAppearance;
-(UIButton *)chevronButton;
-(IGStringStyle *)grayStyle;
-(void)onLocationTapped;
-(void)onChevronTapped:(id)arg1 ;
-(void)openUserViewFrom:(id)arg1 ;
-(char)alternateAccessibility;
-(void)setUsernameButton:(UIButton *)arg1 ;
-(void)setLocationButton:(UIButton *)arg1 ;
-(void)setChevronButton:(UIButton *)arg1 ;
-(void)setGrayStyle:(IGStringStyle *)arg1 ;
-(void)setBoldGray7Style:(IGStringStyle *)arg1 ;
-(IGFeedItemHeaderViewModel *)viewModel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(void)prepareForReuse;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
@end

