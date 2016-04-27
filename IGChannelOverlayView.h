
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGVideoGlyphView, UILabel, UIImageView;

@interface IGChannelOverlayView : UIView {

	IGVideoGlyphView* _playIcon;
	UILabel* _headerLabel;
	UILabel* _titleLabel;
	UIImageView* _backgroundView;

}

@property (nonatomic,readonly) IGVideoGlyphView * playIcon;               //@synthesize playIcon=_playIcon - In the implementation block
@property (nonatomic,readonly) UILabel * headerLabel;                     //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)setupBackgroundView;
-(void)setupTitleLabel;
-(id)titleAttributesUseSmallFont:(char)arg1 ;
-(id)textKerning;
-(void)layoutPlayIcon;
-(void)layoutHeader;
-(void)layoutBackgroundView;
-(float)maxWidthForLabels;
-(void)setupPlayIcon;
-(void)setupHeaderLabel;
-(IGVideoGlyphView *)playIcon;
-(void)layoutTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)backgroundView;
-(UILabel *)headerLabel;
-(void)setupSubviews;
-(void)setHeader:(id)arg1 ;
-(id)headerAttributes;
@end

