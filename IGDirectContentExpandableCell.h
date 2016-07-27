
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGDirectContentCellUploadDecorator, UIView, UIImage, IGHeartView, IGBlurredImageView, UILabel;

@interface IGDirectContentExpandableCell : IGDirectContentCell <IGDirectContentUploadCell> {

	char _isAnimating;
	char _expanded;
	char _enableBlurOverlay;
	id<IGDirectContentUpoadCellDelegate> _delegate;
	IGDirectContentCellUploadDecorator* _uploadDecorator;
	UIView* _contentImageView;
	UIImage* _contentImage;
	float _cornerRadius;
	float _expansionProgress;
	float _currentUsernameXOffset;
	IGHeartView* _heartView;
	IGBlurredImageView* _blurredImageView;
	UILabel* _dismissBlurLabel;
	CGSize _expandedPhotoSize;
	CGSize _contractedPhotoSize;

}

@property (assign,nonatomic) CGSize expandedPhotoSize;                                          //@synthesize expandedPhotoSize=_expandedPhotoSize - In the implementation block
@property (assign,nonatomic) CGSize contractedPhotoSize;                                        //@synthesize contractedPhotoSize=_contractedPhotoSize - In the implementation block
@property (assign,nonatomic) float currentUsernameXOffset;                                      //@synthesize currentUsernameXOffset=_currentUsernameXOffset - In the implementation block
@property (assign,nonatomic) float cornerRadius;                                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) float expansionProgress;                                           //@synthesize expansionProgress=_expansionProgress - In the implementation block
@property (nonatomic,retain) IGHeartView * heartView;                                           //@synthesize heartView=_heartView - In the implementation block
@property (nonatomic,retain) IGBlurredImageView * blurredImageView;                             //@synthesize blurredImageView=_blurredImageView - In the implementation block
@property (nonatomic,retain) UILabel * dismissBlurLabel;                                        //@synthesize dismissBlurLabel=_dismissBlurLabel - In the implementation block
@property (nonatomic,retain) UIView * contentImageView;                                         //@synthesize contentImageView=_contentImageView - In the implementation block
@property (nonatomic,readonly) UIImage * contentImage;                                          //@synthesize contentImage=_contentImage - In the implementation block
@property (assign,nonatomic) char isAnimating;                                                  //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) char expanded;                                                     //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char enableBlurOverlay;                                            //@synthesize enableBlurOverlay=_enableBlurOverlay - In the implementation block
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
+(CGSize)contractedOffsetForUploadSpinner;
+(CGSize)expandedOffsetForUploadSpinner;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)callShare:(id)arg1 ;
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)performDelete;
-(void)uploadDecoratorShowFailedUI:(id)arg1 ;
-(void)showUploadFailedUI;
-(void)showUploadSendingUI;
-(void)setUploadDecorator:(IGDirectContentCellUploadDecorator *)arg1 ;
-(id)timestampText;
-(float)usernameXOffset;
-(void)setCellDecorator:(id)arg1 ;
-(void)setIsSameUserContent:(char)arg1 ;
-(UIView *)contentImageView;
-(float)contractedUsernameXOffset;
-(void)setCurrentUsernameXOffset:(float)arg1 ;
-(float)contractedCornerRadius;
-(void)updateProfileAlpha;
-(float)currentUsernameXOffset;
-(float)expandedUsernameXOffset;
-(void)setExpansionProgress:(float)arg1 ;
-(float)expandedCornerRadius;
-(float)expansionProgress;
-(IGHeartView *)heartView;
-(void)setHeartView:(IGHeartView *)arg1 ;
-(void)setIsAnimating:(char)arg1 ;
-(CGSize)expandedPhotoSize;
-(CGSize)contractedPhotoSize;
-(void)setEnableBlurOverlay:(char)arg1 ;
-(void)setupBlurredImageView;
-(void)setupDismissBlurLabel;
-(void)setBlurredImageView:(IGBlurredImageView *)arg1 ;
-(IGBlurredImageView *)blurredImageView;
-(void)setDismissBlurLabel:(UILabel *)arg1 ;
-(UILabel *)dismissBlurLabel;
-(void)setupBlurOverlay;
-(void)animateLikeAction;
-(void)animateExpanded:(char)arg1 withProgress:(float)arg2 ;
-(void)completeAnimation;
-(void)layoutBlurOverlay;
-(void)setContentImageView:(UIView *)arg1 ;
-(char)enableBlurOverlay;
-(void)setExpandedPhotoSize:(CGSize)arg1 ;
-(void)setContractedPhotoSize:(CGSize)arg1 ;
-(CGRect)tapTargetFrame;
-(UIImage *)contentImage;
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
-(id)mediaView;
@end

