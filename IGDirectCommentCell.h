
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGCoreTextView, IGDirectContentCellUploadDecorator, NSString;

@interface IGDirectCommentCell : IGDirectContentCell <IGCoreTextLinkHandler, IGDirectContentUploadCell> {

	id<IGDirectContentUpoadCellDelegate> _delegate;
	IGCoreTextView* _commentTextView;
	IGDirectContentCellUploadDecorator* _uploadDecorator;

}

@property (nonatomic,retain) IGCoreTextView * commentTextView;                                  //@synthesize commentTextView=_commentTextView - In the implementation block
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)emojiCommentStyle;
+(id)commentStyle;
+(char)handlesExternalURLs;
+(float)commentWidthForFrameWidth:(float)arg1 ;
+(float)heightForCellWithCommentText:(id)arg1 forWidth:(float)arg2 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(IGCoreTextView *)commentTextView;
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(id)timestampText;
-(void)setCellDecorator:(id)arg1 ;
-(void)setUploadDecorator:(IGDirectContentCellUploadDecorator *)arg1 ;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)performDelete;
-(CGRect)tapTargetFrame;
-(id)cellDecorator;
-(void)setCommentTextView:(IGCoreTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
-(id)defaultTextColor;
@end

