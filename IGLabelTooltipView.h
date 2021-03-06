
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGLabelTooltipViewDelegate;
@class UILabel, UIImageView;

@interface IGLabelTooltipView : UIView {

	char _shouldExtendToFullWidth;
	id<IGLabelTooltipViewDelegate> _delegate;
	UILabel* _label;
	UILabel* _secondaryLabel;
	UIImageView* _leftBackground;
	UIImageView* _rightBackground;
	float _minX;
	float _maxX;
	int _arrowDirection;
	CGPoint _pinPoint;

}

@property (nonatomic,readonly) UIImageView * leftBackground;                              //@synthesize leftBackground=_leftBackground - In the implementation block
@property (nonatomic,readonly) UIImageView * rightBackground;                             //@synthesize rightBackground=_rightBackground - In the implementation block
@property (assign,nonatomic) float minX;                                                  //@synthesize minX=_minX - In the implementation block
@property (assign,nonatomic) float maxX;                                                  //@synthesize maxX=_maxX - In the implementation block
@property (assign,nonatomic) CGPoint pinPoint;                                            //@synthesize pinPoint=_pinPoint - In the implementation block
@property (assign,nonatomic) int arrowDirection;                                          //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (assign,nonatomic,__weak) id<IGLabelTooltipViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldExtendToFullWidth;                                //@synthesize shouldExtendToFullWidth=_shouldExtendToFullWidth - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                                  //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
-(void)pinToPoint:(CGPoint)arg1 minX:(float)arg2 maxX:(float)arg3 arrowDirection:(int)arg4 ;
-(void)setPinPoint:(CGPoint)arg1 ;
-(UIImageView *)leftBackground;
-(CGPoint)pinPoint;
-(UIImageView *)rightBackground;
-(void)setMinX:(float)arg1 ;
-(float)minX;
-(char)shouldExtendToFullWidth;
-(void)didTap:(id)arg1 ;
-(void)setShouldExtendToFullWidth:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGLabelTooltipViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGLabelTooltipViewDelegate>)delegate;
-(UILabel *)label;
-(UILabel *)secondaryLabel;
-(int)arrowDirection;
-(void)setArrowDirection:(int)arg1 ;
-(float)maxX;
-(void)setMaxX:(float)arg1 ;
@end

