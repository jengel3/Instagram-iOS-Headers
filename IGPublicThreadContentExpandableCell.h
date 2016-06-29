
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPublicThreadContentCell.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGDirectContentCellUploadDecorator, UIView, IGHeartView, IGTapButton, UILabel;

@interface IGPublicThreadContentExpandableCell : IGPublicThreadContentCell <IGDirectContentUploadCell> {

	char _isAnimating;
	char _expanded;
	id<IGDirectContentUpoadCellDelegate> _delegate;
	IGDirectContentCellUploadDecorator* _uploadDecorator;
	UIView* _contentImageView;
	float _cornerRadius;
	float _currentUsernameXOffset;
	float _expansionProgress;
	IGHeartView* _heartView;
	int _shareOverlayState;
	UIView* _shareOverlay;
	IGTapButton* _postToFeedButton;
	IGTapButton* _shareToThreadButton;
	UILabel* _shareButtonTitle;
	CGSize _expandedPhotoSize;
	CGSize _contractedPhotoSize;

}

@property (assign,nonatomic) CGSize expandedPhotoSize;                                          //@synthesize expandedPhotoSize=_expandedPhotoSize - In the implementation block
@property (assign,nonatomic) CGSize contractedPhotoSize;                                        //@synthesize contractedPhotoSize=_contractedPhotoSize - In the implementation block
@property (assign,nonatomic) float currentUsernameXOffset;                                      //@synthesize currentUsernameXOffset=_currentUsernameXOffset - In the implementation block
@property (assign,nonatomic) float cornerRadius;                                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) float expansionProgress;                                           //@synthesize expansionProgress=_expansionProgress - In the implementation block
@property (nonatomic,retain) IGHeartView * heartView;                                           //@synthesize heartView=_heartView - In the implementation block
@property (assign,nonatomic) int shareOverlayState;                                             //@synthesize shareOverlayState=_shareOverlayState - In the implementation block
@property (nonatomic,retain) UIView * shareOverlay;                                             //@synthesize shareOverlay=_shareOverlay - In the implementation block
@property (nonatomic,retain) IGTapButton * postToFeedButton;                                    //@synthesize postToFeedButton=_postToFeedButton - In the implementation block
@property (nonatomic,retain) IGTapButton * shareToThreadButton;                                 //@synthesize shareToThreadButton=_shareToThreadButton - In the implementation block
@property (nonatomic,retain) UILabel * shareButtonTitle;                                        //@synthesize shareButtonTitle=_shareButtonTitle - In the implementation block
@property (nonatomic,retain) UIView * contentImageView;                                         //@synthesize contentImageView=_contentImageView - In the implementation block
@property (assign,nonatomic) char isAnimating;                                                  //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) char expanded;                                                     //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
+(float)photoExpandedHeightForWidth:(float)arg1 postMediaSize:(CGSize)arg2 ;
+(float)heightForWidth:(float)arg1 postMediaSize:(CGSize)arg2 ;
+(CGSize)contractedOffsetForUploadSpinner;
+(CGSize)expandedOffsetForUploadSpinner;
-(void)performDelete;
-(void)completeAnimation;
-(id)timestampText;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)uploadDecoratorShowFailedUI:(id)arg1 ;
-(void)showUploadFailedUI;
-(void)showUploadSendingUI;
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(void)setUploadDecorator:(IGDirectContentCellUploadDecorator *)arg1 ;
-(void)animateShareOptionFromOwnerThread:(char)arg1 ;
-(void)setCellDecorator:(id)arg1 ;
-(float)usernameXOffset;
-(void)setIsSameUserContent:(char)arg1 ;
-(UIView *)contentImageView;
-(void)setupShareOverlay;
-(float)expandedUsernameXOffset;
-(void)setCurrentUsernameXOffset:(float)arg1 ;
-(void)layoutSubviewsShareOverlay;
-(IGHeartView *)heartView;
-(void)setHeartView:(IGHeartView *)arg1 ;
-(void)updateProfileAlpha;
-(float)currentUsernameXOffset;
-(float)contractedUsernameXOffset;
-(void)setExpansionProgress:(float)arg1 ;
-(void)setIsAnimating:(char)arg1 ;
-(CGSize)expandedPhotoSize;
-(CGSize)contractedPhotoSize;
-(float)expansionProgress;
-(float)expandedCornerRadius;
-(float)contractedCornerRadius;
-(CGSize)photoSizeForWidth:(float)arg1 ;
-(id)createShareOverlay;
-(void)postToFeedButtonTapped;
-(id)createShareOverButtonWithImageName:(id)arg1 accessibilityString:(id)arg2 action:(SEL)arg3 ;
-(void)shareToThreadButtonTapped;
-(void)setShareOverlayState:(int)arg1 ;
-(UIView *)shareOverlay;
-(IGTapButton *)shareToThreadButton;
-(IGTapButton *)postToFeedButton;
-(UILabel *)shareButtonTitle;
-(int)shareOverlayState;
-(void)animateLikeAction;
-(void)animateExpanded:(char)arg1 withProgress:(float)arg2 ;
-(void)setContentImageView:(UIView *)arg1 ;
-(void)setExpandedPhotoSize:(CGSize)arg1 ;
-(void)setContractedPhotoSize:(CGSize)arg1 ;
-(void)setShareOverlay:(UIView *)arg1 ;
-(void)setPostToFeedButton:(IGTapButton *)arg1 ;
-(void)setShareToThreadButton:(IGTapButton *)arg1 ;
-(void)setShareButtonTitle:(UILabel *)arg1 ;
-(CGRect)tapTargetFrame;
-(CGSize)photoSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)prepareForReuse;
-(char)isAnimating;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(void)setContent:(id)arg1 ;
-(void)beginAnimation;
@end

