
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGDirectMediaViewerCellProtocol.h>

@class UILabel, IGImageProgressView, IGCoreTextView, UIImageView, NSString;

@interface IGDirectReelShareCell : IGDirectContentCell <IGDirectMediaViewerCellProtocol> {

	char _reelItemIsExpired;
	UILabel* _headerLabel;
	IGImageProgressView* _reelImageView;
	IGCoreTextView* _commentTextView;
	UIImageView* _dottedLineView;

}

@property (nonatomic,readonly) UILabel * headerLabel;                            //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) IGImageProgressView * reelImageView;              //@synthesize reelImageView=_reelImageView - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * commentTextView;                 //@synthesize commentTextView=_commentTextView - In the implementation block
@property (nonatomic,readonly) UIImageView * dottedLineView;                     //@synthesize dottedLineView=_dottedLineView - In the implementation block
@property (nonatomic,readonly) char reelItemIsExpired;                           //@synthesize reelItemIsExpired=_reelItemIsExpired - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)commentSize:(id)arg1 frameWidth:(float)arg2 ;
+(float)commentVerticalPadding:(char)arg1 ;
+(float)commentMaxWidthForFrameWidth:(float)arg1 ;
+(id)emojiCommentStyle;
+(id)commentStyle;
+(char)handlesExternalURLs;
+(float)heightWithShare:(id)arg1 width:(float)arg2 ;
-(IGCoreTextView *)commentTextView;
-(id)imageViewForMediaViewer;
-(id)previewImageForMediaViewer;
-(float)cellOffsetX:(float)arg1 ;
-(CGRect)tapTargetFrame;
-(void)setupHeaderLabel;
-(void)setupDottedLineView;
-(void)setupCommentView;
-(void)setupReelImageView;
-(void)layoutDottedLine;
-(void)layoutHeaderLabel;
-(void)layoutReelImageView;
-(void)layoutCommentView;
-(char)reelItemIsExpired;
-(float)cellRightBound;
-(UIImageView *)dottedLineView;
-(IGImageProgressView *)reelImageView;
-(float)commentHorizontalPading:(char)arg1 ;
-(void)configureTextViewWithText:(id)arg1 showImage:(char)arg2 ;
-(void)configureReelImageView:(id)arg1 ;
-(void)configureHeaderLabel:(id)arg1 contentSharer:(id)arg2 ;
-(void)setupBubble:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)headerLabel;
-(void)setContent:(id)arg1 ;
@end

