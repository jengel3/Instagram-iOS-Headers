
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>

@class UIView, IGDirectShareHeaderView;

@interface IGDirectContentShareCell : IGDirectContentCell {

	char _shouldShowHeader;
	UIView* _reshareItemView;
	IGDirectShareHeaderView* _headerView;
	UIView* _shareContainerView;
	UIView* _separatorLine;
	float _reshareItemViewHorizontalPadding;

}

@property (nonatomic,retain) UIView * reshareItemView;                            //@synthesize reshareItemView=_reshareItemView - In the implementation block
@property (nonatomic,retain) IGDirectShareHeaderView * headerView;                //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) char shouldShowHeader;                               //@synthesize shouldShowHeader=_shouldShowHeader - In the implementation block
@property (nonatomic,retain) UIView * shareContainerView;                         //@synthesize shareContainerView=_shareContainerView - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                              //@synthesize separatorLine=_separatorLine - In the implementation block
@property (assign,nonatomic) float reshareItemViewHorizontalPadding;              //@synthesize reshareItemViewHorizontalPadding=_reshareItemViewHorizontalPadding - In the implementation block
+(char)shouldUseContentShareCellForContent:(id)arg1 ;
+(float)heightForContent:(id)arg1 withWidth:(float)arg2 ;
-(UIView *)reshareItemView;
-(void)setReshareItemView:(UIView *)arg1 ;
-(void)setReshareItemViewHorizontalPadding:(float)arg1 ;
-(char)shouldShowHeader;
-(float)reshareItemViewHorizontalPadding;
-(void)setShouldShowHeader:(char)arg1 ;
-(void)updateHeaderWithItem:(id)arg1 ;
-(void)setBubbleFrame;
-(id)createShareContainerView;
-(UIView *)shareContainerView;
-(void)setShareContainerView:(UIView *)arg1 ;
-(CGRect)tapTargetFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(IGDirectShareHeaderView *)headerView;
-(void)setHeaderView:(IGDirectShareHeaderView *)arg1 ;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(void)setContent:(id)arg1 ;
@end

