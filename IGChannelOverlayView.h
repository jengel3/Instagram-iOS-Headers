
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGVideoGlyphView, UILabel, UIImageView;

@interface IGChannelOverlayView : UIView {

	char _shouldShowPlayIcon;
	IGVideoGlyphView* _playIcon;
	int _fontStyle;
	UILabel* _headerLabel;
	UILabel* _titleLabel;
	UILabel* _contextLabel;
	UIImageView* _backgroundView;

}

@property (nonatomic,readonly) UILabel * headerLabel;                     //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * contextLabel;                    //@synthesize contextLabel=_contextLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) IGVideoGlyphView * playIcon;               //@synthesize playIcon=_playIcon - In the implementation block
@property (assign,nonatomic) char shouldShowPlayIcon;                     //@synthesize shouldShowPlayIcon=_shouldShowPlayIcon - In the implementation block
@property (assign,nonatomic) int fontStyle;                               //@synthesize fontStyle=_fontStyle - In the implementation block
-(void)setupBackgroundView;
-(void)setupTitleLabel;
-(void)setupHeaderLabel;
-(IGVideoGlyphView *)playIcon;
-(void)layoutPlayIcon;
-(void)layoutHeader;
-(void)layoutBackgroundView;
-(void)setupPlayIcon;
-(void)setUpContextLabel;
-(float)maxWidthForLabels;
-(UILabel *)contextLabel;
-(id)secondaryTextAttributes;
-(float)preferredFontSizeWithTitle:(id)arg1 ;
-(id)titleAttributesWithFontSize:(float)arg1 ;
-(id)textKerning;
-(void)setHeader:(id)arg1 title:(id)arg2 context:(id)arg3 ;
-(void)setShouldShowPlayIcon:(char)arg1 ;
-(void)layoutTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)backgroundView;
-(void)setContext:(id)arg1 ;
-(UILabel *)headerLabel;
-(void)setupSubviews;
-(void)setHeader:(id)arg1 ;
-(char)shouldShowPlayIcon;
-(void)layoutContext;
-(int)fontStyle;
-(void)setFontStyle:(int)arg1 ;
@end

