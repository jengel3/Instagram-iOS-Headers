
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, CALayer;

@interface IGFeedItemHiddenNoReasonSelectedCellTableViewHeader : UIView {

	UILabel* _reasonHeaderLabel;
	UIImageView* _chevronImageView;
	CALayer* _topLineLayer;
	CALayer* _bottomLineLayer;

}

@property (nonatomic,readonly) UILabel * reasonHeaderLabel;                 //@synthesize reasonHeaderLabel=_reasonHeaderLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * chevronImageView;              //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (nonatomic,readonly) CALayer * topLineLayer;                      //@synthesize topLineLayer=_topLineLayer - In the implementation block
@property (nonatomic,readonly) CALayer * bottomLineLayer;                   //@synthesize bottomLineLayer=_bottomLineLayer - In the implementation block
-(UIImageView *)chevronImageView;
-(UILabel *)reasonHeaderLabel;
-(CALayer *)topLineLayer;
-(CALayer *)bottomLineLayer;
-(id)initWithFrame:(CGRect)arg1 withAdHideFlowVersion:(int)arg2 ;
-(void)layoutSubviews;
@end

