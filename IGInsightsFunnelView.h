
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGInlineInsightsMetricUnitView, UIImageView;

@interface IGInsightsFunnelView : UIView {

	IGInlineInsightsMetricUnitView* _topMetricUnitView;
	IGInlineInsightsMetricUnitView* _bottomMetricUnitView;
	UIImageView* _funnelImageView;

}

@property (nonatomic,retain) IGInlineInsightsMetricUnitView * topMetricUnitView;                 //@synthesize topMetricUnitView=_topMetricUnitView - In the implementation block
@property (nonatomic,retain) IGInlineInsightsMetricUnitView * bottomMetricUnitView;              //@synthesize bottomMetricUnitView=_bottomMetricUnitView - In the implementation block
@property (nonatomic,retain) UIImageView * funnelImageView;                                      //@synthesize funnelImageView=_funnelImageView - In the implementation block
-(id)initWithTitle1:(id)arg1 subtitle1:(id)arg2 title2:(id)arg3 subtitle2:(id)arg4 additionalInfo:(id)arg5 ;
-(UIImageView *)funnelImageView;
-(IGInlineInsightsMetricUnitView *)topMetricUnitView;
-(IGInlineInsightsMetricUnitView *)bottomMetricUnitView;
-(void)setTopMetricUnitView:(IGInlineInsightsMetricUnitView *)arg1 ;
-(void)setBottomMetricUnitView:(IGInlineInsightsMetricUnitView *)arg1 ;
-(void)setFunnelImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

