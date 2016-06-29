
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface IGInsightsProgressView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _progressActiveRectView;
	UIView* _progressBackgroudRectView;
	float _percentage;

}

@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIView * progressActiveRectView;                 //@synthesize progressActiveRectView=_progressActiveRectView - In the implementation block
@property (nonatomic,readonly) UIView * progressBackgroudRectView;              //@synthesize progressBackgroudRectView=_progressBackgroudRectView - In the implementation block
@property (nonatomic,readonly) float percentage;                                //@synthesize percentage=_percentage - In the implementation block
-(void)layoutTitles;
-(void)layoutProgressCharts;
-(UIView *)progressBackgroudRectView;
-(UIView *)progressActiveRectView;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 percentage:(float)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(float)percentage;
@end

