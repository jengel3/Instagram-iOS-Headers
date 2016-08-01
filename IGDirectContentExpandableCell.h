
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGDirectContentUploadCell.h>
#import <Instagram/IGDirectMediaViewerCellProtocol.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGDirectContentCellUploadDecorator, UIView, UIImage, IGHeartView, IGBlurredImageView, UILabel, NSString;

@interface IGDirectContentExpandableCell : IGDirectContentCell <IGDirectContentUploadCell, IGDirectMediaViewerCellProtocol> {

	char _enableBlurOverlay;
	id<IGDirectContentUpoadCellDelegate> _delegate;
	IGDirectContentCellUploadDecorator* _uploadDecorator;
	UIView* _contentImageView;
	UIImage* _contentImage;
	float _cornerRadius;
	float _expansionProgress;
	IGHeartView* _heartView;
	IGBlurredImageView* _blurredImageView;
	UILabel* _dismissBlurLabel;
	CGSize _photoSize;

}

@property (assign,nonatomic) CGSize photoSize;                                                  //@synthesize photoSize=_photoSize - In the implementation block
@property (assign,nonatomic) float cornerRadius;                                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) float expansionProgress;                                           //@synthesize expansionProgress=_expansionProgress - In the implementation block
@property (nonatomic,retain) IGHeartView * heartView;                                           //@synthesize heartView=_heartView - In the implementation block
@property (nonatomic,retain) IGBlurredImageView * blurredImageView;                             //@synthesize blurredImageView=_blurredImageView - In the implementation block
@property (nonatomic,retain) UILabel * dismissBlurLabel;                                        //@synthesize dismissBlurLabel=_dismissBlurLabel - In the implementation block
@property (nonatomic,retain) UIView * contentImageView;                                         //@synthesize contentImageView=_contentImageView - In the implementation block
@property (nonatomic,readonly) UIImage * contentImage;                                          //@synthesize contentImage=_contentImage - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char enableBlurOverlay;                                            //@synthesize enableBlurOverlay=_enableBlurOverlay - In the implementation block
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)offsetForUploadSpinner;
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
-(IGHeartView *)heartView;
-(void)setHeartView:(IGHeartView *)arg1 ;
-(void)setEnableBlurOverlay:(char)arg1 ;
-(void)setupBlurredImageView;
-(void)setupDismissBlurLabel;
-(void)setBlurredImageView:(IGBlurredImageView *)arg1 ;
-(IGBlurredImageView *)blurredImageView;
-(void)setDismissBlurLabel:(UILabel *)arg1 ;
-(UILabel *)dismissBlurLabel;
-(void)setupBlurOverlay;
-(id)imageViewForMediaViewer;
-(id)previewImageForMediaViewer;
-(void)animateLikeAction;
-(void)layoutBlurOverlay;
-(void)setContentImageView:(UIView *)arg1 ;
-(float)expansionProgress;
-(void)setExpansionProgress:(float)arg1 ;
-(char)enableBlurOverlay;
-(CGRect)tapTargetFrame;
-(UIImage *)contentImage;
-(CGSize)photoSize;
-(void)setPhotoSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
-(id)mediaView;
@end

