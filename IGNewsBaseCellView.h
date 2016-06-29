
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGTappableImageViewDelegate.h>
#import <Instagram/IGFollowButtonDelegate.h>

@protocol IGNewsBaseCellViewDelegate, IGRaindropAnalyticsDelegate;
@class UIView, IGNewsStory, IGFollowButton, IGProfilePictureImageView, IGCoreTextView, NSMutableArray, UILabel, IGUnreadBubbleView, UIImageView, NSString;

@interface IGNewsBaseCellView : UIView <IGProfilePictureImageViewDelegate, IGCoreTextLinkHandler, IGTappableImageViewDelegate, IGFollowButtonDelegate> {

	UIView* _topLine;
	char _hidesCellDivider;
	IGNewsStory* _story;
	IGFollowButton* _followButton;
	id<IGNewsBaseCellViewDelegate> _delegate;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;
	UIView* _hairlineView;
	IGProfilePictureImageView* _profilePictureView;
	IGCoreTextView* _textView;
	NSMutableArray* _imageViews;
	UILabel* _socialContextLabel;
	IGUnreadBubbleView* _requestCountBubbleView;
	UIImageView* _chevronView;
	UIImageView* _copyrightImageView;
	UIImageView* _infoImageView;

}

@property (nonatomic,retain) IGNewsStory * story;                                                   //@synthesize story=_story - In the implementation block
@property (nonatomic,retain) IGFollowButton * followButton;                                         //@synthesize followButton=_followButton - In the implementation block
@property (assign,nonatomic) char hidesCellDivider;                                                 //@synthesize hidesCellDivider=_hidesCellDivider - In the implementation block
@property (assign,nonatomic,__weak) id<IGNewsBaseCellViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,retain) UIView * hairlineView;                                                 //@synthesize hairlineView=_hairlineView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePictureView;                        //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,retain) IGCoreTextView * textView;                                             //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageViews;                                           //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) UILabel * socialContextLabel;                                          //@synthesize socialContextLabel=_socialContextLabel - In the implementation block
@property (nonatomic,retain) IGUnreadBubbleView * requestCountBubbleView;                           //@synthesize requestCountBubbleView=_requestCountBubbleView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                                             //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) UIImageView * copyrightImageView;                                      //@synthesize copyrightImageView=_copyrightImageView - In the implementation block
@property (nonatomic,retain) UIImageView * infoImageView;                                           //@synthesize infoImageView=_infoImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForStory:(id)arg1 cellWidth:(float)arg2 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(IGProfilePictureImageView *)profilePictureView;
-(void)setProfilePictureView:(IGProfilePictureImageView *)arg1 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(void)setFollowButton:(IGFollowButton *)arg1 ;
-(IGFollowButton *)followButton;
-(void)followButtonDidUpdateButtonState:(id)arg1 ;
-(void)imageViewTapped:(id)arg1 ;
-(void)setHidesCellDivider:(char)arg1 ;
-(void)createImageViews:(int)arg1 ;
-(char)hidesCellDivider;
-(void)setSocialContextLabel:(UILabel *)arg1 ;
-(void)setRequestCountBubbleView:(IGUnreadBubbleView *)arg1 ;
-(void)setCopyrightImageView:(UIImageView *)arg1 ;
-(void)setInfoImageView:(UIImageView *)arg1 ;
-(UIImageView *)copyrightImageView;
-(UIImageView *)infoImageView;
-(UILabel *)socialContextLabel;
-(IGUnreadBubbleView *)requestCountBubbleView;
-(void)setStory:(IGNewsStory *)arg1 ;
-(IGNewsStory *)story;
-(void)applyHighlight:(char)arg1 ;
-(void)profilePictureTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGNewsBaseCellViewDelegate>)arg1 ;
-(id<IGNewsBaseCellViewDelegate>)delegate;
-(void)setTextView:(IGCoreTextView *)arg1 ;
-(IGCoreTextView *)textView;
-(void)setHairlineView:(UIView *)arg1 ;
-(UIView *)hairlineView;
-(void)setMedia:(id)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
@end

