
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedPromotionBannerCell.h>

@class IGSimpleButton;

@interface IGFeedPromotionBannerConnectCell : IGFeedPromotionBannerCell {

	IGSimpleButton* _actionButton;
	CGSize _titleSize;
	CGSize _subtitleSize;

}

@property (nonatomic,retain) IGSimpleButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic) CGSize titleSize;                           //@synthesize titleSize=_titleSize - In the implementation block
@property (assign,nonatomic) CGSize subtitleSize;                        //@synthesize subtitleSize=_subtitleSize - In the implementation block
-(CGSize)titleSize;
-(void)configureCellWithConfiguration:(id)arg1 ;
-(void)setTitleSize:(CGSize)arg1 ;
-(CGSize)subtitleSize;
-(void)setSubtitleSize:(CGSize)arg1 ;
-(IGSimpleButton *)actionButton;
-(void)actionButtonTapped:(id)arg1 ;
-(void)layoutSubviews;
-(float)currentHeight;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setActionButton:(IGSimpleButton *)arg1 ;
@end

