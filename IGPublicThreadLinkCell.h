
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGDirectContentCellUploadDecorator, IGDirectLinkPreview;

@interface IGPublicThreadLinkCell : IGDirectContentCell <IGDirectContentUploadCell> {

	id<IGDirectContentUpoadCellDelegate> _delegate;
	IGDirectContentCellUploadDecorator* _uploadDecorator;
	IGDirectLinkPreview* _linkPreview;

}

@property (nonatomic,retain) IGDirectLinkPreview * linkPreview;                                 //@synthesize linkPreview=_linkPreview - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
+(float)height;
-(void)performDelete;
-(void)setLink:(id)arg1 withImage:(id)arg2 ;
-(void)setLinkPreview:(IGDirectLinkPreview *)arg1 ;
-(IGDirectLinkPreview *)linkPreview;
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)uploadDecoratorShowFailedUI:(id)arg1 ;
-(void)showUploadFailedUI;
-(void)showUploadSendingUI;
-(void)setUploadDecorator:(IGDirectContentCellUploadDecorator *)arg1 ;
-(CGRect)tapTargetFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)prepareForReuse;
@end

