
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGDirectContentCellUploadDecorator, IGCoreTextView, NSString;

@interface IGDirectCommentCell : IGDirectContentCell <IGCoreTextLinkHandler, IGDirectContentUploadCell> {

	IGDirectContentCellUploadDecorator* _uploadDecorator;
	id<IGDirectContentUpoadCellDelegate> _delegate;
	IGCoreTextView* _commentTextView;

}

@property (nonatomic,retain) IGCoreTextView * commentTextView;                                  //@synthesize commentTextView=_commentTextView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
+(id)emojiCommentStyle;
+(id)commentStyle;
+(char)handlesExternalURLs;
+(float)commentWidthForFrameWidth:(float)arg1 ;
+(float)heightForCellWithCommentText:(id)arg1 forWidth:(float)arg2 ;
-(void)performDelete;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(IGCoreTextView *)commentTextView;
-(id)timestampText;
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)uploadDecoratorShowFailedUI:(id)arg1 ;
-(void)showUploadFailedUI;
-(void)showUploadSendingUI;
-(void)setUploadDecorator:(IGDirectContentCellUploadDecorator *)arg1 ;
-(void)setCommentTextView:(IGCoreTextView *)arg1 ;
-(id)cellDecorator;
-(void)setCellDecorator:(id)arg1 ;
-(CGRect)tapTargetFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
@end

