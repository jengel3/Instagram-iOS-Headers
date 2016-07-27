
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGDirectContentCellUploadDecorator, UIImageView;

@interface IGDirectLikeCell : IGDirectContentCell <IGDirectContentUploadCell> {

	char _isPulsing;
	id<IGDirectContentUpoadCellDelegate> delegate;
	IGDirectContentCellUploadDecorator* _uploadDecorator;
	UIImageView* _likeImageView;
	CGRect _defaultLikeFrame;

}

@property (nonatomic,retain) UIImageView * likeImageView;                                       //@synthesize likeImageView=_likeImageView - In the implementation block
@property (assign,nonatomic) CGRect defaultLikeFrame;                                           //@synthesize defaultLikeFrame=_defaultLikeFrame - In the implementation block
@property (assign,nonatomic) char isPulsing;                                                    //@synthesize isPulsing=_isPulsing - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate; 
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
+(id)likeImage;
+(float)likeCellHeight;
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)performDelete;
-(void)uploadDecoratorShowFailedUI:(id)arg1 ;
-(void)showUploadFailedUI;
-(void)showUploadSendingUI;
-(void)setUploadDecorator:(IGDirectContentCellUploadDecorator *)arg1 ;
-(id)timestampText;
-(id)cellDecorator;
-(void)setCellDecorator:(id)arg1 ;
-(UIImageView *)likeImageView;
-(void)setDefaultLikeFrame:(CGRect)arg1 ;
-(CGRect)defaultLikeFrame;
-(void)setIsPulsing:(char)arg1 ;
-(void)pulseLikeIcon;
-(void)setLikeImageView:(UIImageView *)arg1 ;
-(CGRect)tapTargetFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)prepareForReuse;
-(char)isPulsing;
@end

