
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class CALayer;

@interface IGSeparatorFooterView : UICollectionReusableView {

	float _leftInset;
	float _rightInset;
	CALayer* _separatorLayer;

}

@property (nonatomic,readonly) CALayer * separatorLayer;              //@synthesize separatorLayer=_separatorLayer - In the implementation block
@property (assign,nonatomic) float leftInset;                         //@synthesize leftInset=_leftInset - In the implementation block
@property (assign,nonatomic) float rightInset;                        //@synthesize rightInset=_rightInset - In the implementation block
-(CALayer *)separatorLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSeparatorColor:(id)arg1 ;
-(float)leftInset;
-(float)rightInset;
-(void)setLeftInset:(float)arg1 ;
-(void)setRightInset:(float)arg1 ;
@end

