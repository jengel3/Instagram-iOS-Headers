
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, CALayer;

@interface IGMarqueeContextView : UICollectionReusableView {

	UILabel* _label;
	CALayer* _separatorLayer;

}

@property (nonatomic,__weak,readonly) UILabel * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,__weak,readonly) CALayer * separatorLayer;              //@synthesize separatorLayer=_separatorLayer - In the implementation block
+(id)headerIdentifier;
+(float)heightForHeaderWithText:(id)arg1 width:(float)arg2 ;
-(CALayer *)separatorLayer;
-(void)setupAndConfigureViews;
-(void)configureWithContext:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
@end

