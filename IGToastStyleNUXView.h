
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGToastStyleNUXViewDelegate;
@class UIImageView, UILabel;

@interface IGToastStyleNUXView : UIView {

	id<IGToastStyleNUXViewDelegate> _delegate;
	UIImageView* _leftBackground;
	UIImageView* _rightBackground;
	UILabel* _label;
	float _minX;
	float _maxX;
	int _arrowDirection;
	CGPoint _pinPoint;

}

@property (assign,nonatomic,__weak) id<IGToastStyleNUXViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImageView * leftBackground;                               //@synthesize leftBackground=_leftBackground - In the implementation block
@property (nonatomic,readonly) UIImageView * rightBackground;                              //@synthesize rightBackground=_rightBackground - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                            //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) float minX;                                                   //@synthesize minX=_minX - In the implementation block
@property (assign,nonatomic) float maxX;                                                   //@synthesize maxX=_maxX - In the implementation block
@property (assign,nonatomic) CGPoint pinPoint;                                             //@synthesize pinPoint=_pinPoint - In the implementation block
@property (assign,nonatomic) int arrowDirection;                                           //@synthesize arrowDirection=_arrowDirection - In the implementation block
-(void)pinToPoint:(CGPoint)arg1 minX:(float)arg2 maxX:(float)arg3 arrowDirection:(int)arg4 ;
-(void)didTap:(id)arg1 ;
-(void)setPinPoint:(CGPoint)arg1 ;
-(void)setMinX:(float)arg1 ;
-(UIImageView *)leftBackground;
-(UIImageView *)rightBackground;
-(float)minX;
-(CGPoint)pinPoint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGToastStyleNUXViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGToastStyleNUXViewDelegate>)delegate;
-(void)setText:(id)arg1 ;
-(UILabel *)label;
-(int)arrowDirection;
-(void)setArrowDirection:(int)arg1 ;
-(float)maxX;
-(void)setMaxX:(float)arg1 ;
@end

