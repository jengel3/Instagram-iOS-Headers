
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class UILabel, UIView, IGImageProgressView, IGCoreTextView;

@interface IGDirectReelShareCell : IGDirectContentCell {

	char _reelItemIsExpired;
	UILabel* _headerLabel;
	UIView* _shareContainerView;
	IGImageProgressView* _reelImageView;
	IGCoreTextView* _commentTextView;

}

@property (nonatomic,readonly) UILabel * headerLabel;                            //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) UIView * shareContainerView;                      //@synthesize shareContainerView=_shareContainerView - In the implementation block
@property (nonatomic,readonly) IGImageProgressView * reelImageView;              //@synthesize reelImageView=_reelImageView - In the implementation block
@property (nonatomic,readonly) char reelItemIsExpired;                           //@synthesize reelItemIsExpired=_reelItemIsExpired - In the implementation block
@property (nonatomic,readonly) IGCoreTextView * commentTextView;                 //@synthesize commentTextView=_commentTextView - In the implementation block
+(float)cellMaxWidthForFrameWidth:(float)arg1 ;
+(float)commentViewHeight:(id)arg1 frameWidth:(float)arg2 isExpired:(char)arg3 ;
+(id)styleStringFromText:(id)arg1 ;
+(id)emojiCommentStyle;
+(id)commentStyle;
+(char)handlesExternalURLs;
+(float)heightWithShare:(id)arg1 width:(float)arg2 ;
-(IGCoreTextView *)commentTextView;
-(float)cellOffsetX:(float)arg1 ;
-(UIView *)shareContainerView;
-(void)layoutBubble:(float)arg1 width:(float)arg2 ;
-(CGRect)tapTargetFrame;
-(void)setupHeaderLabel;
-(void)setupShareContainerView;
-(void)setupReelImageView;
-(void)setupCommentView;
-(float)cellWidth:(float)arg1 ;
-(float)cellRightBound;
-(void)layoutHeaderLabel:(float)arg1 ;
-(void)layoutReelImageView;
-(void)layoutCommentViewWithCellWidth:(float)arg1 frameWidth:(float)arg2 ;
-(IGImageProgressView *)reelImageView;
-(char)reelItemIsExpired;
-(void)configureReelImageView:(id)arg1 ;
-(void)configureHeaderLabel:(id)arg1 ;
-(void)setupBubble:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)headerLabel;
-(void)setContent:(id)arg1 ;
@end

