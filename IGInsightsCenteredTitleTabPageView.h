
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGInsightsCenteredTitleTabPageViewDataSource;
@class UIView, UILabel, UIButton;

@interface IGInsightsCenteredTitleTabPageView : UIView {

	id<IGInsightsCenteredTitleTabPageViewDataSource> _dataSource;
	UIView* _contentView;
	UILabel* _titleLabel;
	int _activeIndex;
	UIButton* _forwardButton;
	UIButton* _backButton;
	unsigned _contentViewCount;

}

@property (nonatomic,retain) UIView * contentView;                                                            //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) int activeIndex;                                                                 //@synthesize activeIndex=_activeIndex - In the implementation block
@property (nonatomic,retain) UIButton * forwardButton;                                                        //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,retain) UIButton * backButton;                                                           //@synthesize backButton=_backButton - In the implementation block
@property (assign,nonatomic) unsigned contentViewCount;                                                       //@synthesize contentViewCount=_contentViewCount - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsCenteredTitleTabPageViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)setUpTitle;
-(UIButton *)forwardButton;
-(void)setForwardButton:(UIButton *)arg1 ;
-(unsigned)contentViewCount;
-(void)layoutButtonsWithY:(float)arg1 ;
-(void)setContentViewCount:(unsigned)arg1 ;
-(void)setupNavigateButtons;
-(void)buttonClick:(id)arg1 ;
-(void)setUpContentView;
-(int)activeIndex;
-(void)setActiveIndex:(int)arg1 ;
-(void)setDataSource:(id<IGInsightsCenteredTitleTabPageViewDataSource>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInsightsCenteredTitleTabPageViewDataSource>)dataSource;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setBackButton:(UIButton *)arg1 ;
-(UIButton *)backButton;
@end

